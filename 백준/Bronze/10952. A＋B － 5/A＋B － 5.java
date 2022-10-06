import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = 1;
		int b = 1;
		
		while (true) {
			a = sc.nextInt();
			b = sc.nextInt();
			
			if (a == 0 && b == 0) {
				break;
			}
			if (a > 0 && b < 10) {
				System.out.println(a + b);
			}
		}

	}

}
