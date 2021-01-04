#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    vector<vector<int>> children(n);
    for(int i = 0; i < n; i++){
        cin >> p.at(i);
        children.at(p.at(i)).push_back(i);
    }
}