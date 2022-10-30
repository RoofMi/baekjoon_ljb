import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n1 = sc.nextInt();
		int n2 = sc.nextInt();
		int sum = 0;
		int min = n2;
		
		for (int i = n1; i <= n2; i++) {
			boolean check = true;
			if (i < 2) {
				continue;
			}
			
			for (int j = 2; j <= Math.sqrt(i); j++) {
				if (i % j == 0) {
					check = false;
					break;
				}
			}
			if (check == true) {
				sum += i;
				if (min > i) {
					min = i;
				}
			}
		}
		if (sum == 0) {
			System.out.println(-1);
		}
		else {
			System.out.println(sum + "\n" + min);
		}
	}
}