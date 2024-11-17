#include <iostream>
using namespace std;

int main()
{
    char symbol;
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char digit[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};


    cout << "Input your Symbol: ";
    cin >> symbol;
    for (int i = 0; i < 26; i++)
    {
        if (tolower(symbol) == alphabet[i])
        {
            cout << endl
                 << "Your symbol is an alphabet!";
            exit(0);
        }
    }
    for (int j = 0; j < 10; j++)
    {
        if (symbol == digit[j])
        {
            if ((symbol % 2) == 0)
            {
                if (symbol >= 0)
                {
                    cout << endl
                         << "Your symbol is a positive even number!";
                    exit(0);
                }
                else
                {
                    cout << endl
                         << "Your symbol is a negative even number!";
                    exit(0);
                }
            }
            else
            {
                if (symbol >= 0)
                {
                    cout << endl
                         << "Your symbol is a positive odd number!";
                    exit(0);
                }
                else
                {
                    if (symbol >= 0)
                    {
                        cout << endl
                             << "Your symbol is a negative odd number!";
                        exit(0);
                    }
                }
            }
        }
    }
    cout << endl
         << "Your symbol is a special character!";
    return 0;
}