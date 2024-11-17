#include <iostream>
using namespace std;
int main()
{
    int cont = 0;
    while (cont == 0)
    {
        float h;

        cout << "Enter your height(m): ";
        cin >> h;

        if (h > 2)
        {
            cout << "You are tall! " << endl;
        }
        else if (h > 1.5)
        {
            cout << "You are average height! " << endl;
        }
        else
        {
            cout << "You are short! " << endl;
        }

        cout << "Do you want to continue? :yes(0) or No(1)" << endl;
        cin >> cont;
    }
    cout << "finished" << endl;
}