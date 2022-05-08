#include <iostream>
#include <iomanip>

#include <cmath>
#include <cstring>
#include <algorithm>


#include <set>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <utility>
#include <string>
#include <vector>
#include <bitset>



using std::min;
using std::max;
using std::sort;
using std::fixed;
using std::to_string;
using std::make_pair;
using std::upper_bound;
using std::lower_bound;
using std::setprecision;

using std::cin;
using std::cout;

using std::set;
using std::map;
using std::list;
using std::pair;
using std::less;
using std::stack;
using std::queue;
using std::string;
using std::vector;
using std::bitset;
using std::greater;
using std::priority_queue;





typedef long double                 ld;
typedef unsigned                    ui;
typedef long long                   lli;
typedef unsigned long long          ulli;
typedef vector<int32_t>             vi;
typedef vector<ld>                  vld;
typedef vector<ui>                  vui;
typedef vector<lli>                 vlli;
typedef vector<ulli>                vulli;
typedef list<int32_t>               lsi;
typedef list<ld>                    lsld;
typedef list<ui>                    lsui;
typedef list<lli>                   lslli;
typedef list<ulli>                  lsulli;
typedef set<int32_t>                si;
typedef set<ld>                     sld;
typedef set<ui>                     sui;
typedef set<lli>                    slli;
typedef set<ulli>                   sulli;




#define int                         int64_t

#define endl                        "\n"
#define inp(n)                      int n; cin >> n
#define Inp(n)                      lli n; cin >> n
#define inpstr(s)                   string s; cin >> s
#define inp2(a,b)                   int a,b; cin >> a >> b
#define Inp2(a,b)                   lli a,b; cin >> a >> b
#define inparr(arr,n)               int arr[n]; f0(t_ind, n) cin >> arr[t_ind]
#define Inparr(arr,n)               lli arr[n]; f0(t_ind, n) cin >> arr[t_ind]

#define f0(i,n)                     for(int32_t i = 0; i <  (n); i++)
#define f1(i,n)                     for(int32_t i = 1; i <= (n); i++)
#define rep0(i,l,r)                 for(int32_t i=(l); i <  (r); i++)
#define rep1(i,l,r)                 for(int32_t i=(l); i <= (r); i++)

#define testIn                      cin >> test
#define tests                       for(int32_t testNo=1; testNo <= (test); testNo++)

#define all(x)                      (x).begin(), (x).end()
#define rall(x)                     (x).rbegin(), (x).rend()
#define asrt(v)                     sort(all(v))
#define dsrt(v)                     sort(rall(v))
#define revStr(str)                 string(rall(str))
#define sz(a)                       ((a).size())
#define front_zero(n)               __builtin_clzll(n)
#define back_zero(n)                __builtin_ctzll(n)
#define total_one(n)                __builtin_popcountll(n)
#define lcm(a, b)                   (((a)*(b))/gcd(a,b))
#define mem(a, b)                   memset(a, b, sizeof(a))

#define pb                          push_back
#define pf                          push_front
#define ff                          first
#define ss                          second

#define yes                         cout << "yes" << endl
#define no                          cout << "no" << endl
#define Yes                         cout << "Yes" << endl
#define No                          cout << "No" << endl
#define YES                         cout << "YES" << endl
#define NO                          cout << "NO" << endl
#define finish                      return 0
#define clean                       fflush(stdout)

#define Inf                         (int32_t)(1e9)
#define INF                         (lli)(1e18)
#define Eps                         (ld)(1e-9)
#define EPS                         (ld)(1e-18)
#define PI                          (ld)(3.141592653589793238462643383279502884197169L)
#define MOD                         (int32_t)(1e9+7)
#define MXN                         (int32_t)(1e5+7)




template<typename dataType1>
inline void print(dataType1 a) {cout << a << endl;}
template<typename dataType1, typename dataType2>
inline void print(dataType1 a, dataType2 b) {cout << a << " " << b << endl;}
template<typename dataType1, typename dataType2, typename dataType3>
inline void print(dataType1 a, dataType2 b, dataType3 c) {cout << a << " " << b << " " << c << endl;}
template<typename dataType1, typename dataType2, typename dataType3, typename dataType4>
inline void print(dataType1 a, dataType2 b, dataType3 c, dataType4 d) {cout << a << " " << b << " " << c << " " << d << endl;}
template<typename dataType>
inline void printarr(dataType* arr, int32_t n) {f0(i,n) cout << arr[i] << " "; cout << endl;}
template<typename dataType>
inline dataType abs(dataType k) {if (k >= 0) return k; else return (-k);}
template<typename dataType>
inline bool equalCompare(dataType a, dataType b) {return (abs((dataType)(a-b)) < 1e-9);}


template<typename dataType>
dataType partitionProbDiff(dataType* arr, dataType n) {
    dataType sum = 0;
    for (int32_t i = 0; i < n; i++) sum += arr[i];

    bool dp[n + 1][sum + 1];
    for (int32_t i = 0; i <= n; i++) dp[i][0] = true;
    for (int32_t i = 1; i <= sum; i++) dp[0][i] = false;

    for (int32_t i = 1; i <= n; i++) {
        for (int32_t j = 1; j <= sum; j++) {
            dp[i][j] = dp[i - 1][j];
 
            if (arr[i - 1] <= j)
                dp[i][j] |= dp[i - 1][j - arr[i - 1]];
        }
    }
    for (int32_t j = sum / 2; j >= 0; j--) {
        if (dp[n][j] == true) {
            return (sum - 2 * j);
        }
    }
}
template<typename dataType>
bool subsetSumProblem(dataType set[], dataType n, dataType sum) {
    bool subset[n + 1][sum + 1];
    for (int32_t i = 0; i <= n; i++)
        subset[i][0] = true;
    for (int32_t i = 1; i <= sum; i++)
        subset[0][i] = false;
    for (int32_t i = 1; i <= n; i++) {
        for (int32_t j = 1; j <= sum; j++) {
            if (j < set[i - 1])
                subset[i][j] = subset[i - 1][j];
            if (j >= set[i - 1])
                subset[i][j] = subset[i - 1][j] || subset[i - 1][j - set[i - 1]];
        }
    }
    return subset[n][sum];
}
bool isPrefix(string &s, string &y) {
    if(s.length() > y.length()) return false;
    f0(i, s.length()) if(s[i] != y[i]) return false;
    return true;
}
bool ispalindrom(string s) {
    f0(i, s.length()/2) if(s[i] != s[s.length()-i-1]) return false;
    return true;
}

template<typename dataType>
dataType gcd(dataType a, dataType b) {
    while (b != 0) {
        dataType c = b;
        b = (lli)a % (lli)b;
        a = c;
    }
    return a;
}


template<typename dataType>
void allPrimeBoolArray(dataType n, bool* prime) {
    memset(prime, true, sizeof(prime));

    for (int32_t p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (dataType i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
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
string decimalToBinary(dataType n) {
    string s = bitset<64>(n).to_string();

    const auto loc1 = s.find('1');

    if(loc1 != string::npos)
        return s.substr(loc1);
     
    return "0";
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
    return revStr(res);
}


template<typename dataType1, typename dataType2>
dataType1 smallFactor(dataType1 n, dataType2 &primes) {
    for (dataType1 x:primes) {
        if(n % x == 0) {
            return x;
            break;
        } else if (x > sqrt(n)) {
            return n;
            break;
        }
    }
    return 7;
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
int64_t modInverse(dataType1 n, dataType2 mod, bool isPrime) {
    if(isPrime) return powMod(n, mod-2, mod);
    return powMod(n, phi(mod)-1, mod);
}
template<typename dataType1, typename dataType2, typename dataType3>
int64_t modDivide(dataType1 a, dataType2 b, dataType3 mod, bool isPrime) {
    return (((int64_t)a * modInverse(b, mod, isPrime)) % mod);
}

//define a compare function for pair
template<typename dataType1, typename dataType2, typename dataType3, typename dataType4>
bool compare(pair<dataType1, dataType2> &a, pair<dataType3, dataType4> &b) {
    return a.first < b.first;
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
    #else 
        std::ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    #endif

    // Previous code



    // Main code
    int32_t test = 1;

    // testIn;
    
    tests {

        solve1(testNo);

    }

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
