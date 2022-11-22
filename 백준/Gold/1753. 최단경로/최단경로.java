import java.io.*;
import java.util.*;

public class Main {
	
	static class Node implements Comparable<Node> {
		int index;
		int cost;
		
		Node(int index, int cost) {
			this.index = index;
			this.cost = cost;
		}
		
		@Override
		public int compareTo(Node o) {
			return this.cost - o.cost;
		}
	}
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		int V = Integer.parseInt(st.nextToken());
		int E = Integer.parseInt(st.nextToken());
		int start = Integer.parseInt(br.readLine());
		
		PriorityQueue<Node>[] queue = new PriorityQueue[V+1];
		
		for (int i = 1; i <= V; i++) {
			queue[i] = new PriorityQueue<Node>();
		}
		
		for (int i = 0; i < E; i++) {
			st = new StringTokenizer(br.readLine());
			
			int u = Integer.parseInt(st.nextToken());
			int v = Integer.parseInt(st.nextToken());
			int w = Integer.parseInt(st.nextToken());
			
			queue[u].add(new Node(v, w));
		}
		
		int[] dist = new int[V + 1];
		
		for (int i = 0; i < dist.length; i++) {
			dist[i] = -1;
		}
		
		dist[start] = 0;
		
		while (!queue[start].isEmpty()) {
			Node tmp = queue[start].poll();
			int curIdx = tmp.index;
			int curCost = tmp.cost;

			if (dist[curIdx] != -1) {
				continue;
			}

			dist[curIdx] = curCost;
			
			for (Node n : queue[curIdx]) {
				queue[start].add(new Node(n.index, n.cost + curCost));
			}
		}
		StringBuilder sb = new StringBuilder();
		
		for (int i = 1; i <= V; i++) {
			if (dist[i] != -1) {
				sb.append(dist[i]).append("\n");
			}
			else {
				sb.append("INF").append("\n");
			}
		}
		
		System.out.println(sb.toString());
	}
}