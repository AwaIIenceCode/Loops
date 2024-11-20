#include <iostream>

using namespace std;

int main()
{
    int user_number;
    int i = 1;

    cout << "Enter the number -> ";
    cin >> user_number;

    for (user_number; i <= 9; i++)
    {
        cout << user_number << " * " << i << " = " << user_number * i << endl;
    }

    return 0;
}