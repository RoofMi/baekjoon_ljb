import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		List <Integer>ns = new ArrayList<>();
		
		for (int i = 0; i < 10; i++) {
			int input = sc.nextInt() % 42;
			
			if (!ns.contains(input)) {
				ns.add(input);
			}
		}
		
		System.out.println(ns.size());
	}
}
