import math




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

def toDeci(str,base):
    llen = len(str)
    power = 1 
    num = 0 
 
    for i in range(llen - 1, -1, -1):
        if val(str[i]) >= base:
            print('Invalid Number')
            return -1
        num += val(str[i]) * power
        power = power * base
    return num

def reVal(num):
    if (num >= 0 and num <= 9):
        return chr(num + ord('0'));
    else:
        return chr(num - 10 + ord('A'));

def fromDeci(inputNum, base):
    res = ""
    index = 0; 

    while (inputNum > 0):
        res += reVal(inputNum % base)
        inputNum = int(inputNum / base)

    return res[::-1]


def main():
    # Previous code


    test = int(input())
    for testNo in range(1, test + 1):
        pass



if __name__ == "__main__":
    main()