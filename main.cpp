#include <iostream>

using namespace std;

int main()
{
    int user_number;
    int result = 1;
    cout << "Enter the start range -> " << endl;
    cout << "Number must be >= 1" << endl;
    cin >> user_number;

    for (user_number; user_number <= 20; user_number++)
    {
        result *= user_number;
    }

    cout << "Dobutok= " << result;

    return 0;
}