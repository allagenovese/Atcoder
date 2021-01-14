#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;

const long long INF = 1LL << 60;
int main(){
    long long n;
    cin >> n;
    vector<long long > h(n), s(n);

    rep(i,n) cin >> h[i] >> s[i];

    long long left = 0, right = INF;

    while(right - left > 1){
        long long mid = (left + right)/2;

        bool ok = true;

        vector<long long > t(n,0);
        for(int i = 0; i < n; i++){
            if(mid < h[i]) ok = false;
            else t[i] = (mid-h[i])/s[i];
        }
        sort(t.begin(), t.end());
        for(int i = 0; i < n; i++){
            if(t[i] < i) ok = false;
        }
        if(ok) right = mid;
        else left = mid;
    }

    cout << right << endl;
}
