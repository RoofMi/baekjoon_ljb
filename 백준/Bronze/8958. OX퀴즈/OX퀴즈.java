import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		sc.nextLine();
		
		for (int i = 0; i < n; i++) {
			String []input = sc.nextLine().split("");
			int score = 0;
			int result = 0;
			
			if (input[0].equals("O")) {
				score++;
				result += score;
			}
			
			for (int j = 1; j < input.length; j++) {
				if (input[j-1].equals("O") && input[j].equals("O")) {
					score++;
					result += score;
				}
				else if (input[j-1].equals("X") && input[j].equals("O")){
					score = 1;
					result += score;
				}
				else {
					score = 0;
				}
			}
			System.out.println(result);
		}
	}
}
