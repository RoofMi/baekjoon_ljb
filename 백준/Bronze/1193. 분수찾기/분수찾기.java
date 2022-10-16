import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());
		
		int cross = 1;
		int sum = 0;
		
		while(true) {
			if (n <= cross + sum) {
				if (cross % 2 == 1) {
					System.out.println(cross - (n - sum - 1) + "/" + (n - sum));
					break;
				}
				else {
					System.out.println((n - sum) + "/" + (cross - (n - sum - 1)));
					break;
				}
			}
			else {
				sum += cross;
				cross++;
			}
		}
	}
}
