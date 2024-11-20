#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int result = 1;

    cout << "Enter the \"X\"";
    cin >> x;

    cout << "Enter the \"Y\"";
    cin >> y;

    for (int i = 0; i < y; i++)
    {
        result *= x;
    }

    cout << result;
    return 0;
}