import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String x = br.readLine();
		String y = br.readLine();

		int[][] d = new int[x.length() + 1][y.length() + 1];

		for (int i = 1; i <= x.length(); i++) {
			d[i][0] = i;
		}
		for (int j = 1; j <= y.length(); j++) {
			d[0][j] = j;
		}

		for (int i = 1; i <= x.length(); i++) {
			for (int j = 1; j <= y.length(); j++) {
				if (x.charAt(i - 1) == y.charAt(j - 1)) {
					d[i][j] = d[i - 1][j - 1];
				}
				else {
					d[i][j] = 1 + Math.min(d[i][j - 1], Math.min(d[i - 1][j], d[i - 1][j - 1]));
				}
			}
		}

		System.out.println(d[x.length()][y.length()]);
	}
}