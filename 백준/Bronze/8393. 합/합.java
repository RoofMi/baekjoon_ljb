import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int sum = 0;
		int n = scan.nextInt();
		
		if(n >= 1 && n <= 10000) {
			for (int i = 1; i <= n; i++) {
				sum += i;
			}
		}
		
		System.out.println(sum);
    }
}