import java.io.*;
import java.util.*;

public class problem1068 {
	public static void main(String[] args) throws IOException {
		
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String input = in.readLine();		

		while(input != null) {
			
			LinkedList stack = new LinkedList<Character>();
			boolean check = false;
			
			for(int i = 0; i < input.length(); i++) {
				if(input.charAt(i) == '(')
					stack.push("(");			
				
				if(input.charAt(i) == ')') {
					if(stack.size() == 0) {
						check = true;
						break;
					} else {
					 	stack.pop();
					}
				} 
			}

			if(check || stack.size() != 0)
				System.out.println("incorrect");
			
			else
				System.out.println("correct");

			input = in.readLine();	
		}
	}
}
