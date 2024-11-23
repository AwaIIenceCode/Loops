#include <iostream>

using namespace std;

int main()
{
    int start, finish;
    int sum_number = 0;

    cout << "Enter the start range ->";
    cin >> start;

    cout << "Enter the finish range -> ";
    cin >> finish;

    if (start > finish)
    {
        int temp = start;
        start = finish;
        finish = temp;
    }

    for (int i = start; i <= finish; i++)
    {
        sum_number += i;
    }

    cout << sum_number << endl;

    return 0;
}