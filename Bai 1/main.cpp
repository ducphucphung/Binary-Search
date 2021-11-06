#include <bits/stdc++.h>
using namespace std;
int binarysearch(int a[], int n, int target)
{
    int lo = 0, hi = n - 1;
    while(lo <= hi)
    {
        int m = (lo + hi)/2;
        if(a[m] == target)
            return m;
        else if( target > a[m])
            lo = m + 1;
        else
            hi = m - 1;
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int myarr(3500);
    cin>>myarr;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n; j++)
        {
            int key=-(i+j);
            if(binarysearch(myarr; n; key)!=-1)
                cout<<myarr[i]<<myarr[j]<<myarr[mid];
        }
    }
    return 0;
}
