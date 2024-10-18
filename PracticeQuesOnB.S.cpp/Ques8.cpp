// Ques-> given a sorted array of non-negative distinct integers.
// find the smallest missing non-negative ele. in it ?

// non-negative (ele.s is not negative) distinct integers. means all ele. are different
// non-negative means ele. starts from 0 to n  0,1,2,3,4,5,6...





// // solve by linear search T.C. = O(n)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 12;
//     int arr[] = {0, 1, 2, 3, 4, 5, 11, 14, 16, 17, 18};
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;


//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != i)   // (i) is a index and arr[i] is ele. when both is not equal.
//         // than those ele. is smallest missing ele.
//         {
//             cout << i;
//             break;
//         }
//     }
// }

// // 0 1 2 3 4 5 11 14 16 17 18 12
// // 6



// solve by binary search 

#include <iostream>
using namespace std;
int main()
{
    int n = 11;
    int arr[] = {0, 1, 2, 3, 4, 5, 11, 14, 16, 17, 18};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


//binary searching algo...
int lo=0; 
int hi=n-1;
int ans=-1;

while(lo<=hi)
{
    int mid=lo+(hi-lo)/2;
    if(arr[mid]==mid) // missing ele.is not found
    lo=mid+1;
   
    else
    //  (arr[mid]!=mid)  // missing ele.is found  
   {
    ans = mid;
    hi=mid-1;
   }
}
    cout<<ans;

}
   

// int n=11
// 0 1 2 3 4 5 11 14 16 17 18 
// 6