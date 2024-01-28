#pragma once
using namespace std;
#include <iostream>
#include <string>

class Calculator {
private:
    double firstNumber;
    double secondNumber;
    double finalNumber;
    char operation;
    bool done;
public:
    Calculator();
    double getFirstNumber();
    void setFirstNumber();
    double getSecondNumber();
    void setSecondNumber();
    double getFinalNumber();
    void performMultiplication();
    void performDivision();
    void performAddition();
    void performSubtraction();
    void performExponent();
    void displayFinalNumber();
    void getOperation();
    bool getDone();
    void reset();
    void clear();
    void quit();
};