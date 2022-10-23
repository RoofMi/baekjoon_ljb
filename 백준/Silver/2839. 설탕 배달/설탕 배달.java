import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int total = sc.nextInt();
		
		if (total == 4 || total == 7){
			System.out.println("-1");
		}
		else if (total % 5 == 0) {
			System.out.println(total / 5);
		}
		else if (total % 5 == 1 || total % 5 == 3) {
			System.out.println((total / 5) + 1);
		}
		else if (total % 5 == 2 || total % 5 == 4) {
			System.out.println((total / 5) + 2);
		}
	}
}