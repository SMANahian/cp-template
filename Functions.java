import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.*;


public class Functions {

    private static Reader input = new Reader();
    
    public static void main(String[] args) throws IOException {
        
        // Previous code
        


        long test = 1;

        test = input.nextLong();

        for (long testNo = 1; testNo <= test; testNo++) {



        }
        input.close();
    }


    public static void solve1 () {

    }

    public static void solve2 () {
        
    }

    public static void solve3 () {
        
    }
    


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



    static class Reader {
        final private int BUFFER_SIZE = 1 << 16;
        private DataInputStream din;
        private byte[] buffer;
        private int bufferPointer, bytesRead;

        public Reader() {
            din = new DataInputStream(System.in);
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
        public Reader(String file_name) throws IOException {
            din = new DataInputStream(new FileInputStream(file_name));
            buffer = new byte[BUFFER_SIZE];
            bufferPointer = bytesRead = 0;
        }
        public String readLine() throws IOException {
            byte[] buf = new byte[64]; // line length
            int cnt = 0, c;

            while ((c = read()) != -1) {
                if (c == '\n') {
                    if (cnt != 0) {
                        break;
                    } else {
                        continue;
                    }
                }
                buf[cnt++] = (byte) c;
            }

            return new String(buf, 0, cnt);
        }
        public int nextInt() throws IOException {
            int ret = 0;
            byte c = read();

            while (c <= ' ') {
                c = read();
            }

            boolean neg = (c == '-');

            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');

            if (neg)
                return -ret;
            return ret;
        }
        public long nextLong() throws IOException {
            long ret = 0;
            byte c = read();

            while (c <= ' ')
                c = read();

            boolean neg = (c == '-');

            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');

            if (neg)
                return -ret;
            return ret;
        }
        public double nextDouble() throws IOException {
            double ret = 0, div = 1;
            byte c = read();

            while (c <= ' ')
                c = read();

            boolean neg = (c == '-');

            if (neg)
                c = read();
            do {
                ret = ret * 10 + c - '0';
            } while ((c = read()) >= '0' && c <= '9');

            if (c == '.') {
                while ((c = read()) >= '0' && c <= '9') {
                    ret += (c - '0') / (div *= 10);
                }
            }

            if (neg)
                return -ret;
            return ret;
        }
        private void fillBuffer() throws IOException {
            bytesRead = din.read(buffer, bufferPointer = 0, BUFFER_SIZE);
            if (bytesRead == -1)
                buffer[0] = -1;
        }
        private byte read() throws IOException {
            if (bufferPointer == bytesRead)
                fillBuffer();
            return buffer[bufferPointer++];
        }
        public void close() throws IOException {
            if (din == null)
                return;
            din.close();
        }
    }



}
