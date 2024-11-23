//var_1

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

    for (int i = start; i <= finish; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Number " << start << " event" << endl;
        }

        else if (i % 2 != 0)
        {
            cout << "Number " << start << " odd" << endl;
        }

        if (i % 7 == 0)
        {
            cout << "Number " << start << " multiple of 7" << endl;
        }
    }

    _getch();
    return 0;
}

//var_2

#include <iostream>

using namespace std;

int main()

{
    int start, finish;

    cout << "Enter the start range -> ";
    cin >> start;
    cout << "Enter the finish range -> ";
    cin >> finish;

    cout << "\nEven numbers:" << endl;
    for (int i = start; i <= finish; i++)
    {
        if (i % 2 == 0) cout << i << " ";
    }

    cout << "\nOdd numbers:" << endl;
    for (int i = start; i <= finish; i++)
    {
        if (i % 2 != 0) cout << i << " ";
    }

    cout << "\nNumbers multiple of 7:" << endl;
    for (int i = start; i <= finish; i++)
    {
        if (i % 7 == 0) cout << i << " ";
    }

    return 0;
}

