#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
bool is_valid_move( vector<vector<char>> & c, 
vector<vector<bool>> & memo, int x, int y){
    if(x < 0 || y < 0 || 
    y >= c.size() || x >= c.at(0).size()){
        return false;
    }
    if(c.at(y).at(x) == '#') return false;

    if(memo.at(y).at(x)) return false;

    return true;

}
bool reachable(vector<vector<char>> & c, 
vector<vector<bool>> & memo, int x, int y){
    if(c.at(y).at(x) == 'g'){
        return true;
    }

    memo.at(y).at(x) = true;

    bool result = false;

    if(is_valid_move(c, memo, x, y-1) && 
    reachable(c, memo, x, y-1)){
        result = true;
    }
    if(is_valid_move(c, memo, x, y+1) && 
    reachable(c, memo, x, y+1)){
        result = true;
    }
    if(is_valid_move(c, memo, x-1, y) && 
    reachable(c, memo, x-1, y)){
        result = true;
    }
    if(is_valid_move(c, memo, x+1, y) && 
    reachable(c, memo, x+1, y)){
        result = true;
    }

    return result;

}

int main(){
    int w, h, x, y;
    cin >> h >> w;

    vector<vector<char>> c(h, vector<char>(w));
    rep(i,h){
        rep(j,w){
            cin >> c[i][j];
            if(c[i][j] == 's'){
                y = i;
                x = j;
            }
        }
    }
    vector<vector<bool>> memo(h, vector<bool>(w, false));
    if(reachable(c, memo, x, y)) cout << "Yes" << endl;
    else cout << "No" << endl;

}