// #include <iostream>
// using namespace std;

// signed int operandOne, operandTwo; // Initialize signed ints
// char operation;                    // Initialize operation character (+, -, /, *)

// int calculate(int, int, char);

// int main()
// {

//     cout << "Please enter your first operand:\n";
//     cin >> operandOne;
//     cout << "Please enter your operator:\n";
//     cin >> operation;
//     cout << "Please enter your second operand:\n";
//     cin >> operandTwo;

//     cout << operandOne << " " << operation << " " << operandTwo << " = \n";
//     calculate(operandOne, operandTwo, operation);

//     return 0;
// }

// int calculate(int operandOne, int operandTwo, char op)
// {
//     if (op == '/')
//     {
//         cout << operandOne / operandTwo;
//     }
//     else if (op == '+')
//     {
//         cout << operandOne + operandTwo;
//     }
//     else if (op == '-')
//     {
//         cout << operandOne - operandTwo;
//     }
//     else if (op == '*')
//     {
//         cout << operandOne * operandTwo;
//     }

//     return 0;
// }

// --------------------
// Another method

#include <iostream>
using namespace std;

int main()
{
    // Initialize variables
    char op;
    double num1, num2, result;

    // Prompt user to enter their operator...
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // ...and to enter their numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Switch statement takes in user's operator as its expression
    switch (op)
    {
    // If op = '+', then add...
    case '+':
        result = num1 + num2;
        break;
    // ...subtract...
    case '-':
        result = num1 - num2;
        break;
    // ...multiply...
    case '*':
        result = num1 * num2;
        break;
    // ...or divide.
    case '/':
        // Num2 cannot be zero...
        if (num2 != 0)
            result = num1 / num2;
        // If it is, then this catches it.
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
        break;
    // Default case for if the user enters anything but the permitted values for op
    default:
        cout << "Error: Invalid operator." << endl;
        return 0;
    }

    // Output the result!
    cout << "Result: " << result << endl;

    return 0;
}