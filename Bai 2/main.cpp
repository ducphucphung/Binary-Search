#include <bits/stdc++.h>
using namespace std;
bool P(int arr[]; int mid; int target)
{
    if(arr[mid]>=target)
        return true;
    return false
}
int binarysearch(int arr[]; int lo; int hi, int target)
{
    while(lo<hi)
    {
        int mid=lo+(lo+hi)/2
        if(P(mid)==true)
            hi=mid;
        else
            lo=mid+1
    }
    if(P(lo)==false)
        return -1;
    else
    {
        if(arr[lo]==target)
            return lo;
        else
            return lo-1;
    }
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int myarr[10005];
    for(int i=0; i<n; i++) cin>>myarr;
    if(k>myarr[n-1])
        cout<<n<<endl;
    else
        binarysearch(myarr; 0; n; k);
}
