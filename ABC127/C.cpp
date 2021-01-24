#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    vector<long long> l(m), r(m), num(n);
    long long start, end;
    rep(i,m){
        cin >> l[i] >> r[i];
    }
    start = l[0];
    end = r[0];
    for(int i = 1; i < m; i++){
        if(start <= l[i]) start = l[i];
        if(r[i] <= end) end = r[i];
    }
    if(end < start) cout << 0 << endl;
    else cout << end-start+1 << endl;
}