#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    int x,n;
    cin >> x >> n;
    vector<int> p(n);
    rep(i,n) cin >> p.at(i);
    long long ans = 1000;
    long long num = 1000;
    if(n == 0) num = x;
    for(int i = -1; i <= 101; i++){
        bool find = true;
        rep(j,n){
            if(i == p.at(j)) find = false;
        }
        if(find){
            if(abs(i-x) < ans){
                ans = abs(i-x);
                num = i;
            }
        }
    }
    cout << num << endl;
}