import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		sc.nextLine();
		
		for (int i = 0; i < n; i++) {
			String []input = sc.nextLine().split(" ");
			int average = 0;
			int av_st = 0;
			
			for (int j = 1; j < Integer.parseInt(input[0]) + 1; j++) {
				average += Integer.parseInt(input[j]);
			}
			
			average /= Integer.parseInt(input[0]);
			
			for (int j = 1; j < Integer.parseInt(input[0]) + 1; j++) {
				if (average < Integer.parseInt(input[j])) {
					av_st ++;
				}
			}
			
			System.out.println(String.format("%.3f", (double)av_st / (double)Integer.parseInt(input[0]) * 100) + "%");
		}
	}
}
