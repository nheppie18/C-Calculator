#include "Calculator.h"

int main()
{
    Calculator c = Calculator();
    bool done = false;
    
    while (done != true)
    {
        if (c.getFirstNumber() == INFINITY)
        {
            c.setFirstNumber();
        }
        c.getOperation();
        done = c.getDone();
        if (done == true)
        {
            cout << "Thanks for using my calculator!" << endl;
        }
    }
}

//get first number
//get operation
//get second number
//display final number
//ask to clear or perform another operation