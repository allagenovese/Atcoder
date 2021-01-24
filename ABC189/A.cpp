#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    char a, b, c;
    cin >> a >> b >> c;
    if(a == b && b == c) cout << "Won" << endl;
    else cout << "Lost" << endl;
}