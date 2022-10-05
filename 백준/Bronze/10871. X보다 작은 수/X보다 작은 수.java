import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String result = "";
		
		int n = scan.nextInt();
		int x = scan.nextInt();
		
		if (n >= 1 && x <= 10000) {
			for (int i = 0; i < n; i++) {
				int a = scan.nextInt();
				
				if (a >= 1 && a <= 10000) {
					if (a < x) {
						result += a + " ";
					}
				}
			}
		}
		result = result.substring(0, result.length() - 1);
		System.out.println(result);
	}
}
