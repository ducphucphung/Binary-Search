#include <bits/stdc++.h>
using namespace std;
int binarysearch(int arr[];int n; int target)
{
    int lo=0; int hi=n-1;
    while(lo<hi)
    {
        int mid=(lo+hi)/2;
        if(a[mid]>target)
            hi=mid-1;
        else if(a[mid]==target)
            return mid;
        else
            lo=mid+1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int myarr[n];
    for(int i=0; i<n; i++) cin>>myarr[i];
    for(int i=0; i<n; i++)
    {
        int target=k-myarr[i]
        if(binarysearch(target)!=-1)
            cout<<myarr[i]<<target
            ;
    }
    cout << "Hello world!" << endl;
    return 0;
}
