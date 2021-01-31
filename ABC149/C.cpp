#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
const long long mod = 1000000007;
#define ll long long
using namespace std;
int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int lcm(int a, int b)
{
   return a * b / gcd(a, b);
}

int main(){
    long long x, i;
    cin >> x;
    i = x;
    while(true){
        long long b = true;
        for(long long j = 2; j*j <= x; j++){
            if(i%j == 0){
                b =false;
                break;
            }
        }
        if(b){
            break;
        }
        else i++;
    }
    cout << i << endl;
}