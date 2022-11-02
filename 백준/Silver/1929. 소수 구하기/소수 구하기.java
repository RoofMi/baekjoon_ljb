import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		
		int n1 = Integer.parseInt(st.nextToken());
		int n2 = Integer.parseInt(st.nextToken());
		
		
		for (int i = n1; i <= n2; i++) {
			boolean check = true;
			if (i < 2) {
				continue;
			}
			
			for (int j = 2; j <= Math.sqrt(i); j++) {
				if (i % j == 0) {
					check = false;
					break;
				}
			}
			if (check == true) {
				System.out.println(i);
			}
		}
		
	}
}