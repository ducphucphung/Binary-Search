#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool P(ll mid,ll target)
{
    if(mid*mid>=target)
        return true;
    else
        return false;
}

int binarysearch(ll target)
{
    ll low=0; ll hi=target;
    while(low<hi)
    {
        ll mid=(low+hi)/2;
        if(P(mid, target)==true)
            hi=mid-1;
        else
            low=mid;
    }
    return lo;
}

int main()
{
    ll x;
    cin>>x;
    cout<<binarysearch(x);
    return 0;
}
