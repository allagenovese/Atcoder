#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long s,p;
    cin >> s >> p;
    bool ans = false;
    for(long long i = 1; i <= sqrt(p); i++){
        if(s*i-i*i == p ){
            ans = true;
            break;
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}