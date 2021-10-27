import java.util.*;


public class Functions {

    static void allPrimeBoolArray(long n, Boolean[] prime) {
        for (int i = 0; i <= n; i++)
            prime[i] = true;

        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
    }
    
    static void allPrimeVector(int n, Vector<Integer> primeList) { 
        boolean prime[] = new boolean[n + 1];
        for (int i = 0; i <= n; i++)
            prime[i] = true;

        for (int p = 2; p * p <= n; p++) {
            if (prime[p]) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }

        for (int p = 2; p <= n; p++) {
            if (prime[p])
                primeList.add(p);
        }
    }

    static int val(char c) {
        if (c >= '0' && c <= '9')
            return (int)c - '0';
        else
            return (int)c - 'A' + 10;
    }
    static long nthBaseToDecimal(String str, long base) {
        int len = str.length();
        int power = 1;
        long num = 0;

        for (int i = len - 1; i >= 0; i--) {
            num += (val(str.charAt(i)) * power);
            power *= (int)base;
        }

        return num;
    }
    static char reVal(int num) {
        if (num >= 0 && num <= 9)
            return (char) (num + '0');
        else
            return (char) (num - 10 + 'A');
    }
    static String nthBasefromDeci(long inputNum, int base) {
        String res = "";

        while (inputNum > 0) {
            res += reVal((int)(inputNum % base));
            inputNum /= base;
        }
        StringBuilder ix = new StringBuilder();
        ix.append(res);

        return new String(ix.reverse());
    }



}
