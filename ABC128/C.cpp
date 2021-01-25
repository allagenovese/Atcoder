#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    vector<vector<int>> s(m);
    vector<long long > k(m);
    rep(i,m){
        cin >> k[i];
        rep(j, k[i]){
            int num;
            cin >> num;
            s.at(i).push_back(num);
        }
    }
    vector<int> p(m);
    vector<bool> light(m, false);
    int ans = 0;
    rep(i,m) cin >> p.at(i);
    for(int tmp = 0; tmp <(1 << n); tmp++){
        bitset<20> swi(tmp);
        for(int i = 0; i < m; i++){
            int num = 0;
            for(int j : s.at(i)){
                if(swi.test(j-1) == 1)num++;
            }
            if(num%2 == p.at(i)) light.at(i) =true;
            else light.at(i) = false;
        } 
        int num = 0;
        for(int l = 0; l < m; l++){
            if(light.at(l) == true)num++;
        }
        if(num == m)ans++;
    }
    cout << ans << endl;
}