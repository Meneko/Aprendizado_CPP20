#include "mathOperations.h"
#include <iostream>

int main()
{
    char operation {};
    std::cout << "Enter operation: (+, -. *, /)" << '\n';
    std::cin >> operation;

    double firstNumber {};
    std::cout << "Enter the first number:";
    std::cin >> firstNumber;

    double secondNumber {};
    std::cout << "Enter the second number:";
    std::cin >> secondNumber;

    switch (operation)
    {
        case '+': std::cout << sum(firstNumber, secondNumber);
        break;

        case '-': std::cout << subtract(firstNumber, secondNumber);
        break;

        case '*': std::cout << multiply(firstNumber, secondNumber);
        break;

        case '/': std::cout << divide(firstNumber, secondNumber);
        break;

        default: std::cout << "You didn't choose a existent option.";
        break;
    }

    return 0;
}