import java.util.*;
import java.io.*;

public class Main {
	static int[][] dp;
	static int[] weight;
	static int n;
	static int total;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		n = Integer.parseInt(br.readLine());

		total = 0;
		dp = new int[101][45001];
		weight = new int[n + 1];

		for (int i = 1; i <= n; i++) {
			weight[i] = Integer.parseInt(br.readLine());
			total += weight[i];
		}
		
		int a = solve();
		int b = total - a;

		if (a > b) {
			System.out.println(b + " " + a);
		} else {
			System.out.println(a + " " + b);
		}

	}

	public static int solve() {
		for (int i = 1; i <= n; i++) {
			dp[i][weight[i]] = 1;
			for (int w = 1; w <= total; w++) {
				if (w - weight[i] > 0) {
					for (int k = 1; k < i; k++) {
						if (dp[k][w - weight[i]] > 0) {
							dp[i][w] = dp[k][w - weight[i]] + 1;
						}
					}
				}
			}
		}

		int weight = 0;
		int abs = 45001;
		
		for (int w = 0; w <= total; w++) {
			for (int a = 1; a <= n; a++) {
				if (dp[a][w] == n / 2) {
					int temp = Math.abs((total - w) - w);
					if (abs > temp) {
						weight = w;
						abs = temp;
					}
				}
			}
		}

		return weight;
	}
}