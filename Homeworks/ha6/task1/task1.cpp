#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to count the number of digits in an integer
int countDigits(int n) {
    if (n == 0) return 1;
    int count = 0;
    n = abs(n);
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Function that groups numbers by digit count and returns mean values
vector<double> analyzeTestSeries(const vector<vector<int>>& testResults) {
    // Find the maximum number of digits
    int maxDigits = 0;
    for (const auto& testSet : testResults) {
        for (int val : testSet) {
            int digits = countDigits(val);
            if (digits > maxDigits) {
                maxDigits = digits;
            }
        }
    }
    
    // Create groups for each digit count
    vector<vector<int>> groups(maxDigits + 1);
    for (const auto& testSet : testResults) {
        for (int val : testSet) {
            int digits = countDigits(val);
            groups[digits].push_back(val);
        }
    }
    
    // Calculate means for each group
    vector<double> means;
    for (int i = 1; i <= maxDigits; i++) {
        if (!groups[i].empty()) {
            double sum = 0;
            for (int val : groups[i]) {
                sum += val;
            }
            means.push_back(sum / groups[i].size());
        }
    }
    
    return means;
}

// Test the function
int main() {
    // Example from the task
    vector<vector<int>> testResults = {
        {5, 12, 2430, 1, 17},      // Test set 1
        {5219, 22, 9, 12},         // Test set 2
        {7, 9, 18, 4231}           // Test set 3
    };
    
    vector<double> means = analyzeTestSeries(testResults);
    
    cout << "Means: {";
    for (size_t i = 0; i < means.size(); i++) {
        cout << means[i];
        if (i < means.size() - 1) cout << ", ";
    }
    cout << "}" << endl;
    
    return 0;
}