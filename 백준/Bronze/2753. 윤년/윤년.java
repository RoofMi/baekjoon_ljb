import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner scan = new Scanner(System.in);
		
		int y = scan.nextInt();
		
		if (y % 4 == 0 && y % 100 != 0) {
			System.out.println("1");
		}
		else {
			if (y % 400 == 0) {
				System.out.println("1");
			}
			else {
				System.out.println("0");
			}
		}
	}
}
