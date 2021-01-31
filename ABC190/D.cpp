#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
const long long mod = 1000000007;
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long ans = 0;
    long long sum = 0;
    for(long long  i = 1; i*i <= 2*n; i++){
        if(2*n % i == 0){
            long long a = i, b = 2*n/i;
            if((a+b-1)%2 == 0)ans++;
        }
    }
    cout << 2*ans << endl;
}