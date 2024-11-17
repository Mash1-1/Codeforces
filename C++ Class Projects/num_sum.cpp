#include <iostream>
using namespace std;
int main()
{
    int sum, num, digit, product;
    sum = 0;
    product = 1;
    bool a;

    cout << "Enter your number: ";
    cin >> num;
    int sum_cubes = 0;

    int num_1 = num;

    while (num != 0)
    {
        digit = num % 10;

        sum_cubes += (digit * digit * digit);

        if (digit % 2 == 0)
        {
            sum += digit;
        }
        else
        {
            product *= digit;
        }
        num /= 10;
    }
    if (sum_cubes == num_1)
    {
        a = true;
        cout << num_1 << " is a" << endl;
    }
    else
    {
        a = false;
        cout << num_1 << " is not a" << endl;
    }
    cout
        << "Sum of even digits of " << num_1 << " is " << sum;
    cout << endl
         << "Product of odd digits of " << num_1 << " is " << product << endl;

    return 0;
}