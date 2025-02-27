#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

int binaryToDecimal(const std::string& binary) {
    int decimal = 0;
    int length = binary.length();

    for (int i = 0; i < length; ++i) {
        if (binary[length - i - 1] == '1') {
            decimal += std::pow(2, i);
        }
    }

    return decimal;
}

std::string decimalToBinary(int decimal) {
    std::string binary = "";
    while (decimal > 0) {
        binary += (decimal % 2 == 0 ? "0" : "1");
        decimal /= 2;
    }
    std::reverse(binary.begin(), binary.end());
    return binary;
}

int main() {
    int choice;
    std::cout << "Choose an option:\n1. Convert Binary to Decimal\n2. Convert Decimal to Binary\nEnter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            std::string binaryNumber;
            std::cout << "Enter a binary number: ";
            std::cin >> binaryNumber;
            int decimalNumber = binaryToDecimal(binaryNumber);
            std::cout << "The decimal equivalent of " << binaryNumber << " is " << decimalNumber << std::endl;
            break;
        }
        case 2: {
            int decimalNumber;
            std::cout << "Enter a decimal number: ";
            std::cin >> decimalNumber;
            std::string binaryNumber = decimalToBinary(decimalNumber);
            std::cout << "The binary equivalent of " << decimalNumber << " is " << binaryNumber << std::endl;
            break;
        }
        default:
            std::cout << "Invalid choice. Please run the program again and choose either 1 or 2." << std::endl;
    }

    return 0;
}
