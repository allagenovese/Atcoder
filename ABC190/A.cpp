#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
const long long mod = 1000000007;
using namespace std;
int main(){
    long long a, b, c;
    cin >> a >> b >> c;
    if(c == 0){
        if(a >= b+1){
            cout << "Takahashi" << endl;
        }
        else cout << "Aoki" << endl;
    }
    else{
        if(a >= b){
            cout << "Takahashi" << endl;
        }
        else cout << "Aoki" << endl;
    }
}