#### D問題解説？
まず初項a, 末項l、公差が1の等差数列の和は以下の通りになる。
![\[
 \frac{1}{2}(l-a+1)(l+a) = N
\]
](https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle+%5C%5B%0A+%5Cfrac%7B1%7D%7B2%7D%28l-a%2B1%29%28l%2Ba%29+%3D+n%0A%5C%5D%0A)
ここから以下のようになります。
![\[
 (l-a+1)(l+a) = 2N
\]
](https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle+%5C%5B%0A+%28l-a%2B1%29%28l%2Ba%29+%3D+2n%0A%5C%5D%0A)
(l-a+1), (l+a)の差が2nになるので、
とりあえず2Nを割り切れる数を求めてみましょう。
ここで
![\[
n*m = 2N
\]
](https://render.githubusercontent.com/render/math?math=%5Cdisplaystyle+%5C%5B%0An%2Am+%3D+2N%0A%5C%5D%0A)
とすると
l-a+1 = n, l+a = m になります。
2つの式の両辺を足すと2l = (n+m)-1になります。
つまり、n*m = 2Nを満たすようなn, mのうち
(n+m)-1が2で割り切れる場合に題意を満たします。
コードは以下のようになります。
```
#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
const long long mod = 1000000007;
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long ans = 0;
    long long sum = 0;
    for(long long  i = 1; i*i <= 2*n; i++){
        // 2nを割り切れる数を1からi*i <= 2*nまで探します。
        if(2*n % i == 0){
        // 条件を満たすi, jのうちなおかつ(i+j-1)が2で割り切れるものを数える。
            long long j = 2*n/i;
            if((i+j-1)%2 == 0)ans++;
        }
    }
    // 条件を満たす、i,jの組み合わせに対して2通りの数列が考えられるので最後に2倍する。
    cout << 2*ans << endl;
}

```

