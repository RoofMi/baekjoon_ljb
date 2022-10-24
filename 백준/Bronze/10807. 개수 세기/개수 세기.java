import java.util.*;
import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());						// 이 방법으론 딱히 필요없음.
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		int n = Integer.parseInt(br.readLine());
		
		int result = 0;
		
		while(st.hasMoreTokens()) {
			if (n == Integer.parseInt(st.nextToken())) {
				result++;
			}
		}
		
		System.out.println(result);
	}
}