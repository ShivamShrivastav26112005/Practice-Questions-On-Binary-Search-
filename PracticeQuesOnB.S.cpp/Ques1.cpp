
// BINARY SEARCHING
// IT WORKS ONLY SORTED(ASCENDING ORDER OR DESCENDING ORDER) ARRAYS

// Ques.1-> Given array = {1,2,4,5,9,15,18,21} and 
// a target value is 18
// search index of target value using binary search

#include<iostream>
using namespace std;
int main()
{
    int n=8;
    int tar=18;
    int arr[]={1,2,4,5,9,15,18,21};
     for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

// binary search algorithm
// we make three pointers lo, hi, mid-> These are index.

int lo=0;
 int hi=n-1;
 while(lo<=hi)
 {
    int mid=lo+(hi-lo)/2;
    if(arr[mid]==tar) 
    {
    cout<<arr[mid]; // arr[mid] shows target ele.
    cout<<endl;
    cout<<mid; // mid shows index of the target ele.
    break;
    }
    else if (arr[mid]<tar)
    lo=mid+1;
    else 
    //(arr[mid]>tar)
    hi=mid-1;
 }
}



// 1 2 4 5 9 15 18 21 
// 18
// 6
