import java.io.*;
import java.math.BigInteger;

public class Main {
	static BigInteger[] dp;
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int t = Integer.parseInt(br.readLine());
		
		for (int test = 0; test < t; test++) {
			int n = Integer.parseInt(br.readLine());
			
			if (n > 0 && n < 4) {
				System.out.println(1);
				continue;
			}
			if (n == 4 || n == 5) {
				System.out.println(2);
				continue;
			}
			
			dp = new BigInteger[n+1];
			
			dp[0] = BigInteger.valueOf(0);
			dp[1] = BigInteger.valueOf(1);
			dp[2] = BigInteger.valueOf(1);
			dp[3] = BigInteger.valueOf(1);
			dp[4] = BigInteger.valueOf(2);
			dp[5] = BigInteger.valueOf(2);
			
			for (int i = 6; i <= n; i++) {
				dp[i] = BigInteger.valueOf(-1);
			}
			
			System.out.println(dynamic(n));
		}
	}
	
	public static BigInteger dynamic(int n) {
		if (dp[n].compareTo(BigInteger.valueOf(-1)) == 0) {
			dp[n] = (dynamic(n - 1).add(dynamic(n - 5)));
		}
		return dp[n];
	}
}
