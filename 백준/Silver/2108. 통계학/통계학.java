import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		List <Integer> list = new ArrayList<>();
		Map <Integer, Integer> ch = new TreeMap<>();
		double middle = 0;
		
		int n = Integer.parseInt(br.readLine());
		
		for (int i = 0; i < n; i++) {
			list.add(Integer.parseInt(br.readLine()));
			if (!ch.containsKey(list.get(i))) {
				ch.put(list.get(i), 1);
			}
			else {
				ch.put(list.get(i), ch.get(list.get(i)) + 1);
			}
			middle += (double)list.get(i);
		}
		
		Collections.sort(list);
		int most = 0;
		int answer = 0;
		int check = 0;
		
		for (int i : ch.keySet()) {
			if (most < ch.get(i)) {
				most = ch.get(i);
			}
		}
		
		for (int i : ch.keySet()) {
			if (most == ch.get(i)) {
				check++;
				answer = i;
				if (check == 2) {
					break;
				}
			}
		}
		
		System.out.println(Math.round(middle / n));
		System.out.println(list.get(n / 2));
		System.out.println(answer);
		System.out.println(Collections.max(list) - Collections.min(list));
		
	}
}