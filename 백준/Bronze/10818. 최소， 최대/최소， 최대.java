import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		List <Integer>ns = new ArrayList<>();
		
		int n = sc.nextInt();
		
		for (int i = 0; i < n; i++) {
			ns.add(sc.nextInt());
		}
		
		System.out.println(Collections.min(ns) + " " + Collections.max(ns));
	}
}
