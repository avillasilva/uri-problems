import java.util.LinkedList;
import java.util.Scanner;

public class problem1030 {
    public static void main(String[] args) {
	Scanner scan = new Scanner(System.in);	
	int nc, k, n;

	nc = scan.nextInt();

	while (nc > 0) {
	    n = scan.nextInt();
	    k = scan.nextInt();
	    LinkedList<Integer> list = new LinkedList<Integer>();

	    for(int i = 0; i < n; i++)
		list.add(i + 1);

	    int index = 0;
	    while(list.size() != 1) {
		index = (index + k) % list.size();
		System.out.println(index);
		list.remove(index);
	    }

	    System.out.println(list.getFirst());

	    nc--;
	}
    }
}
