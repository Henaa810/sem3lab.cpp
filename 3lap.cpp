#include <iostream>
using namespace std;

int searchInsert(int nums[], int n, int target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == target)
            return mid;

        else if (nums[mid] < target)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return low;
}

int main()
{
    int nums[] = {1, 3, 5, 6};
    int n = 4;
    int target = 5;

    int result = searchInsert(nums, n, target);

    cout << result;

    return 0;
}
