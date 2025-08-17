#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define ll long long
#define endl '\n'
#define F first
#define S second
typedef vector<int> vi;
typedef vector<pair<int, int>> vpi;
typedef pair<int, int> pi;
 
int MOD = 1e9 + 7;
double PI = 3.14159265359;
 
int binpow(int a,int n){
    if(n==0) return 1;
    if(n%2==1){
        return (a*binpow(a,n-1))%MOD;
    }
    else{
        int temp = binpow(a,n/2);
        return (temp*temp)%MOD;
    }
}
 
void solve(){
    
}   
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt = 1; 
    cin >> tt;
    while (tt--) solve();
    return 0;
}
