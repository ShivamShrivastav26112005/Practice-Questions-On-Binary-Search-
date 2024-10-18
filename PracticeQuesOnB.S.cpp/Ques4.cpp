// Ques-> given a soted integer array and an integer 'x', find the upper bound of x ?
//  x is a ele. when x is present then also return upper bound of x otherwise u return its upper bound
// when x(ele.) is present or not u return upper bound of x

#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int arr[] = {1, 3, 4, 6, 7, 9, 11, 14, 17, 20};
    int x = 14;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // binary search for upper bound

    int lo = 0;
    int hi = n - 1;

    bool flag = false;

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
        {
            flag = true;
            cout << arr[mid + 1];
            break;
        }

        else if (arr[mid] > x)
            hi = mid - 1;

        else
            lo = mid + 1;
    }

    // this is valid for when already array is given not you take input
    if (flag == false)
        cout << arr[lo];
}

//    int x= 19;
// 1 3 4 6 7 9 11 14 17 20
// 20

//    int x= 0;
// 1 3 4 6 7 9 11 14 17 20
// 1