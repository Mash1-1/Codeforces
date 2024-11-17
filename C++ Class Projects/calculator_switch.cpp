#include <iostream>
using namespace std;
int main()
{
    int continue_;
    continue_ = 1;

    while (continue_ != 0)
    {
        int operand1, operand2;
        float result;
        char operation;

        cout << "Enter operand 1 : ";
        cin >> operand1;

        cout << "Enter operator : ";
        cin >> operation;

        cout << "Enter operand 2 : ";
        cin >> operand2;

        switch (operation)
        {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0)
            {
                float operandA, operandB;
                operandA = operand1;
                operandB = operand2;
                result = operandA / operandB;
            }
            else
            {
                cout << "Error : Division by zero! ";
                exit(0);
            }
            break;
        default:
            cout << "Enter a valid operation! ";
        }
        cout << "Result : "
             << result << endl;
        cout << "Do you want to continue? " << endl
             << "Enter: continue(1) or stop(0)." << endl;
        cin >> continue_;
    }
    cout << " Thank You! Have a great day. " << endl;
}