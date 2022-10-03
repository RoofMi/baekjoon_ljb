import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner scan = new Scanner(System.in);
		
		int h = scan.nextInt();
		int m = scan.nextInt();
		
		if (m - 45 < 0) {
			m = 60 + (m - 45);
			if (h == 0) {
				h = 23;
			}
			else {
				h--;
			}
		}
		else {
			m -=45;
		}
		System.out.println(h + " " + m);
	}
}
