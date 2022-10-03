import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner scan = new Scanner(System.in);
		
		int a = scan.nextInt();
		int b = scan.nextInt();
		
		if (a >= -10000 && b <= 10000) {
			if (a > b) {
				System.out.println(">");
			}
			else if (a < b) {
				System.out.println("<");
			}
			else {
				System.out.println("==");
			}
		}
	}
}
