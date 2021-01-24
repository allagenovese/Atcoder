#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<string> s(n);
    long long num = 0;
    rep(i,n){
        cin >> s[i];
        if(s[i] == "AND") num++;
    }
    long long ans = 1;
    for(int i = 0; i < n+1; i++ ){
        ans = ans* 2;
    }
    num =1;
    for(int i = 0; i < num; i++){
        num = num*2;
    }

    cout << ans-num << endl;
}