import java.io.*;

public class Main {
	static int[] dp;
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int n = Integer.parseInt(br.readLine());
		
		if (n == 1) {
			System.out.println("1");
			System.exit(0);
		}
		dp = new int[n+1];
		
		dp[0] = 0;
		dp[1] = 1;
		dp[2] = 2;
		
		for (int i = 3; i <= n; i++) {
			dp[i] = -1;
		}
		
		System.out.println(dynamic(n));
	}
	
	public static int dynamic(int n) {
		if (dp[n] == -1) {
			dp[n] = (dynamic(n - 1) + dynamic(n - 2)) % 15746;
		}
		return dp[n];
	}
}
