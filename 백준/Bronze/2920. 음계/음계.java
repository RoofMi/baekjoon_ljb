import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		int temp = Integer.parseInt(st.nextToken());
		
		if (temp == 1) {
			for (int i = 1; i < 8; i++) {
				temp = Integer.parseInt(st.nextToken());
				if (temp == i+1) {
					continue;
				}
				else {
					System.out.println("mixed");
					System.exit(0);
				}
			}
			System.out.println("ascending");
		}
		else if (temp == 8) {
			for (int i = 1; i < 8; i++) {
				temp = Integer.parseInt(st.nextToken());
				if (temp == 8 - i) {
					continue;
				}
				else {
					System.out.println("mixed");
					System.exit(0);
				}
			}
			System.out.println("descending");
		}
		else {
			System.out.println("mixed");
		}
	}
}