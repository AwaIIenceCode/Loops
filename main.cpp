#include <iostream>

using namespace std;

int main()
{
    int user_num;
    int sum_number = 0;

    do
    {
        cout << "Enter the number -> ";
        cin >> user_num;

        sum_number += user_num;
    } while (user_num != 0);

    cout << sum_number;

    return 0;
}