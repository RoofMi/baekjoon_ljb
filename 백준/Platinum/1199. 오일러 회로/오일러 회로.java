import java.util.*;
import java.io.*;

public class Main {
	static int [][]board;
	static int []degree;
	static int n;
	static int start;
	static StringBuilder sb;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;

		n = Integer.parseInt(br.readLine());

		board = new int[n][n];
		degree = new int[n];
		sb = new StringBuilder();

		for (int i = 0; i < n; i++) {
			st = new StringTokenizer(br.readLine());

			for (int j = 0; j < n; j++) {
				board[i][j] = Integer.parseInt(st.nextToken());
				degree[i] += board[i][j];
			}
		}

		for (int i = 0; i < n; i++) {
			if (degree[i] % 2 == 1) {
				System.out.println("-1");
				System.exit(0);
			}
		}

		dfs(0);
		
		System.out.println(sb);
	}

	public static void dfs(int node) {
		for (int i = 0; i < n; i++) {
			while(board[node][i] > 0) {
				board[node][i]--;
				board[i][node]--;

				dfs(i);
			}
		}
		sb.append(node + 1).append(" ");
	}
	
}