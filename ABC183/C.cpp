#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    vector<vector<int>> t(n,vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> t[i][j];
        }
    }
    vector<int> index;
    for(int i = 0; i < n; i++) index.push_back(i);
    int ans = 0;
    do{
        int time = 0;
        for(int i = 0; i < n; i++) time += t[index[i]][index[(i+1)%n]];
        if(time == k) ans++; 
    }while(next_permutation(index.begin()+1,index.end()));
    cout << ans << endl;
}