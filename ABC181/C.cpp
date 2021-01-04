#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long double > x(n),y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
    }
    bool ans = false;
    rep(i,n-2){
        for(int j = i+1; j<n-1; j++){
            for(int k = j+1; k <n; k++){
                if(x[j]-x[i] == 0 ){
                    if(x[j] == x[k]) ans = true;
                }
                else if(y[i] == y[k]&& y[k] ==y[j] ) ans = true;
                else{
                    if( (x[j]-x[i])*(y[k]-y[i]) == (y[j]-y[i])*(x[k]-x[i]) ) ans = true;
                }
            }
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}