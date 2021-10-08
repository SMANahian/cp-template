#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstring>
#include <string>
#include <bitset>
#include <ctime>
#include <set>



using std::min;
using std::max;
using std::to_string;
using std::cin;
using std::cout;
using std::string;
using std::vector;




typedef long double                 ld;
typedef unsigned int                ui;
typedef long int                    li;
typedef unsigned long int           uli;
typedef long long int               lli;
typedef unsigned long long int      ulli;
typedef vector<int>                 vi;
typedef vector<ld>                  vld;
typedef vector<ui>                  vui;
typedef vector<li>                  vli;
typedef vector<uli>                 vuli;
typedef vector<lli>                 vlli;
typedef vector<ulli>                vulli;




#define inp(n)                      int n; cin >> n
#define Inp(n)                      lli n; cin >> n
#define print(x)                    cout << x End
#define f0(i,n)                     for(li i=0; i < (n); i++)
#define f1(i,n)                     for(li i=1; i <= (n); i++)
#define rep0(i,a,b)                 for(li i=a; i < (b); i++)
#define rep1(i,a,b)                 for(li i=a; i <= (b); i++)
#define pb                          push_back
#define lcm(a,b)                    (a*b/gcd(a,b))
#define asrt(v)                     sort(v.begin(),v.end())
#define dsrt(v)                     sort(v.rbegin(), v.rend())
#define sz(a)                       (li)((a).size())
#define End                         << "\n"
#define testIn                      inp(test)
#define tests                       for(int testNo=1; testNo <= (test); testNo++)
#define yes                         cout << "yes" End
#define no                          cout << "no" End
#define Yes                         cout << "Yes" End
#define No                          cout << "No" End
#define YES                         cout << "YES" End
#define NO                          cout << "NO" End
#define finish                      return 0
#define Inf                         (int)1e9
#define INF                         (lli)1e18
#define EPS                         (ld)1e-9
#define PI                          (ld)3.1415926535897932384626433832795
#define MOD                         1e9+7
#define MXN                         1e5+7




template <typename dataType>
void scanInt(dataType &number) {
    bool negative = false;
    register char c;

    number = 0;
    c = getchar();

    if (c=='-') {
        negative = true;
        c = getchar();
    }

    for (; (c>47 && c<58); c=getchar())
        number = number*10 + c - 48;

    if (negative)
        number *= -1;
}



template<typename dataType>
inline dataType gcd(dataType a, dataType b) {
    while (b!=0) {
        dataType c = b;
        b = a % b;
        a = c;
    }
    return a;
}




template<typename dataType>
void allPrimeBoolArray(dataType n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (dataType p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (dataType i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}




template<typename dataType1, typename dataType2>
void allPrimeVector(dataType1 n, dataType2 &arr) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (dataType1 p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (dataType1 i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (dataType1 p = 2; p <= n; p++)
        if (prime[p])
            arr.pb(p);
}




template<typename dataType>
string decimalToBinary(int n) {
    string s = std::bitset<64> (n).to_string();

    const auto loc1 = s.find('1');

    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
}




template<typename dataType>
dataType nthBaseToDecimal(string s, dataType n) {
    dataType dec_value = 0;
 
    dataType base = 1;
 
    for(dataType i = (s.size()-1); i >=0; i--) {
        dataType last_digit = s[i]-'0';
 
        dec_value += ((last_digit*base) % ((li)1e9 +7));
        dec_value %= ((li)1e9 +7);
 
        base = base * n;
        base %= ((li)1e9 +7);
    }
 
    return dec_value;
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
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // Previous code



    testIn;
    tests {
        


    }
    finish;
}
