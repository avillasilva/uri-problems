import java.util.Scanner;

public class problem1105 {
  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int b = s.nextInt();
    int n = s.nextInt();

    int[] monetaryReserve = new int[b];

    for (int i = 0; i < b; i++) {
      monetaryReserve[i] = s.nextInt();
    }

    int devedor, credor, debenture;
    while (n-- > 0) {
      devedor = s.nextInt();
      credor = s.nextInt();
      debenture = s.nextInt();
      monetaryReserve[devedor] -= debenture;
      monetaryReserve[credor] += debenture;
    }

    for (int i : monetaryReserve) {
      if (i < 0) {
        System.out.println("N");
        return;
      }
    }

    System.out.println("S");
  }
}
