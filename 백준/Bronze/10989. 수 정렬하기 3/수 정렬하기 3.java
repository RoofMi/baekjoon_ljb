import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int t = Integer.parseInt(br.readLine());
		
		int[] count = new int[10001];
		
		for (int i = 0; i < t; i++) {
			int temp = Integer.parseInt(br.readLine());
			count[temp]++;
		}
		
		StringBuilder sb = new StringBuilder();
		
		for (int i = 1; i < 10001; i++) {
			while (count[i] > 0) {
				sb.append(i).append("\n");
				count[i]--;
			}
		}

		System.out.println(sb.toString());
	}
}
