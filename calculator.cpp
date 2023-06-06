#include <iostream>
using namespace std;

// Initialize signed ints
signed int operandOne, operandTwo;
char operation;

int calculate(int, int, char);

int main()
{

    cout << "Please enter your first operand:\n";
    cin >> operandOne;
    cout << "Please enter your operator:\n";
    cin >> operation;
    cout << "Please enter your second operand:\n";
    cin >> operandTwo;

    cout << operandOne << " " << operation << " " << operandTwo << " = \n";
    calculate(operandOne, operandTwo, operation);

    return 0;
}

int calculate(int operandOne, int operandTwo, char op)
{
    if (op == '/')
    {
        cout << operandOne / operandTwo;
    }
    else if (op == '+')
    {
        cout << operandOne + operandTwo;
    }
    else if (op == '-')
    {
        cout << operandOne - operandTwo;
    }
    else if (op == '*')
    {
        cout << operandOne * operandTwo;
    }

    return 0;
}