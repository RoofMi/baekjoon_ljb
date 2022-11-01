import java.util.*;

public class Main {
	static int n;
	static int result = 0;
	static int [][]board;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		n = sc.nextInt();
		
		board = new int[n][n];
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				board[i][j] = 0;
			}
		}
		
		find_queen(0);
		
		System.out.println(result);
	}
	
	public static boolean find_queen(int c) {
		if (c >= n) {
			result++;
			return true;
		}
		
		for (int i = 0; i < n; i++){
			if (check(i, c) == true) {
				board[i][c] = 1;
				
				if(find_queen(c+1) == true){
					for (int k = 0; k < n; k++) {
						for (int j = 0; j < n; j++) {
							board[i][j] = 0;
						}
					}
					
					continue;
	            }
				 
				board[i][c] = 0;
			}
		}
		
		return false;
	}
	
	public static boolean check(int r, int c) {
		for (int i = 0; i < c; i++) {
			if (board[r][i] == 1) {
				return false;
			}
			
			if (board[i][c] == 1) {
				return false;
			}
		}
		
		int row = r;
		int col = c;
		while (row > 0 && col > 0) {
			row--;
			col--;
		}
		
		while (row < n && col < n) {
			if (board[row][col] == 1) {
				return false;
			}
			row++;
			col++;
		}
		
		row = r;
		col = c;
		
		while (row < n - 1 && col > 0) {
			row++;
			col--;
		}
		
		while (row > 0 && col < n) {
			if (board[row][col] == 1) {
				return false;
			}
			row--;
			col++;
		}
		
		return true;
	}
}
