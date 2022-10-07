import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		List <Integer>ns = new ArrayList<>();
		
		for (int i = 0; i < n; i++) {
			ns.add(sc.nextInt());
		}
		
		int max = Collections.max(ns);
		float result = 0;

		for (int i = 0; i < ns.size(); i++) {
			float temp = (float)ns.get(i) / (float)max * 100;
			
			result += (float)temp;
		}

		System.out.println(result /= n);
	}
}
