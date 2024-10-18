// Ques-> given a soted integer array and an integer 'x', find the lower bound of x ?
//  x is a ele. when x is present then also return lower bound of x otherwise u return its lower bound
// you must return lower bound of x in any case 

// here 'x' is a target value and return its when bound when exact 'x' is not present using binary search
// **** WHEN QUES. ASK TO TOU TO FIND LOWER BOUND THEN ALWAYS RETURN AT THE NED HIGH INDEX ****
// let's see

// 'x' = target
// binary searching me hm search space ko aadhe se kam kar dete hai

#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    int x = 5;
    int arr[] = {1, 2, 4, 5, 7, 9, 12, 14, 27};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    int lo = 0;
    int hi = n - 1;
    bool flag = false;
    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x)
        {
            flag = true;
            cout << arr[mid - 1] << " "; // ele. return lower bound so mid - 1
            break;
        }

        else if (arr[mid] < x)
            lo = mid + 1;

        else
            hi = mid - 1;
        ;
    }
    if (flag == false)
        cout << arr[hi];
}

// always print lower bound
// int x = 5; target 
// 1 2 4 5 7 9 12 14 27 
// 4 