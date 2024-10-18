// THIS CODE IS INCORRECT

// PLEASE WRITE CORRECT CODE

// ques-> find first and last position of element in sorted array ?
// ex - arr={1,2,2,2,3,3,4,4,4,4,5,5,6,9}
// target (x) = 4
// ans=[6,9]

// some times code is run but some times not run 

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    int n = 14;
    int arr[] = {1, 2, 2, 2, 3, 3, 4, 4, 4, 4, 5, 5, 6, 9};
    int x = -1;
    int k = 3;
    vector<int> ans(k);

    if (x < arr[0])
    {
        for (int i = 0; i < k; i++)
        {
            ans[i] = arr[i];

            cout << ans[i];
        }

        // i = 1 2 3 4 (i=n-1=4)   x=7   k=3   k = 0 0 4 (j=n-1=4)
        if (x > arr[n - 1])
        {
            int i = n - 1;
            int j = k - 1;
            while (j >= 0)
            {
                ans[i] = arr[i];
                j--;
                i--;

                cout << ans[i];
            }
            // normal binary search

            int lo = 0;
            int hi = n - 1;
            bool flag = false;
            int t = 0;
            int mid = -1;

            while (lo <= hi)
            {
                if (arr[mid] < x)
                {
                    flag = true;
                    ans[t] = ans[mid];
                    t++;
                    break;
                }

                else if (arr[mid] > x)
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }
        

        int lb =hi;
        int ub= lo;
        if(flag==true)
        {
            lb=mid-1;
            ub=mid+1;
        }
        while(t<k && lb>0 && ub<=n-1)
        {
            // when ele. is lie in b/w array than we find modulo
            int d1 = abs(x-arr[lb]);
            int d2=abs(x-arr[ub]);
            if(d1<=d2)
            {
                ans[t]=ans[lb];
                lb--;
            }
            else
            {
                ans[t]=arr[ub];
                ub++;
            }
            t++;
        }

        if(lb<0)
        {
            while(t<k)
            {
                ans[t]=ans[ub];
                ub++;
                t++;
            }
        }

        sort(ans.begin(), ans.end());
        cout<<ans[i];
        }
    }
    }