#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    string s;
    cin >> s;
    bool ans = false;
    long long n = s.size();
    vector<int> num(9); 
    rep(i,n){
        int m = s[i]-'0';
        num.at(m-1)++;
    }
    cout << num[0] << endl;
}