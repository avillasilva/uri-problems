import java.io.*;

/* Some useful test cases 
	
	input:  1
		    7 45 3
	output: 1
	
	input:  3
	        7 0 30
	        10 0 30
	        10 0 25
	output: 1

	input:  4
	        7 15 3
	        7 30 25
	        15 0 3
	        15 30 25
	output: 2

	input:  7
	        7 15 3
	        7 30 20
	        14 15 3
	        14 30 20
	        17 0 32
	        17 15 5
	        18 0 15
	outuput:5
*/

public class problem2506 {
	public static void main(String[] args) throws IOException {
		
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String input;
		int patients, h, m, c, next_h, next_m, delay_h, delay_m, critics;

		do {

			input = in.readLine();
			patients = Integer.parseInt(input);

			next_h = 7;
			next_m = 0;
			critics = 0;

			for(int i = 0; i < patients; i++) {

				input = in.readLine();
				h = Integer.parseInt((input.split(" "))[0]);
				m = Integer.parseInt((input.split(" "))[1]);
				c = Integer.parseInt((input.split(" "))[2]);

				if(h > next_h || (h == next_h && m > next_m) ) {
					next_h = h;

					if(m > 0 && m <= 30) {
						next_m = 30;
						
					} else if(m > 30) { 
						next_m = 0;
						next_h++;
					
					} else {
						next_m = 0;
					}
				} 

				if (h != next_h || m != next_m) {

					delay_m = (m + c) % 60;
	                delay_h = h + ((m + c) / 60);	                
					
					if(delay_h < next_h || (delay_h == next_h && delay_m < next_m)) {
						critics++;
					}
					
				}

				next_h += (next_m + 30) / 60;	
				next_m = (next_m + 30) % 60;
			}

			System.out.println(critics);

		} while (in.ready());
	}
}