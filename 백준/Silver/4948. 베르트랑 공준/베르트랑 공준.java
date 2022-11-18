import java.io.*;

public class Main {
	static int n;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		while(true) {
			n = Integer.parseInt(br.readLine());
			
			if (n == 0) {
				break;
			}
			else {
				int t = num();
				System.out.println(t);
			}
		}
	}
	
	public static int num() {
		int result = 0;
		int []temp = new int[n * 2 + 1];
		
		for (int i = 2; i <= n * 2; i++) {
			temp[i] = i;
		}
		
		for (int i = 2; i <= n * 2; i++) {
			if (temp[i] == 0) {
				continue;
			}
			
			for (int j = 2 * i; j <= n * 2; j += i) {
				temp[j] = 0;
			}
		}
		
		for (int i = n + 1; i <= n * 2; i++) {
			if (temp[i] != 0) {
				result ++;
			}
		}
		
		return result;
	}
}