#include <bits/stdc++.h>
const double PI = acos(-1);
#define rep(i, n) for (int i = 0; i < (int)(n); i++ )
using namespace std;
int main(){
    long long n;
    cin >> n;
    int div1 = 0;
    int div2 = 0;
    int sum = 0;
    long long num = n;
    long long m = 0;
    while(true){
        int rem = num % 10;
        m += rem;
        if(rem != 0) sum++;
        if(rem % 3 == 1) div1++;
        else if(rem % 3 == 2)div2++;
        num /= 10;
        if(num ==0) break; 
    }
    bool ans = false;
    if(m % 3 == 0){
        cout << 0 << endl;
        ans = true;
    }
    else if( m % 3 == 1){
        if(div1 >= 1){
            if(sum >= 2){
                cout << 1 << endl;
                ans = true;  
            }
        }
        else if(div2 >= 2){
            if(sum >= 3){
                cout << 2 << endl;
                ans = true;
            }
        } 
    }
    else if( m % 3 == 2){
        if(div2 >= 1){
            if(sum >=2){
                cout << 1 << endl;
                ans = true;
            }
        }
        else if(div1 >= 2){
            if(sum >=3){
                cout << 2 << endl;
                ans = true;
            }
        }
        
    }
    if(ans == false) cout << -1 << endl;
}