#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (long long i = 0; i < (long long)(n); i++ )
using namespace std;


int main(){
	long long n, m;
	cin >> n >> m;
	vector<long long > a(n);
	rep(i,n) cin >> a.at(i);
	vector<pair<long long , long long >> xy(m);
	rep(i,m){
		long long x, y;
		cin >> x >> y;
		xy.at(i) = make_pair(x,y);
	}
	sort(xy.begin(), xy.end());
	vector<long long > dp(n,1000000001);
	for(long long i = 0; i < m; i++){
		long long x, y;
		tie(x,y) = xy.at(i);
		dp.at(y-1) = min(dp.at(y-1), 
		min(dp.at(x-1), a.at(x-1)));
	}
	long long ans = -1000000001;
	for(int i = 0; i < n; i++){
		if(dp.at(i) <= 1000000000){
          if(ans < a.at(i)-dp.at(i)) ans = a.at(i)-dp.at(i);
        }
	}
	cout << ans << endl;
		
}