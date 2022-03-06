import sys
import math
from collections import Counter



def allPrimeBoolArray(n, primeBoolList):
    primeBoolList = [True for i in range(n+1)]
    p = 2
    while (p * p <= n):
        if primeBoolList[p]:
            for i in range(p * p, n+1, p):
                primeBoolList[i] = False

        p += 1

def allPrimeList(n, primeList):
    prime = [True for i in range(n+1)]
    p = 2
    while (p * p <= n):
        if prime[p]:
            for i in range(p * p, n+1, p):
                prime[i] = False

        p += 1

    for p in range(2, n + 1):
        if prime[p]:
            primeList.append(p)



def val(c):
    if c >= '0' and c <= '9':
        return ord(c) - ord('0')
    else:
        return ord(c) - ord('A') + 10

def nthBaseToDecimal(str, base):
    llen = len(str)
    power = 1 
    num = 0 
 
    for i in range(llen - 1, -1, -1):
        num += (val(str[i]) * power)
        power *= base

    return num


def reVal(num):
    if (num >= 0 and num <= 9):
        return chr(num + ord('0'))
    else:
        return chr(num - 10 + ord('A'))

def nthBasefromDeci(inputNum, base):
    res = ""

    while (inputNum > 0):
        res += reVal(inputNum % base)
        inputNum = int(inputNum / base)
    
    if res == "":
        res = "0"

    return res[::-1]

def phi(n):
    res = n
    p = 2
    while (p * p <= n):
        if n % p == 0:
            while (n % p == 0): n /= p
            res -= res // p
        p += 1
    if n > 1: res -= res // n
    return res

def powMod(base, n, mod):
    if n == 0: return 1
    if n % 2 == 0:
        return (powMod(base, n/2, mod) ** 2) % mod
    else:
        return (base * ((powMod(base, (n-1)/2, mod) ** 2) % mod)) % mod

def modInverse(n, mod, isPrime):
    if isPrime: return powMod(n, mod-2, mod)
    return powMod(n, phi(mod) - 1, mod)

def modDivide(a, b, mod, isprime):
    return (a * modInverse(b, mod, isprime)) % mod



def solve1(testNo):
    # print(f"Case #{testNo}: ", end="")

    pass

def solve2(testNo):
    # print(f"Case #{testNo}: ", end="")

    pass

def solve3(testNo):
    # print(f"Case #{testNo}: ", end="")

    pass



def main():
    # Previous code



    test = 1

    test = int(input())

    for testNo in range(1, test + 1):

        solve1(testNo)

        pass




if __name__ == "__main__":
    main()
