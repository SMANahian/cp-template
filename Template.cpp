#include <bits/stdc++.h>

using namespace std;


typedef long double         ld;
typedef long long int       lli;
typedef long int            li;
typedef vector<ld>          vld;
typedef vector<lli>         vlli;
typedef vector<li>          vli;
typedef vector<int>         vi;



#define inp(n)              int n; cin >> n
#define Inp(n)              lli n; cin >> n
#define print(x)            cout << x End
#define f0(i,n)             for(li i=0; i < (n); i++)
#define f1(i,n)             for(li i=1; i <= (n); i++)
#define rep(i,a,b)          for(li i=a; i < (b); i++)
#define pb                  push_back
#define lcm(a,b)            (a*b/__gcd(a,b))
#define srt(v)              sort(v.begin(),v.end())
#define sz(a)               (li)((a).size())
#define End                 << endl
#define testIn              inp(test)
#define tests               for(int testNo=1; testNo <= (test); testNo++)
#define yes                 cout << "Yes" End
#define no                  cout << "No" End
#define Yes                 cout << "YES" End
#define No                  cout << "NO" End


const lli INF=1e18;
const lli MOD=1e9+7;
const lli MXN=1e5+7;



void allPrimeArray(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));


    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}


void allPrimeVector(int n, vi &arr) {

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }


    for (int p = 2; p <= n; p++)
        if (prime[p])
            arr.pb(p);
}


int smallFactor(int n,vi &primes) {
    for (int x:primes) {
        if(n % x == 0) {
            return x;
            break;
        } else if (x > sqrt(n)) {
            return n;
            break;
        }
    }
}



int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());


    //previous code



    testIn;
    tests {


    }
    return 0;
}
