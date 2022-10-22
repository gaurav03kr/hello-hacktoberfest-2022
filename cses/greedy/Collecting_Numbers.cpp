
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define debug(x); cout<<#x<<" "<<x<<endl;
ll hell=1e9+7;

void solve()
{
    int n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(ll i=0;i<n;i++){
        int j=i;
        while(j+1<n && v[j+1].second>v[j].second){
            j++;
        }
        i=j;
        ans++;
    }
    cout<<ans<<endl;
    return ;
}

int main()
{
    int t;
    // cin>>t;
    t=1;
    while(t--)
        solve();
    return 0;
}
