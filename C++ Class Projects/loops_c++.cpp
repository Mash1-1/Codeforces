#include <iostream>
using namespace std;
int main()
{
    int num_star;

    cout << "enter number of stars : ";
    cin >> num_star;

    for (int j = 0; j < 10; j++)
    {
        for (int i = 0; i < num_star; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
}