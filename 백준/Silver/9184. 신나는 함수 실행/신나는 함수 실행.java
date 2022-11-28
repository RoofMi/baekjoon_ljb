import java.util.*;
import java.io.*;

public class Main {
	static int[][][] dp;
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		
		int a = 0;
		int b = 0;
		int c = 0;
		
		dp = new int[21][21][21];
		
		while(true) {
			st = new StringTokenizer(br.readLine());
			
			a = Integer.parseInt(st.nextToken());
			b = Integer.parseInt(st.nextToken());
			c = Integer.parseInt(st.nextToken());
			
			if (a == -1 && b == -1 && c == -1) {
				break;
			}
			
			System.out.println("w(" + a + ", " + b + ", " + c + ") = " + w(a, b, c));
		}
	}
	
	public static int w(int a, int b, int c) {
		if (a <= 20 && a >= 0 && b <= 20 && b >= 0 && c <= 20 && c >= 0 && dp[a][b][c] != 0) {
			return dp[a][b][c];
		}
		
		if (a <= 0 || b <= 0 || c <= 0) {
			return 1;
		}
		else if (a > 20 || b > 20 || c > 20) {
			dp[20][20][20] = w(20, 20, 20);
			return dp[20][20][20];
		}
		else if (a < b && b < c) {
			dp[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
			return dp[a][b][c];
		}
		else {
			dp[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
			return dp[a][b][c];
		}
	}
}
