#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int start, finish;

    cout << "Enter the start range -> ";
    cin >> start;
    cout << "Enter the finish range -> ";
    cin >> finish;

    if (start > finish)
    {
        int temp = start;
        start = finish;
        finish = temp;
    }
    cout << endl;

    for (start; start <= finish; start++)
    {
        if (start % 2 == 0)
        {
            cout << "Number " << start << " event" << endl;
        }

        else if (start % 2 != 0)
        {
            cout << "Number " << start << " odd" << endl;
        }

        if (start % 7 == 0)
        {
            cout << "Number " << start << " multiple of 7" << endl;
        }
    }

    return 0;
}