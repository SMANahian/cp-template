#include <bits/stdc++.h>

using namespace std;

typedef long double                         ld;
typedef long long                           lli;
typedef vector<int32_t>                     vi;
typedef vector<ld>                          vld;
typedef vector<lli>                         vlli;
typedef pair<lli, lli>                      pii;


#define int                                 int64_t
#define endl                                "\n"
#define inp(n)                              lli n; cin >> n
#define inpstr(s)                           string s; cin >> s
#define inp2(a,b)                           lli a,b; cin >> a >> b
#define inparr(arr,n)                       lli arr[n]; f0(t_ind, n) cin >> arr[t_ind]
#define f0(i,n)                             for(int32_t i = 0; i <  (n); i++)
#define f1(i,n)                             for(int32_t i = 1; i <= (n); i++)

#define testIn                              cin >> test
#define tests                               for(int32_t testNo=1; testNo <= (test); testNo++)

#define all(x)                              (x).begin(), (x).end()
#define rall(x)                             (x).rbegin(), (x).rend()
#define len(a)                              ((int64_t)(a).size())
#define lcm(a, b)                           (((a)*(b))/gcd(a,b))
#define ff                                  first
#define ss                                  second

#define Yes                                 cout << "Yes" << endl
#define No                                  cout << "No" << endl
#define YES                                 cout << "YES" << endl
#define NO                                  cout << "NO" << endl
#define finish                              return 0
#define clean                               fflush(stdout)

#define Inf                                 (lli)(1e9)
#define Eps                                 (ld)(1e-9)
#define PI                                  (ld)(3.141592653589793238462643383279502884197169L)
#define MOD                                 (int32_t)(1e9+7)


template<typename dataType1>
inline void print(dataType1 a) {cout << a << endl;}
template<typename dataType1, typename dataType2>
inline void print(dataType1 a, dataType2 b) {cout << a << " " << b << endl;}
template<typename dataType1, typename dataType2, typename dataType3>
inline void print(dataType1 a, dataType2 b, dataType3 c) {cout << a << " " << b << " " << c << endl;}
template<typename dataType1, typename dataType2, typename dataType3, typename dataType4>
inline void print(dataType1 a, dataType2 b, dataType3 c, dataType4 d) {cout << a << " " << b << " " << c << " " << d << endl;}
template<typename dataType>
inline dataType abs(dataType k) {if (k >= 0) return k; else return (-k);}
template<typename dataType>
inline bool isEqual(dataType a, dataType b) {return (abs((dataType)(a-b)) < 1e-9);}



bool isPrefix(string &s, string &y) {
    if(s.length() > y.length()) return false;
    f0(i, s.length()) if(s[i] != y[i]) return false;
    return true;
}
bool ispalindrom(string s) {
    f0(i, s.length()/2) if(s[i] != s[s.length()-i-1]) return false;
    return true;
}


template<typename dataType1, typename dataType2>
void allPrimeVector(dataType1 n, dataType2 &primeList) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int32_t p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (dataType1 i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int32_t p = 2; p <= n; p++)
        if (prime[p])
            primeList.pb(p);
}

template<typename dataType>
string decimalTokbitsBinary(dataType n,dataType k) {
    string s = bitset<64>(n).to_string();

    return s.substr(64-k);
}


template<typename dataType>
dataType val(char c) {
    if (c >= '0' && c <= '9')
        return (dataType)c - '0';
    else
        return (dataType)c - 'A' + 10;
}
template<typename dataType>
dataType nthBaseToDecimal(string str, dataType base) {
    int32_t len = str.length();
    int32_t power = 1;
    dataType num = 0;
 
    for (int32_t i = len - 1; i >= 0; i--) {
        num += (val<dataType>(str[i]) * power);
        power *= base;
    }

    return num;
}

template<typename dataType>
char reVal(dataType num) {
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
template<typename dataType>
string nthBasefromDeci(dataType inputNum, dataType base) {
    string res = "";
    while (inputNum > 0) {
        res += reVal(inputNum % base);
        inputNum /= base;
    }
    if (res == "")
        res = "0";
    return string(rall(res));
}

template<typename dataType>
dataType phi(dataType n) {
    dataType result = n;
    for(int32_t p = 2; p * p <= n; ++p) {
        if (n % p == 0) {
            while (n % p == 0) n /= p;
            result -= result / p;
        }
    }
    if (n > 1) result -= result / n;
    return result;
}
template<typename dataType1, typename dataType2, typename dataType3>
int64_t powMod(dataType1 base, dataType2 n, dataType3 mod) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        int64_t t_pow = (int64_t)powMod(base, n/2, mod);
        return ((t_pow*t_pow) % mod);
    }
    int64_t t_pow = (int64_t)powMod(base, (n-1)/2, mod);
    return ((int64_t)base * ((t_pow*t_pow) % mod) % mod);
}
template<typename dataType1, typename dataType2>
int64_t modInverse(dataType1 n, dataType2 mod, bool isPrime = true) {
    if(isPrime) return powMod(n, mod-2, mod);
    return powMod(n, phi(mod)-1, mod);
}
template<typename dataType1, typename dataType2, typename dataType3>
int64_t modDivide(dataType1 a, dataType2 b, dataType3 mod, bool isPrime = true) {
    return (((int64_t)a * modInverse(b, mod, isPrime)) % mod);
}


// Solver functions

int32_t solve1(int32_t);


int32_t solve2(int32_t);


int32_t solve3(int32_t);


int32_t main() {

    #if defined __has_include
        #if __has_include("LOCAL.hh")
            #include "LOCAL.hh"
        #endif
    #endif

    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        using namespace std::chrono;
        cout << fixed << setprecision(9);
        auto begin = steady_clock::now();
    #else
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    #endif

    // Previous code



    // Main code
    int32_t test = 1;

    testIn;

    tests {

        solve1(testNo);

    }
    #ifdef LOCAL
        auto end = steady_clock::now();
        cout << "\nTime : " 
             << (ld)duration_cast<nanoseconds>
                (end - begin).count()/1000000000 
             << "s" << endl;
    #endif
    finish;
}


int32_t solve1(int32_t testNo) {
    // cout << "Case #" << testNo << ": ";
    // cout << endl;
    
    finish;
}



int32_t solve2(int32_t testNo) {
    // cout << "Case #" << testNo << ": ";
    // cout << endl;

    finish;
}



int32_t solve3(int32_t testNo) {
    // cout << "Case #" << testNo << ": ";
    // cout << endl;
    
    finish;
}
