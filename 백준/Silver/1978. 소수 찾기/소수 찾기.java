import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int ns = sc.nextInt();
		int sum = 0;
		
		for (int i = 0; i < ns; i++) {
			int num = sc.nextInt();
			
			if (num <= 1) {
				continue;
			}
			else {
				boolean check = false;
				for (int j = 2; j < num; j++) {
					if (num % j == 0) {
						check = true;
						break;
					}
				}
				
				if (check == false) {
					sum++;
				}
			}
		}
		
		System.out.println(sum);
	}
}
