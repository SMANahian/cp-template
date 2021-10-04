#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <string>
#include <set>

using namespace std;




typedef long double             ld;
typedef long int                li;
typedef unsigned long int       uli;
typedef long long int           lli;
typedef unsigned long long int  ulli;
typedef vector<int>             vi;
typedef vector<ld>              vld;
typedef vector<li>              vli;
typedef vector<uli>             vuli;
typedef vector<lli>             vlli;
typedef vector<ulli>            vulli;




#define inp(n)              int n; cin >> n
#define Inp(n)              lli n; cin >> n
#define print(x)            cout << x End
#define f0(i,n)             for(li i=0; i < (n); i++)
#define f1(i,n)             for(li i=1; i <= (n); i++)
#define rep0(i,a,b)         for(li i=a; i < (b); i++)
#define rep1(i,a,b)         for(li i=a; i <= (b); i++)
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
#define finish              return 0
#define Inf                 (int)1e9
#define INF                 (lli)1e18
#define EPS                 (ld)1e-9
#define PI                  (ld)3.1415926535897932384626433832795
#define MOD                 1e9+7
#define MXN                 1e5+7




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
void allPrimeArray(li n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));


    for (li p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (li i = p * p; i <= n; i += p)
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
void allPrimeVector(li n, vli &arr) {

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (li p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (li i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }


    for (li p = 2; p <= n; p++)
        if (prime[p])
            arr.pb(p);
}




int smallFactor(int n, vi &primes) {
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
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    

    //previous code



    testIn;
    tests {
        


    }
    finish;
}
