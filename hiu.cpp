#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define debug(x); cout<<#x<<" "<<x<<endl;
ll hell=1e9+7;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n),one,zero;
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(v[i]){
            one.push_back(x);
        }
        else{
            zero.push_back(x);
        }
    }
    sort(one.begin(),one.end());
    sort(zero.begin(),zero.end());

    reverse(one.begin(),one.end());
    reverse(zero.begin(),zero.end());

    ll x=min(one.size(),zero.size());
    ll ans=0;
    for(ll i=0;i<x;i++){
        ans+=2*(one[i]+zero[i]);
    }

    for(ll i=x;i<one.size();i++){
        ans+=one[i];
    }
    for(ll i=x;i<zero.size();i++){
        ans+=zero[i];
    }

    if(one.size()==zero.size()){
        ans-=min(one[one.size()-1],zero[zero.size()-1]);
    }
    cout<<ans<<endl;
    return ;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
