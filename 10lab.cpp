#include <iostream>
using namespace std;

int main()
{
    int a[100], n, choice, pos, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    do
    {
        cout << "\n\n--- ARRAY OPERATIONS ---";
        cout << "\n1. Display";
        cout << "\n2. Insert";
        cout << "\n3. Delete";
        cout << "\n4. Search";
        cout << "\n5. Sort";
        cout << "\n6. Reverse";
        cout << "\n7. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Array: ";
            for (int i = 0; i < n; i++)
                cout << a[i] << " ";
            break;

        case 2:
            cout << "Enter position: ";
            cin >> pos;

            cout << "Enter value: ";
            cin >> value;

            for (int i = n; i > pos; i--)
                a[i] = a[i - 1];

            a[pos] = value;
            n++;

            cout << "Element inserted.";
            break;

        case 3:
            cout << "Enter position: ";
            cin >> pos;

            for (int i = pos; i < n - 1; i++)
                a[i] = a[i + 1];

            n--;

            cout << "Element deleted.";
            break;

        case 4:
            cout << "Enter value to search: ";
            cin >> value;

            pos = -1;

            for (int i = 0; i < n; i++)
            {
                if (a[i] == value)
                {
                    pos = i;
                    break;
                }
            }

            if (pos == -1)
                cout << "Element not found.";
            else
                cout << "Element found at index " << pos;
            break;

        case 5:
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    if (a[j] > a[j + 1])
                    {
                        int temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                }
            }

            cout << "Array sorted.";
            break;

        case 6:
            for (int i = 0; i < n / 2; i++)
            {
                int temp = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = temp;
            }

            cout << "Array reversed.";
            break;

        case 7:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid choice.";
        }

    } while (choice != 7);

    return 0;
}
