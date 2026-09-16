#include <iostream>
using namespace std;

int main()
{
    int digits[] = {1, 2, 3};
    int n = 3;

    for (int i = n - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            break;
        }
        else
        {
            digits[i] = 0;
        }
    }

    // If the first digit is 0, an extra 1 is needed
    if (digits[0] == 0)
    {
        cout << "[1, ";

        for (int i = 0; i < n; i++)
        {
            cout << digits[i];

            if (i != n - 1)
                cout << ", ";
        }

        cout << "]";
    }
    else
    {
        cout << "[";

        for (int i = 0; i < n; i++)
        {
            cout << digits[i];

            if (i != n - 1)
                cout << ", ";
        }

        cout << "]";
    }

    return 0;
}
