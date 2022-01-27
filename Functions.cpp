#include <iostream>

#include <cmath>
#include <cstring>
#include <algorithm>



#include <set>
#include <map>
#include <list>
#include <utility>
#include <string>
#include <vector>
#include <bitset>



using std::min;
using std::max;
using std::sort;
using std::to_string;
using std::make_pair;

using std::cin;
using std::cout;

using std::set;
using std::map;
using std::list;
using std::pair;
using std::string;
using std::vector;
using std::bitset;





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
typedef list<int>                   lsi;
typedef list<ld>                    lsld;
typedef list<ui>                    lsui;
typedef list<li>                    lsli;
typedef list<uli>                   lsuli;
typedef list<lli>                   lslli;
typedef list<ulli>                  lsulli;
typedef set<int>                    si;
typedef set<ld>                     sld;
typedef set<ui>                     sui;
typedef set<li>                     sli;
typedef set<uli>                    suli;
typedef set<lli>                    slli;
typedef set<ulli>                   sulli;






#define endl                        "\n"
#define End                         << endl
#define inp(n)                      int n; cin >> n
#define Inp(n)                      lli n; cin >> n
#define inpstr(s)                   string s; cin >> s
#define inp2(a,b)                   int a,b; cin >> a >> b
#define Inp2(a,b)                   lli a,b; cin >> a >> b
#define inparr(arr,n)               int arr[n]; f0(t_ind, n) cin >> arr[t_ind]
#define Inparr(arr,n)               lli arr[n]; f0(t_ind, n) cin >> arr[t_ind]

#define f0(i,n)                     for(li i = 0; i <  (n); i++)
#define f1(i,n)                     for(li i = 1; i <= (n); i++)
#define rep0(i,l,r)                 for(li i=(l); i <  (r); i++)
#define rep1(i,l,r)                 for(li i=(l); i <= (r); i++)

#define testIn                      cin >> test
#define tests                       for(int testNo=1; testNo <= (test); testNo++)

#define all(x)                      (x).begin(), (x).end()
#define rall(x)                     (x).rbegin(), (x).rend()
#define asrt(v)                     sort(all(v))
#define dsrt(v)                     sort(rall(v))
#define revStr(str)                 string(rall(str))
#define sz(a)                       ((a).size())

#define print(x)                    cout << x End
#define pb                          push_back
#define lcm(a,b)                    (((a)*(b))/gcd(a,b))

#define yes                         cout << "yes" End
#define no                          cout << "no" End
#define Yes                         cout << "Yes" End
#define No                          cout << "No" End
#define YES                         cout << "YES" End
#define NO                          cout << "NO" End
#define finish                      return 0

#define Inf                         (li)(1e9)
#define INF                         (lli)(1e18)
#define Eps                         (ld)(1e-9)
#define EPS                         (ld)(1e-18)
#define PI                          (ld)(3.141592653589793238462643383279502884197169)
#define MOD                         (li)(1e9+7)
#define MXN                         (int)(1e5+7)





template<typename dataType>
dataType gcd(dataType a, dataType b) {
    while (b != 0) {
        dataType c = b;
        b = a % b;
        a = c;
    }
    return a;
}


template<typename dataType>
void allPrimeBoolArray(dataType n, bool* prime) {
    memset(prime, true, sizeof(prime));

    for (dataType p = 2; p * p <= n; p++) {
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

    for (dataType1 p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (dataType1 i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (dataType1 p = 2; p <= n; p++)
        if (prime[p])
            primeList.pb(p);
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
    int len = str.length();
    int power = 1;
    dataType num = 0; 
 
    for (int i = len - 1; i >= 0; i--) {
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
dataType abs(dataType k) {
    if (k >= 0) return k; else return (-k);
}

template<typename dataType>
bool equalCompare(dataType a, dataType b) {
    return (abs((dataType)(a-b)) < 1e-9);
}




// Solver functions

void solve1() {
    
}


void solve2() {
    
}


void solve3() {
    
}



int main() {

    #if __has_include("LOCAL.hh")
        #include "LOCAL.hh"
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
    int test = 1;

    testIn;
    
    tests {

        

    }

    finish;
}
