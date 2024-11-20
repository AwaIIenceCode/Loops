#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int user_number;

    cout << "Enter the number ->";
    cin >> user_number;

    for (int i = 0; i <= user_number; i++)
    {
        cout << i << endl;
    }

    _getch();
    return 0;
}