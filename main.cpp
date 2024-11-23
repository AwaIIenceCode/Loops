#include <iostream>

using namespace std;

int main()
{
    int user_number;
    int sum_number = 0;

    cout << "Enter the start range ->";
    cin >> user_number;

    if (user_number > 500)
    {
        cout << "The start number must be <= 500!" << endl;
        return 1;
    }

    for (int i = user_number; i <= 500; i++)
    {
        sum_number += i;
    }

    cout << sum_number;

    return 0;
}