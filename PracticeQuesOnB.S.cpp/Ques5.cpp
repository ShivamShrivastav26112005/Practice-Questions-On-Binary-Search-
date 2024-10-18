// Ques-> Given a sorted array of n ele. and a target 'x' .
// find the first occurrence of 'x' in the array .
// If 'x' does not exits return -1 ?

// first occurrence means first index

//****** If 'x' does not exits return -1 *********
//  ***** IN THAT CASE USE BOOLEAN CHECKMARK*********

// sorted array of n ele. = 1,2,3,3,3,4,4,4,4,5,5,6,6,8
// given 'x' = 4
// 'x' is a target ele.
// first occurrence(index) of 'x' is 5.

#include <iostream>
using namespace std;
int main()
{
    int n = 9;
    int x = 3;
    int arr[] = {1, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 6, 6, 8};
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
            // first occurrence always go to the left
            // so we check if mid-1 is != x so this is out 1st occ(index)
            if (arr[mid - 1] != x)  // ele.check lower bound of just (mid) so mid - 1
            {
                flag = true;
                cout << mid << " "; // we check if mid - 1 is not equal to x than true this is first occ
                break;
            }
            else
            {
                // ( arr[mid-1]== x ) 
                
                 // means mid-1 ke bad ele. x ke equal h 
                // means mid -1 ke bad sare ele. khatam kar dete h hm 
                // and tb hm apne (hi) index ko mid se pahle la dete h and check 
                hi = mid - 1; 
            }
        }
        else if (arr[mid] < x)

            lo = mid + 1;

        else
            hi = mid - 1;
    }

    if (flag == false)
        cout << -1;
}

// x=5
// 1 2 3 3 3 4 4 4 4 
// 5


// x=3
// 1 2 3 3 3 4 4 4 4 
// 2