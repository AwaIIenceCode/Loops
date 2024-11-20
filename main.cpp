//Напишіть програму, яка обчислює суму цілих чисел від а до 500 (значення a вводиться з клавіатури).

#include <iostream>

using namespace std;

int main()
{
    int user_number;
    int sum_number = 0;

    cout << "Enter the start range ->";
    cin >> user_number;

    for (user_number; user_number <= 500; user_number++)
    {
        sum_number += user_number;
    }

    cout << sum_number;

    return 0;
}