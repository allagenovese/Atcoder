#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
vector<long long> memo;

int main(){
    long long n;
    cin >> n;
    vector<long long>a(n-1),b(n);
    rep(i,n-1){
        cin >> a[i];
        b[a[i]-1]++;
    }
    rep(i,n) cout << b[i] << endl;  
}