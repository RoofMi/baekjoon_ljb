import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		List <Integer> list = new ArrayList<>();
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		for (int i = 0; i < 4; i++) {
			list.add(Integer.parseInt(st.nextToken()));
		}
		
		int x = Math.min(Math.abs(list.get(2) - list.get(0)), list.get(0));
		int y = Math.min(Math.abs(list.get(3) - list.get(1)), list.get(1));
		
		System.out.println(Math.min(x, y));
	}
}