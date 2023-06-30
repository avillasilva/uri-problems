import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class problem1234 {
    public static void main(String[] args) throws IOException {
	BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
    
	do {
	    
	    String str = reader.readLine();
	    char[] input = str.toCharArray(); 
	    int count = 0;

	    for (int i = 0; i < input.length; i++) {
	
		if (input[i] != ' ') {

		    if (count % 2 == 0 && (input[i] >= 'a' && input[i] <= 'z')) {
			input[i] = (char) (input[i] - 'a' + 'A');
		    }

		    else if (count % 2 != 0 && (input[i] >= 'A' && input[i] <= 'Z')) {
			input[i] = (char) (input[i] - 'A' + 'a');
		    }

		    count++;
		}
	    }
	    
	    System.out.println(input);

	} while (reader.ready());
    }
}
