#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <cmath>
#include <bitset>
#include <ctime>




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
#define lcm(a,b)                    ((a*b)/gcd(a,b))
#define all(x)                      x.begin(), x.end()
#define rall(x)                     x.rbegin(), x.rend()
#define asrt(v)                     sort(all(v))
#define dsrt(v)                     sort(rall(v))
#define revStr(str)                 string(rall(str))
#define sz(a)                       ((a).size())
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
#define Inf                         (li)(1e9)
#define INF                         (lli)(1e18)
#define EPS                         (ld)(1e-9)
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
void allPrimeVector(dataType1 n, dataType2 &arr) {
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
            arr.pb(p);
}





template<typename dataType>
string decimalToBinary(dataType n) {
    string s = std::bitset<64> (n).to_string();

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
    dataType len = str.size();
    dataType power = 1;
    dataType num = 0; 
    dataType i;
 
    for (i = len - 1; i >= 0; i--) {
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
    string res;
    while (inputNum > 0) {
        res += reVal(inputNum % base);
        inputNum /= base;
    }
    return revStr(res);
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
