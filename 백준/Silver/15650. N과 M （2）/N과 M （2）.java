import java.util.*;
import java.io.*;

public class Main {
	static int n1;
	static int n2;
	static int []list;
	static boolean []visited;
	static int []subset;
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine(), " ");
		
		n1 = Integer.parseInt(st.nextToken());
		n2 = Integer.parseInt(st.nextToken());
		
		list = new int[n1];
		visited = new boolean[n1];
		subset = new int[n2];
		
		for (int i = 0; i < n1; i++) {
			list[i] = i+1;
			visited[i] = false;
		}
		
		com(0, 0, n2);
	}
	
	public static void com(int depth, int start, int r) {		
		if (depth == r) {
			for (int i = 0; i < r; i++) {
				System.out.print(subset[i] + " ");
			}
			System.out.println();
			return;
		}
		
		for (int i = start; i < n1; i++) {
			if (!visited[i]) {
				visited[i] = true;
				subset[depth] = list[i];
				com(depth+1, i, r);
				visited[i] = false;
			}
		}
	}
}