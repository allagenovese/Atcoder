#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;

void dfs(long long x, long long  n,  bool f3, bool f5, bool f7,  
long long & count){
    if(x > n) return;

    if(f3) if(f5) if(f7) count++;

    dfs( 10*x+ 3, n, true, f5, f7, count );
    dfs( 10*x+ 5, n, f3, true, f7, count );
    dfs( 10*x+ 7, n, f3, f5, true, count );
}

int main(){
    long long n;
    cin >> n;
    long long count = 0;
    dfs(0, n, false, false, false, count);
    cout << count << endl;

}