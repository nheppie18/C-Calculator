#include "Calculator.h"

Calculator::Calculator()
{
    firstNumber = INFINITY;
    secondNumber = INFINITY;
    finalNumber = INFINITY;
    operation = ' ';
    done = false;
}

double Calculator::getFirstNumber()
{
    return firstNumber;
}

void Calculator::setFirstNumber()
{
    firstNumber = INFINITY;
    double number;
    while (firstNumber == INFINITY)
    {
        cout << "Please enter a number: ";
        if (cin >> number)
        {
            firstNumber = number;
        }
        
        else
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "That is not a valid number." << endl;
        }
    }
}

double Calculator::getSecondNumber()
{
    return secondNumber;
}

void Calculator::setSecondNumber()
{
    secondNumber = INFINITY;
    double number;
    while (secondNumber == INFINITY)
    {
        cout << "Please enter another number: ";
        if (cin >> number)
        {
            secondNumber = number;
        }
    
        else
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "That is not a valid number." << endl;
        }
    }
}

double Calculator::getFinalNumber()
{
    return finalNumber;
}

void Calculator::performMultiplication()
{
    setSecondNumber();
    finalNumber = firstNumber * secondNumber;
    displayFinalNumber();
    reset();
}

void Calculator::performDivision()
{
    setSecondNumber();
    while (secondNumber == 0)
    {
        cout << "Can't divide by 0" << endl;
        setSecondNumber();
    }
    finalNumber = firstNumber / secondNumber;
    displayFinalNumber();
    reset();
}

void Calculator::performAddition()
{
    setSecondNumber();
    finalNumber = firstNumber + secondNumber;
    displayFinalNumber();
    reset();
}

void Calculator::performSubtraction()
{
    setSecondNumber();
    finalNumber = firstNumber - secondNumber;
    displayFinalNumber();
    reset();
}

void Calculator::performExponent()
{
    setSecondNumber();
    finalNumber = pow(firstNumber, secondNumber);
    displayFinalNumber();
    reset();
}

void Calculator::getOperation()
{
    cout << "Choose an operation: x, /, +, -, e for exponent, c to clear, or q to quit: ";
    cin >> operation;
    switch (operation)
    {
        case '*':
        {
            performMultiplication();
            break;
        }

        case 'x':
        {
            performMultiplication();
            break;
        }

        case '/':
        {
            performDivision();
            break;
        }

        case '+':
        {
            performAddition();
            break;
        }

        case '-':
        {
            performSubtraction();
            break;
        }
    
        case 'e':
        {
            performExponent();
            break;
        }

        case 'c':
        {
            clear();
            break;
        }
        
        case 'q':
        {
            quit();
            break;
        }

        default:
        {
            cout << "Please choose a valid operation." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            operation = ' ';
            break;
        }
    }
}

void Calculator::reset()
{
    firstNumber = finalNumber;
    secondNumber = INFINITY;
    finalNumber = INFINITY;
}

void Calculator::clear()
{
    firstNumber = INFINITY;
    secondNumber = INFINITY;
    finalNumber = INFINITY;
}

void Calculator::quit()
{
    done = true;
}

void Calculator::displayFinalNumber()
{
    double number = getFinalNumber();
    cout << "Answer is: " << number << "\n";
}

bool Calculator::getDone()
{
    return done;
}