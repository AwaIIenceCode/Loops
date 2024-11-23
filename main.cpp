#include <iostream>

using namespace std;

int main()
{
    int user_number;
    int result = 1;

    cout << "Enter the start range -> " << endl;
    cout << "Number must be >= 1" << endl;
    cin >> user_number;

    if (user_number < 1 || user_number > 20)
    {
        cout << "The number must be between 1 and 20!" << endl;
        return 1;
    }

    for (int i = user_number; i <= 20; i++)
    {
        result *= i;
    }

    cout << "Product = " << result;

    return 0;
}