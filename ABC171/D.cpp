#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    vector<long long> num(100000); 
    for(int i = 0; i < n; i++){
        cin >> a.at(i);
        sum += a.at(i);
        num.at(a.at(i)-1)++;
    }
    long long q;
    cin >> q;
    vector<long long > b(q),c(q);
    for(int i = 0; i < q; i++){
        cin >> b[i] >> c[i];
        sum += (c[i]-b[i])*num.at(b[i]-1);
        num.at(c[i]-1) += num.at(b[i]-1);
        num.at(b[i]-1) =0;
        cout << sum << endl;
    }
}