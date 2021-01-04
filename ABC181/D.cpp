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
    if(n == 1){
        int m = s[0]-'0';
        if(m == 8 ) ans = true;
    }
    else if(n ==2 ){
        int m = (s[0]-'0')*10 + s[1]-'0';
        if( m % 8 == 0) ans = true;
    }
    for(int i = 100; i <1000; i++){
        if(i % 8 == 0){
            int sum = i;
            int a, b, c;
            a = sum / 100;
            sum %= 100;
            b = sum/10;
            c = sum % 10;
            if(a != 0&& b != 0 && c !=0){
                if(a == b && b == c ){
                    if(num.at(a-1) >= 3) ans = true;
                }
                else if(a == b && b != c ){
                    if(num.at(a-1) >= 2 && num.at(c-1) >= 1 ) ans = true;
                }
                else if(a != b && b == c ){
                    if(num.at(a-1) >= 1 && num.at(c-1) >= 2 ) ans = true;
                }
                else if( a != b && b != c){
                    if(num.at(a-1) >= 1 && num.at(b-1) >= 1 && num.at(c-1) >= 1 ) ans = true;
                }
                else if (a == c && b != c ){
                    if( num.at(a-1) >= 2 && num.at(b-1) >= 1) ans = true;
                }
            }
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}