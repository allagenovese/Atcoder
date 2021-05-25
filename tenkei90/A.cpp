#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
typedef long long ll;
const ll mod=1000000007;
using namespace std;

bool check(vector<long long > & b, long long& m, long long& k){
	bool flag = false;
	long long num = 0, size = 0;
	rep(i, b.size()){
		size += b[i];
		if(size >= m){
			num++;
			size = 0;
		}
		if(num == k+1){

			flag = true;
			break;
		}
	}
	return flag;
}

int main(){
	long long n,l,k;
	cin >> n >> l >> k;
	vector<long long > a(n), b(n+1);
	rep(i,n){ 
	    cin >> a[i];
	    if(i == 0) b[i] = a[i];
	    else  b[i] = a[i]-a[i-1];
    }
    b[n] = l-a[n-1];
    
    long long left = 0, right = l, ans;
    
    
    while(right - left > 1 ){
    	long long midle = left + (right-left)/2;
    	if(check(b, midle, k)){
    		left = midle;
    		ans = midle;
    	}
    	else right = midle;
    }
    cout << ans << endl;
}
