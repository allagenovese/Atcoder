#### D問題解説？
まず初項a, 末項l、公差が1の等差数列の和がNになるとき以下の通りになる。

![\begin{align*}
\frac{1}{2}(l-a+1)(l+a) = N
\end{align*}
](https://render.githubusercontent.com/render/math?math=%5CLarge+%5Cdisplaystyle+%5Cbegin%7Balign%2A%7D%0A%5Cfrac%7B1%7D%7B2%7D%28l-a%2B1%29%28l%2Ba%29+%3D+N%0A%5Cend%7Balign%2A%7D%0A)

ここから以下のようになります。
  
![\begin{align*}
(l-a+1)(l+a) = 2N
\end{align*}
](https://render.githubusercontent.com/render/math?math=%5CLarge+%5Cdisplaystyle+%5Cbegin%7Balign%2A%7D%0A%28l-a%2B1%29%28l%2Ba%29+%3D+2N%0A%5Cend%7Balign%2A%7D%0A)
(l-a+1), (l+a)の積が2Nになるので、
(l-a+1) = i, (l+a) = jとすると
2つの式の両辺を足すと2l = (n+m)-1になります。
つまり、i*j = 2Nを満たすようなi, jのうち
(i+j)-1が2で割り切れる場合に題意を満たします。
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

