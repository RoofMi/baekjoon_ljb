import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int [][]n = new int[100][100];
		int sum = 0;
		
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				n[i][j] = 0;
			}
		}
		
		int t = sc.nextInt();
		
		for (int i = 0; i < t; i++) {
			int x = sc.nextInt();
			int y = sc.nextInt();
			
			for (int j = x - 1; j < x + 9; j++) {
				for (int k = y - 1; k < y + 9; k++) {
					if (n[j][k] != 1) {
						n[j][k] = 1;
						sum++;
					}
				}
			}
		}
		
		System.out.println(sum);
	}
}
