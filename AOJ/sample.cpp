#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    double Dxy1 = 0;
    rep(i, n) cin >> x.at(i);
    rep(i, n) cin >> y.at(i);
    rep(i, n){
        if(x.at(i) > y.at(i)) {
            Dxy1 += (x.at(i) - y.at(i));
        }
        else if(x.at(i) < y.at(i)) {
            Dxy1 += (y.at(i) - x.at(i));
        }
    }
    double Dxy2 = 0;
    rep(i ,n) Dxy2 += (x.at(i)-y.at(i))*(x.at(i)-y.at(i));
    cout << Dxy2 << endl;
    Dxy2 = sqrt(Dxy2);
    double Dxy3 = 0;
    rep(i, n){
        if(x.at(i) > y.at(i)) Dxy1 += (x.at(i) - y.at(i))*(x.at(i) - y.at(i))*(x.at(i) - y.at(i));
        else Dxy1 += (y.at(i) - x.at(i))*(y.at(i) - x.at(i))*(y.at(i) - x.at(i));
    }
    Dxy3 = cbrt(Dxy3);
    double Dxyinf;
    vector<int> z(n);
    rep(i, n){
        if(x.at(i) > y.at(i)) z.at(i) = x.at(i) - y.at(i);
        else z.at(i) = y.at(i) - x.at(i);
    }
    double max = z.at(0);
    rep(i,n){
        if(max > z.at(i)){
            max = z.at(i);
        }
    }
    Dxyinf = max;
    cout << fixed;
    cout << setprecision(10) << Dxy1 << endl;
    cout << setprecision(10) << Dxy2 << endl;
    cout << setprecision(10) << Dxy3 << endl;
    cout << setprecision(10) << Dxyinf << endl;
    
}