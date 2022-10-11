import java.util.*;

public class Main {
		public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		Map <String, Integer> collect = new HashMap<>();
		String input = sc.nextLine().toUpperCase();
		
		for (int i = 0; i < input.length(); i++) {
			if (!collect.containsKey(String.valueOf(input.charAt(i)))) {
				collect.put(String.valueOf(input.charAt(i)), 1);
			}
			else {
				int value = collect.get(String.valueOf(input.charAt(i))) + 1;
				
				collect.put(String.valueOf(input.charAt(i)), value);
			}
		}
		
		String rs = "?";
		int ri = 0;
		boolean check = false;
		
		for (String key : collect.keySet()) {
			if (collect.get(key) > ri) {
				check = false;
				rs = key;
				ri = collect.get(key);
			}
			else if (collect.get(key) == ri) {
				check = true;
			}
		}
		if (check) {
			System.out.println("?");
		}
		else {
			System.out.println(rs);
		}
	}
}