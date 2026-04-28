// Write two functions that each take a string as a parameter and return the reversed string (i.e. the original string read from right to left). To do this, use a loop in the first function and no loop in the second function. Only the methods of the class string listed under "Description" may be used.


#include <iostream>
#include <string>

std::string reverseWithLoop(const std::string& str) {
    std::string reversed;
    for (int i = str.length() - 1; i >= 0; --i) {
        reversed += str[i];
    }
    return reversed;
}

std::string reverseWithoutLoop(const std::string& str) {
    if (str.empty()) {
        return "";
    }
    return str.back() + reverseWithoutLoop(str.substr(0, str.length() - 1));
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::string reversedWithLoop = reverseWithLoop(input);
    std::string reversedWithoutLoop = reverseWithoutLoop(input);

    std::cout << "Reversed with loop: " << reversedWithLoop << std::endl;
    std::cout << "Reversed without loop: " << reversedWithoutLoop << std::endl;

    return 0;
}