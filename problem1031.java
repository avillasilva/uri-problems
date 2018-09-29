import java.io.IOException;
import java.util.Scanner;

public class problem1031 {
    
    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        int N, m;
        int[] regions;

        N = scan.nextInt();

        while (N != 0) {
            regions = new int[N];
            m = 1;

            while (sumOfAll(regions) != 13) {

                int cm = 0;
                regions[cm] = 0;

                for (int i = 2; i <= N; i++) {
                    regions[i - 1] = i;          
                }

                do {
                    for (int i = 0; i < m; i++) {

                        cm = (cm + 1) % regions.length;

                        if (regions[cm] == 0) {

                            while (regions[cm] == 0) {
                                cm = (cm + 1) % regions.length;
                            }
                        }
                    }

                    if (regions[cm] == 13) {
                        break;
                    } else {

                        regions[cm] = 0;
                    }

                } while (sizeOf(regions) != 1);
                m++;
            }
            
            System.out.println((m - 1));
            N = scan.nextInt();
        }
    }

    static int sizeOf(int[] v) {
        int sum = 0;

        for (int i = 0; i < v.length; i++) {
            if (v[i] != 0) {
                sum++;
            }
        }

        return sum;
    }

    static int sumOfAll(int[] v) {
        int sum = 0;

        for (int i = 0; i < v.length; i++) {
            sum += v[i];
        }

        return sum;
    }
}
