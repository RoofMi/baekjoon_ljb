import java.util.*;
import java.io.*;

class Edge implements Comparable<Edge> {
	int from;
	int to;
	int v;

	Edge(int from, int to, int v) {
		this.from = from;
		this.to = to;
		this.v = v;
	}

	@Override
	public int compareTo(Edge o) {
		return v - o.v;
	}

}

public class Main {
	public static int parents[];
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		
		ArrayList<Edge> edge = new ArrayList<>();
		
		int V = Integer.parseInt(br.readLine());
		int E = Integer.parseInt(br.readLine());
		
		for (int i = 0; i < E; i++) {
			st = new StringTokenizer(br.readLine());
	
			int from = Integer.parseInt(st.nextToken());
			int to = Integer.parseInt(st.nextToken());
			int v = Integer.parseInt(st.nextToken());
			edge.add(new Edge(from, to, v));
		}
		
		Collections.sort(edge);
		
		parents = new int[V + 1];
		
		for (int i = 1; i <= V; i++) {
			parents[i] = i;
		}

		int result = 0;
		
		for (int i = 0; i < edge.size(); i++) {
			Edge edges = edge.get(i);

			if (check(edges.from) != check(edges.to)) {
				
				result += edges.v;
				union(edges.from, edges.to);
			}
		}
		
		System.out.println(result);
	}
	
	public static int check(int a) {
		if (a == parents[a]) {
			return a;
		}
		
		parents[a] = check(parents[a]);
		
		return parents[a];
	}

	public static boolean union(int a, int b) {
		a = check(a);
		b = check(b);

		if (a != b) {
			parents[b] = a;
			return true;
		}
		
		return false;
	}
}
