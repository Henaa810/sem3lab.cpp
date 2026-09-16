#include <iostream>
using namespace std;

void sumsquare(int l[], int n, int result[])
{
    int odd = 0, even = 0;

    for (int i = 0; i < n; i++)
    {
        if (l[i] % 2 == 0)
            even = even + l[i] * l[i];
        else
            odd = odd + l[i] * l[i];
    }

    result[0] = odd;
    result[1] = even;
}

int main()
{
    int l[] = {1, 3, 5};
    int n = 3;
    int result[2];

    sumsquare(l, n, result);

    cout << "[" << result[0] << ", " << result[1] << "]";

    return 0;
}
