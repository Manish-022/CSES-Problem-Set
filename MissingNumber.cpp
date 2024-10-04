#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
   ll n;
    cin >> n;
    
    ll sn = n * (n + 1) / 2;
    ll sum = 0;
    
    for (ll i = 1; i < n; i++) {
        ll x;
        cin >> x;
        sum += x;
    }
    
    cout << sn - sum << endl;
    
    return 0;
   
}