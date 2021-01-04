#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n));
    rep(i,n){
        rep(j,n) cin >> s[i][j];
    }
    rep(i,n){
        for(int j = n-1; j >= 0; j--){
            cout << s[j][i];
        }
        cout << endl;
    }
}