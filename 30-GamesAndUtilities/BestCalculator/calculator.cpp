#include <iostream>
using namespace std;

int main()
{
    cout << "------------------------------ This is the Best Calculator --------------------------------------\n\n"
         << endl;

    char oper;
    double num1, num2;

    cout << "First enter Operator for Calculation : ";
    cin >> oper;

    cout << "Now Enter the Two numbers for Calculation :" << endl;
    cin >> num1 >> num2;

    if (oper == '+')
    {
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
    else if (oper == '-')
    {
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    }
    else if (oper == '*')
    {
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    }
    else if (oper == '/')
    {
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Division by zero is not allowed!" << endl;
    }
    else
    {
        cout << "You are entering the Wrong Operator!!!!!!!!!!!!" << endl;
    }

    return 0;
}
