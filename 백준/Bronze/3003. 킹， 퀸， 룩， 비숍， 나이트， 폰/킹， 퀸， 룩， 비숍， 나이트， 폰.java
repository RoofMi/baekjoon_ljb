import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int []chess = {1, 1, 2, 2, 2, 8};
		
		for (int i = 0; i < 6; i++) {
			int c = scan.nextInt();
			if (c >= 0 && c <= 10) {
				chess[i] -= c;
			}
		}
		
		for (int i = 0; i < 5; i++) {
			System.out.print(chess[i] + " ");
		}
		System.out.println(chess[5]);
    }
}