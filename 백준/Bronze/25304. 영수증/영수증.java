import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int total = scan.nextInt();
		
		if(total >= 1 && total <= 1000000000) {
			int n = scan.nextInt();
			
			if (n >= 1 && n <= 100) {
				for (int i = 0; i < n; i++) {
					int cost = scan.nextInt();
					int x = scan.nextInt();
					
					if (cost >= 1 && cost <= 1000000 && x >= 1 && x <= 10) {
						total -= cost * x;
					}
				}
			}
		}
		
		if (total == 0) {
			System.out.println("Yes");
		}
		else {
			System.out.println("No");
		}
    }
}