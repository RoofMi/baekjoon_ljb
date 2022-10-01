import java.util.*;

public class Main {
	
	static int rows;		// 행
	static int columns;		// 열
	
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int i, j;
		int min = 2501;
		
		rows = scan.nextInt();
		columns = scan.nextInt();
		scan.nextLine();
		
		String []table = new String[rows];		// 테이블
		
		/** 테이블을 채워넣는다 **/
		for (i = 0; i < rows; i++) {
			table[i] = scan.nextLine();
			
			if (table[i].length() > columns) {
				System.out.println("columns error");
				System.exit(0);
			}
		}
		
		/** 행과 열이 8~50 사이일경우 체스판 찾기 **/
		if ((rows >= 8 && rows <= 50) && (columns >= 8 && columns <= 50)) {
			for (i = 0; i <= rows-8; i++) {
				for (j = 0; j <= columns-8; j++) {
					int save = find_table(table, i, j);
					
					if (min > save) {
						min = save;
					}
				}
			}
		}
		System.out.println(min);
	}
	
	/** 체스판을 확인하여 최소값을 찾는 메소드 **/
	public static int find_table(String []table, int start_i, int start_j) {
		String [] answer1 = {"WBWBWBWB", "BWBWBWBW"};
		int i, j;
		int find_min1 = 0;
		
		for (i = 0; i < 8; i++) {
			int table_i = start_i + i;
			for (j = 0; j < 8; j++) {
				int table_j = start_j + j;
				
				if (table[table_i].charAt(table_j) != answer1[table_i % 2].charAt(j)) {
					find_min1++;
				}
			}
		}
		
		String [] answer2 = {"BWBWBWBW", "WBWBWBWB"};
		int find_min2 = 0;
		
		for (i = 0; i < 8; i++) {
			int table_i = start_i + i;
			for (j = 0; j < 8; j++) {
				int table_j = start_j + j;
				
				if (table[table_i].charAt(table_j) != answer2[table_i % 2].charAt(j)) {
					find_min2++;
				}
			}
		}
		
		if (find_min1 > find_min2) {
			return find_min2;
		}
		else {
			return find_min1;
		}
	}
}