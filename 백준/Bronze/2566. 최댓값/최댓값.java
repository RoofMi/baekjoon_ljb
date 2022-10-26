import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int [][]n = new int[9][9];
		int max = 0;
		int maxX = 1;
		int maxY = 1;
		
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				n[i][j] = sc.nextInt();
				
				if (max < n[i][j]) {
					max = n[i][j];
					maxX = i + 1;
					maxY = j + 1;
				}
			}
		}
		
		System.out.println(max + "\n" + maxX + " " + maxY);
	}
}
