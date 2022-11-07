import java.util.*;
import java.io.*;

public class Main {
	static int [][]board;
	static boolean []visited;
	static int []subset;
	static List <Integer> list_row = new ArrayList<>();
	static List <Integer> list_col = new ArrayList<>();
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		
		
		board = new int[9][9];
		
		for (int i = 0; i < 9; i++) {
			st = new StringTokenizer(br.readLine(), " ");
			for (int j = 0; j < 9; j++) {
				board[i][j] = Integer.parseInt(st.nextToken());
				
				if (board[i][j] == 0) {
					list_row.add(i);
					list_col.add(j);
				}
			}
		}
		System.out.println();
		
		sudoku(0);
	}
	
	public static boolean sudoku(int start) {
		if (start == list_row.size()) {
			StringBuilder sb = new StringBuilder();
			for (int i = 0; i < 9; i++) {
				for (int j = 0; j < 9; j++) {
					sb.append(board[i][j]).append(" ");
				}
				sb.append("\n");
			}
			
			System.out.println(sb);
			System.exit(0);
		}
		
		int rows = list_row.get(start);
		int cols = list_col.get(start);
		
		for (int i = 1; i <= 9; i++) {
			if (check(rows, cols, i)) {
				
				board[rows][cols] = i;
				
				if (sudoku(start + 1)) {
					return true;
				}
				
				board[rows][cols] = 0;
			}
		}
		
		return false;
	}
	
	public static boolean check(int row, int col, int v) {
		for (int i = 0; i < 9; i++) {
			if (board[row][i] == v) {
				return false;
			}
		}
		
		for (int i = 0; i < 9; i++) {
			if (board[i][col] == v) {
				return false;
			}
		}
		
		int temp_row = (row / 3) * 3;
		int temp_col = (col / 3) * 3;
		
		for (int i = temp_row; i < temp_row + 3; i++) {
			for (int j = temp_col; j < temp_col + 3; j++) {
				if (board[i][j] == v) {
					return false;
				}
			}
		}
		
		return true;
	}
}
