import java.io.*;

public class Main {
	static int[] primeNum;
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		primeNum = new int[10001];
		
		init();

		int t = Integer.parseInt(br.readLine());

		for (int i = 0 ; i < t; i++) {
			int input = Integer.parseInt(br.readLine());
			
			if (input % 2 == 0) {
				solve(input);
			}
		}
	}

	public static void solve(int in) {
		for (int i = in / 2; i >= 2; i--) {
			for (int j = in / 2; j < primeNum.length; j++) {
				if (primeNum[i] + primeNum[j] == in) {
					System.out.println(primeNum[i] + " " + primeNum[j]);
					return;
				}
			}
		}
	}
	
	public static void init() {
		for (int i = 2; i < primeNum.length; i++) {
			primeNum[i] = i;
		}

		for (int i = 2; i < primeNum.length; i++) {
			if (primeNum[i] == 0) {
				continue;
			}

			for (int j = 2 * i; j < primeNum.length; j += i) {
				primeNum[j] = 0;
			}
		}
	}
}
