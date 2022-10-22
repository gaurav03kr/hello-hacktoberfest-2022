
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int fillingBucket(int N) {
        int mod = 100000000;
        long long result=1,a=1,b=1;
        for(int i=2;i<=N;i++){
            result =(a+b)%mod;
            a=b;
            b=result;
        }
        return result;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
