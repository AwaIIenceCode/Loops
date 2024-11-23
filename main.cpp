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

    if (y < 0)
    {
        cout << "Negative exponents are not supported!" << endl;
        return 1;
    }

    for (int i = 0; i < y; i++)
    {
        result *= x;
    }

    cout << "The result of " << x << "^" << y << " is: " << result << endl;

    return 0;
}