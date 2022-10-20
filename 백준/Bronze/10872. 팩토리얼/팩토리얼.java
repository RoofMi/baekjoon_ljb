import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println(fac(sc.nextInt()));
	}
	
	public static int fac(int n) {
		
		if (n < 0) {
			return 0;
		}
		else if (n <= 1) {
			return 1;
		}
		else {
			return n * fac(n - 1);
		}
	}
}