import java.io.IOException;
import java.util.Scanner;

public class problem1019 {

    static boolean isEmpty(int[] v) {
        int soma = 0;
        for (int i = 0; i < v.length; i++) {
            soma += v[i];
        }

        if (soma == 0) {
            return true;
        }

        return false;
    }

    static void print(int v) {

        if (v < 10) {
            System.out.print("  " + v);
        }

        if (v >= 10 && v < 100) {
            System.out.print(" " + v);
        }

        if (v >= 100) {
            System.out.print(v);
        }

    }

    public static void main(String args[]) throws IOException {

        Scanner scan = new Scanner(System.in);
        int n, k, m;
        
        do {
            n = scan.nextInt();
            k = scan.nextInt();
            m = scan.nextInt();

            int[] v = new int[n];
            for (int i = 0; i < v.length; i++) {
                v[i] = i + 1;
            }

            int start = 0;
            int end = v.length + 1;

            while (!isEmpty(v)) {

                for (int i = 0; i < k; i++) {

                    start = (start + 1) % v.length;

                    if (start == 0) {
                        start = v.length;
                    } 
                    
                    if (v[start - 1] == 0) {
                        int e = start - 1;

                        while (v[e] == 0) {
                            e = (e + 1) % v.length;
                        }

                        start = e + 1;
                    }

                }

                for (int i = 0; i < m; i++) {
                    end -= 1;

                    if (end < 1) {
                        end = v.length + end;
                    }

                    if (v[end - 1] == 0) {
                        int e = end - 1;

                        while (v[e] == 0) {
                            e--;

                            if (e < 0) {
                                e = v.length + e;
                            }
                        }

                        end = e + 1;
                    }
                }

                if (v[start - 1] == v[end - 1]) {
                    print(v[start - 1]);
                } else {

                    if (v[start - 1] != 0) {
                        print(v[start - 1]);
                    }

                    if (v[end - 1] != 0) {
                        print(v[end - 1]);
                    }
                }

                v[start - 1] = 0;
                v[end - 1] = 0;

                if (isEmpty(v)) {
                    System.out.println();
                } else {
                    System.out.print(",");
                }
            }
        } while (n != 0 || k != 0 || m != 0);
    }
}

