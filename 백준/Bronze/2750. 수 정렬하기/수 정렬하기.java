import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		List <Integer> list = new ArrayList<>();
		
		int t = sc.nextInt();
		
		for (int i = 0; i < t; i++) {
			list.add(sc.nextInt());
		}
		
		Collections.sort(list);
		
		for (int i = 0; i < t; i++) {
			System.out.println(list.get(i));
		}
	}
}
