#include <bits/stdc++.h>
const double PI = acos(-1);
using namespace std;
int main() {
    int n, m, l;
    cin >> n >> m >> l;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j =0; j < m; j++){
            cin >> a.at(i).at(j);
        }
    }
    vector<vector<int>> b(m, vector<int>(l));
    vector<vector<int>> b2(l, vector<int>(m));

    for(int i = 0; i < m; i++){
        for(int j =0; j < l; j++){
            cin >> b.at(i).at(j);
        }
    }
    vector<vector<int>> ans(n, vector<int>(l));
    for(int i = 0; i < n;i++){
        for(int j =0; j < l; j++){
            for(int k = 0; k < m; k++){
                ans.at(i).at(j) = a.at(i).at(k) * b.at(k).at(j);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j =0; j < l; j++){
            cout << ans.at(i).at(j);
            if(j == l -1){
                break;
            }
            cout << " ";
        }
        cout << endl;
    }
    


}