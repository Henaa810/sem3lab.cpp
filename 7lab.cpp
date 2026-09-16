#include <iostream>
using namespace std;

int remdup(int a[], int n, int result[])
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        bool duplicate = false;

        for (int j = 0; j < count; j++)
        {
            if (result[j] == a[i])
            {
                duplicate = true;
                break;
            }
        }

        if (!duplicate)
        {
            result[count] = a[i];
            count++;
        }
    }

    return count;
}

int main()
{
    int a[] = {3, 5, 7, 5, 3, 7, 10};
    int n = 7;
    int result[7];

    int count = remdup(a, n, result);

    cout << "Result: ";

    for (int i = 0; i < count; i++)
    {
        cout << result[i] << " ";
    }

    cout << "\nCount: " << count;

    return 0;
}
