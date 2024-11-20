#include <iostream>

using namespace std;

int main()
{
    int start, finish;
    int sum_number;

    cout << "Enter the start range ->";
    cin >> start;

    cout << "Enter the finish range -> ";
    cin >> finish;

    for (start; start <= finish; start++)
    {
        sum_number += start;
    }

    cout << sum_number << endl;

    return 0;
}