#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
const long long mod = 1000000007;
using namespace std;
int main(){
    long long n,m;
    cin >> n >> m;
    vector<long long > a(m), b(m);
    rep(i,m){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }
    long long k;
    cin >> k;
    vector<pair<int, int>> cd(k);
    rep(i,k){
        int c, d;
        cin >> c >> d;
        c--;
        d--;
        cd.at(i) = make_pair(c,d);
    }
    long long num = 0;
    for(int tmp = 0; tmp < (1 << k); tmp++){
        bitset<16> s(tmp);
        vector<int> num(n,0);
        long long sum = 0;
        for(int i = 0; i < k; i++){                
            int c, d;
            tie(c,d) = cd.at(i);
            if(s.test(i)){
                num.at(d)++;
            }
            else{
                num.at(c)++;
            }
        }
        for(int i = 0; i < m; i++){
            if(num.at(a.at(i)) != 0 && num.at(b.at(i)) != 0) sum++;
        }
        ans = max(sum, ans);
    }
    cout << ans << endl;

}