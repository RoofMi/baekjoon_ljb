import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner scan = new Scanner(System.in);
		
		int test = scan.nextInt();
		
		if (test >= 0 && test <= 100) {
			if (test >= 90 && test <= 100) {
				System.out.println("A");
			}
			else if (test >= 80 && test < 90) {
				System.out.println("B");
			}
			else if (test >= 70 && test < 80) {
				System.out.println("C");
			}
			else if (test >= 60 && test < 70) {
				System.out.println("D");
			}
			else {
				System.out.println("F");
			}
		}
	}
}
