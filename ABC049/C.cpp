#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    string s,t,u;
    cin >> s;
    reverse(s.begin(),s.end());
    while(s.size() != 0){
        u += s.at(0);
        s.erase(0,1);
        if(u == "maerd" || u == "remaerd" || 
        u == "esare" || u == "resare" ){
            u = "";
        }
    }
    if(u.size() == 0){
        cout << "YES" << endl;
    }
    else cout << "NO";

}