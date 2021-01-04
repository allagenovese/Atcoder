#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0,num = 0, max = 0, ans = 0;
    rep(i,n){
        cin >> a[i];
        num += a[i];
        if(max < num){
            max = num;
        }
        if(ans < sum+max) 
        ans = sum+max;
        sum += num;
    }
    cout << ans << endl;
}