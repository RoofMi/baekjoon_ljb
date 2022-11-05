import java.util.*;
import java.io.*;

public class Main {
	static int n1;
	static int n2;
	static int []list;
	static int []subset;
	static StringBuilder sb = new StringBuilder();;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		
		
		n1 = Integer.parseInt(st.nextToken());
		n2 = Integer.parseInt(st.nextToken());
		
		list = new int[n1];
		subset = new int[n2];
		
		for (int i = 0; i < n1; i++) {
			list[i] = i+1;
		}
		
		com(0, n2);
		System.out.println(sb);
	}
	
	public static void com(int depth, int r) {		
		if (depth == r) {
			for (int i = 0; i < r; i++) {
				sb.append(subset[i]).append(" ");
			}
			sb.append("\n");
			return;
		}
		
		for (int i = 0; i < n1; i++) {
			subset[depth] = list[i];
			com(depth+1, r);
		}
	}
}