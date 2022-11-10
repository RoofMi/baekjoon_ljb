import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		List <Integer> list = new ArrayList<>();
		
		int n = sc.nextInt();
		int r = sc.nextInt();
		for (int i = 0; i < n; i++) {
			list.add(sc.nextInt());
		}
		
		Collections.sort(list);
		
		System.out.println(list.get(n - r));
	}
}