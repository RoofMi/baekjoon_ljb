import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n1 = sc.nextInt();
		
		if (n1 != 1) {
			int i = 2;
			while(i <= n1) {
				if (n1 % i == 0) {
					n1 /= i;
					System.out.println(i);
				}
				else {
					i++;
				}
			}
		}
	}
}
