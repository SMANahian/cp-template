from math import sin,cos,sqrt




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
 




def main():
    # Previous code


    test = int(input())
    for testNo in range(1, test + 1):
        n = int(input())



if __name__ == "__main__":
    main()
