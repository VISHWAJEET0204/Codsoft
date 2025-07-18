#include <iostream>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Simple Calculator\n";
    std::cout << "------------------\n";

    // Input two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Input operation
    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> operation;

    // Perform calculation
    switch (operation) {
        case '+':
            std::cout << "Result: " << (num1 + num2) << std::endl;
            break;
        case '-':
            std::cout << "Result: " << (num1 - num2) << std::endl;
            break;
        case '*':
            std::cout << "Result: " << (num1 * num2) << std::endl;
            break;
        case '/':
            if (num2 != 0)
                std::cout << "Result: " << (num1 / num2) << std::endl;
            else
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            break;
        default:
            std::cout << "Invalid operation." << std::endl;
    }

    return 0;
}
