#include <bits/stdc++.h>
using namespace std;
bool P(int arr[], int len, int day, int maxweight, )
{
    int weight=0, currentday=1;
    for(int i=0; i<len; i++)
    {
        int weight+=arr[i];
        if(weight > maxweight){
            currentday+=1;
            weight=0;
        }
    }
    if(currentday<=day)
        return true;
    return false
}
int binarysearch(int arr[], int len, int day, int largestweight, int totalweight)
{
    int lo=largestweight;
    int hi=totalweight;
    while(lo<hi)
    {
        int mid=(lo+hi)/2;
        if(P(arr[], len, day, mid)==true)
            hi=mid;
        else
            lo=mid+1;
    }
    return lo;

}
int main()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    int myarr[];
    int largest_weight=0;
    int total_weight=0;
    for(int i=0; i<n;i++)
    {
        cin>>myarr[i];
        total_weight+=myarr[i];
        largest_weight=max(largest_weight, weight[i])
    }
    cout<<binarysearch(myarr; n; d; largest_weight, total_weight)<<endl;
}
