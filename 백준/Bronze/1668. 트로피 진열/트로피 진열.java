import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int total = sc.nextInt();
		
		int []tropi = new int[total];
		
		for (int i = 0; i < total; i++) {
			tropi[i]= sc.nextInt();
		}
		
		int left = 0;
		int right = 0;
		int max = 0;
		
		for (int i = 0; i < total; i++) {
			if (max < tropi[i]) {
				max = tropi[i];
				left++;
			}
		}
		
		max = 0;
		
		for (int i = total-1; i >= 0; i--) {
			if (max < tropi[i]) {
				max = tropi[i];
				right++;
			}
		}
		
		System.out.println(left + "\n" + right);
	}
}