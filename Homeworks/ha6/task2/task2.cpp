#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// Selection Sort - sorts vector in place
void selectionSort(vector<double>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

// Calculate sum of values
double calculateSum(const vector<double>& arr) {
    double sum = 0;
    for (double val : arr) {
        sum += val;
    }
    return sum;
}

// Calculate mean value
double calculateMean(const vector<double>& arr) {
    if (arr.empty()) return 0;
    return calculateSum(arr) / arr.size();
}

// Calculate standard deviation
double calculateStdDev(const vector<double>& arr) {
    if (arr.size() < 2) return 0;
    double mean = calculateMean(arr);
    double sumSquaredDiff = 0;
    for (double val : arr) {
        sumSquaredDiff += (val - mean) * (val - mean);
    }
    return sqrt(sumSquaredDiff / arr.size());
}

// Calculate median
double calculateMedian(const vector<double>& arr) {
    if (arr.empty()) return 0;
    int n = arr.size();
    if (n % 2 == 0) {
        return (arr[n/2 - 1] + arr[n/2]) / 2.0;
    } else {
        return arr[n/2];
    }
}

// Calculate first quartile (Q1) - median of lower half
double calculateQ1(const vector<double>& arr) {
    int n = arr.size();
    if (n < 4) return arr[0];
    
    vector<double> lowerHalf;
    int mid = n / 2;
    
    if (n % 2 == 0) {
        // Even: lower half is first n/2 elements
        for (int i = 0; i < mid; i++) {
            lowerHalf.push_back(arr[i]);
        }
    } else {
        // Odd: exclude median, take first n/2 elements
        for (int i = 0; i < mid; i++) {
            lowerHalf.push_back(arr[i]);
        }
    }
    
    return calculateMedian(lowerHalf);
}

// Calculate third quartile (Q3) - median of upper half
double calculateQ3(const vector<double>& arr) {
    int n = arr.size();
    if (n < 4) return arr[n-1];
    
    vector<double> upperHalf;
    int mid = n / 2;
    
    if (n % 2 == 0) {
        // Even: upper half is last n/2 elements
        for (int i = mid; i < n; i++) {
            upperHalf.push_back(arr[i]);
        }
    } else {
        // Odd: exclude median, take last n/2 elements
        for (int i = mid + 1; i < n; i++) {
            upperHalf.push_back(arr[i]);
        }
    }
    
    return calculateMedian(upperHalf);
}

// Main function that performs all calculations
struct Statistics {
    double sum;
    double mean;
    double stdDev;
    double median;
    double q1;
    double q3;
};

Statistics analyzeData(vector<double>& arr) {
    // Sort the data using Selection Sort
    selectionSort(arr);
    
    Statistics stats;
    stats.sum = calculateSum(arr);
    stats.mean = calculateMean(arr);
    stats.stdDev = calculateStdDev(arr);
    stats.median = calculateMedian(arr);
    stats.q1 = calculateQ1(arr);
    stats.q3 = calculateQ3(arr);
    
    return stats;
}

// Test the function
int main() {
    vector<double> data = {5.0, 12.0, 8.0, 3.0, 9.0, 4.0, 11.0, 2.0, 7.0, 10.0};
    
    cout << "Original data: ";
    for (double val : data) cout << val << " ";
    cout << endl;
    
    Statistics stats = analyzeData(data);
    
    cout << "Sorted data:   ";
    for (double val : data) cout << val << " ";
    cout << endl << endl;
    
    cout << "Sum:     " << stats.sum << endl;
    cout << "Mean:    " << stats.mean << endl;
    cout << "StdDev:  " << stats.stdDev << endl;
    cout << "Median:  " << stats.median << endl;
    cout << "Q1:      " << stats.q1 << endl;
    cout << "Q3:      " << stats.q3 << endl;
    
    return 0;
}