#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    int n;
    cin >> n;
    long long m = pow(2, n) +0.5;
    vector<long long> a(m);
    vector<pair<long long , long long >> p(m);
    for(long long i = 0; i < m; i++){
        cin >> a[i];
        p.at(i) = make_pair(i,a[i]);
    }
    for(int i  = 0; i < n-1; i++){
        vector<pair<long long, long long>> q(p.size()/2);
        for(long long j = 0; j < p.size()-1; j += 2){
            long long fi1, fi2, sec1, sec2;
            tie(fi1, fi2) = p.at(j);
            tie(sec1, sec2) = p.at(j+1);
            if(fi2 > sec2){
                q.at(j/2) = make_pair(fi1, fi2);
            }
            else{
                q.at(j/2) = make_pair(sec1, sec2);
            }
        }
        p = q;
    }
    long long fi1, fi2, sec1, sec2;
    tie(fi1, fi2) = p.at(0);
    tie(sec1, sec2) = p.at(1);
    if(fi2 > sec2) cout << sec1+1 << endl;
    else cout << fi1+1 << endl; 

}