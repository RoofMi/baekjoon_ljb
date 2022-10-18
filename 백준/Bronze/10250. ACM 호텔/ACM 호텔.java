import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int t = Integer.parseInt(br.readLine());
		
		for (int k = 0; k < t; k++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			
			int h = Integer.parseInt(st.nextToken());
			int w = Integer.parseInt(st.nextToken());
			int n = Integer.parseInt(st.nextToken());
			
			String result;
			
			if (n % h == 0) {
				result = String.valueOf((h * 100) + (n / h));
			}
			else {
				result = String.valueOf(((n % h) * 100) + ((n / h) + 1));
			}
			
			System.out.println(result);
		}
	}
}