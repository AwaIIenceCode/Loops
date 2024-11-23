#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    int sum_number = 0;

    for (int i = 1; i <= 1000; i++)
    {
        sum_number += i;
        count ++;
    }

    double result = static_cast<double>(sum_number)/ count;

    cout << "Avarage: " << result << endl;

    return 0;
}