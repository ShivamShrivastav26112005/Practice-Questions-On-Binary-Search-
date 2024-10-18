// Ques-> given an array of integers nums which is sorted in ascending order and an integer target in nums.
// If target exits then return its index , otherwise return -1. you must write an algo with o(logn) runtime complexity.

#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int tar = 8;
    int nums[] = {1, 3, 5, 6, 8, 13};
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    // 1 3 5 6 8 13 arrya print
    // binary search algorithm

    int lo = 0;
    int hi = n - 1;

    bool flag = false;

    // **** when code sometimes gives u error then use boolen check mark like in this ques. ****
    //******** boolean check mark write always outer of the loop not inside of the loop *********
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;

        if (nums[mid] == tar)
        {
            flag = true;
            cout << mid << " ";
            break;
        }

        else if (nums[mid] < tar)
        {
            lo = mid + 1;
        }
        else if (nums[mid] > tar)
        {
            hi = mid - 1;
        }
    }
    
    if (flag == false)
        cout << -1;
}
