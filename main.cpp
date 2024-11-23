#include <iostream>

using namespace std;

int main()
{
    int user_number;

    cout << "Enter the number -> ";
    cin >> user_number;

    cout << "\nMultiplication table for " << user_number << ":" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << user_number << " * " << i << " = " << user_number * i << endl;
    }

    return 0;
}