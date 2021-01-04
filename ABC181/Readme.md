# ABC 181
##  A問題
これは０日目に白服を着ているので、
１日目は黒い服、２日目は白い服、３日目は黒服・・・
よってNが２で割り切れる場合は白い服、
割り切れない場合は黒服になります。
Pythonの場合は以下のようになります。
```
N = int(input())
if N % 2 == 0:
    print("White")
else :
    print("Black")
```
## B問題
A以上B以下の整数の和は
(初項＋末項)*項数/2で求められるので。
$$(a+b)(b-a+1) \div 2　$$
これを１～Nまで足し合わせれば求められます。C++のコードは以下の通りになります。
```
#include <bits/stdc++.h>
const double PI = acos(-1);
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long long> a(n),b(n);
    long long ans = 0;
    for(inti =0; i<n; i++){
        cin >> a[i] >> b[i];
        ans += ((a[i]+b[i])*(b[i]
        -a[i]+1))/2;
    }
    cout << ans << endl;
}
```
## C問題
問題通りだと相異なる三つの点を選びそれが同一直線上にあるかを判定すればよい。
その判定方法だが、二点を選び直線の方程式を立てたあとにそれがもう一点を満たす場合に成り立つ。

```
#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<long double > x(n),y(n);
    rep(i,n){
        cin >> x[i] >> y[i];
    }
    bool ans = false;
    rep(i,n-2){
        for(int j = i+1; j<n-1; j++){
            for(int k = j+1; k <n; k++){
                if(x[j]-x[i] == 0 ){
                    if(x[j] == x[k]) ans = true;
                }
                else if(y[i] == y[k]&& y[k] ==y[j] ) ans = true;
                else{
                    if( (x[j]-x[i])*(y[k]-y[i]) == (y[j]-y[i])*(x[k]-x[i]) ) ans = true;
                }
            }
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
```
## D問題
8で割り切れるかどうかを判断するためには
下三桁が8で割り切れるかどうかを判断すればよい。
ここでは並べ替えて8の倍数を作れるかどうかを判断する問題なので8で割り切れるような3桁の数が含まれるかどうかを確かめればよい。
例えば100から999までの数字で8で割り切れなおかつ、
0が含まれない物を全列挙する。
8で割り切れるこの数に1～9までの数字が何個ずつ含まれるかを判断し、それをSが満たしている場合答えを"Yes"に置き換える。
例えば112は8で割り切れるが、ここには1が2つ、2が一つ含まれる。
数字列Sに1が2つ以上、2が一つ以上含まれる場合8で割り切れる数を作れる。
コードは以下の通りになる。
```
#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    string s;
    cin >> s;
    bool ans = false;
    long long n = s.size();
    vector<int> num(9);
    rep(i,n){
        int m = s[i]-'0';
        num.at(m-1)++;
    }
    if(n == 1){
        int m = s[0]-'0';
        if(m == 8 ) ans = true;
    }
    else if(n ==2 ){
        int m = (s[0]-'0')*10 + s[1]-'0';
        if( m % 8 == 0) ans = true;
    }
    for(int i = 100; i <1000; i++){
        if(i % 8 == 0){
            int sum = i;
            int a, b, c;
            a = sum / 100;
            sum %= 100;
            b = sum/10;
            c = sum % 10;
            if(a != 0&& b != 0 && c !=0){
                if(a == b && b == c ){
                    if(num.at(a-1) >= 3) ans = true;
                }
                else if(a == b && b != c ){
                    if(num.at(a-1) >= 2 && num.at(c-1) >= 1 ) ans = true;
                }
                else if(a != b && b == c ){
                    if(num.at(a-1) >= 1 && num.at(c-1) >= 2 ) ans = true;
                }
                else if( a != b && b != c){
                    if(num.at(a-1) >= 1 && num.at(b-1) >= 1 && num.at(c-1) >= 1 ) ans = true;
                }
                else if (a == c && b != c ){
                    if( num.at(a-1) >= 2 && num.at(b-1) >= 1) ans = true;
                }
            }
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
```