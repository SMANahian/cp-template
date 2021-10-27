#include <bits\stdc++.h>
using namespace std;




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





int main() {

    return 0;
}
