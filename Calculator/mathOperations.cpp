#include "mathOperations.h"

double sum(double firstNumber, double secondNumber)
{
    return firstNumber + secondNumber;
}

double subtract(double firstNumber, double secondNumber)
{
    return firstNumber - secondNumber;
}

double multiply(double firstNumber, double secondNumber)
{
    return firstNumber * secondNumber;
}

double divide(double firstNumber, const double secondNumber)
{
    if (secondNumber == 0)
    {
        return 0;
    }
    return firstNumber / secondNumber;

}

