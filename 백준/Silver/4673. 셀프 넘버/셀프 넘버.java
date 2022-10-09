import java.util.*;

public class Main {
	static List <String>list = new ArrayList<>();
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		for (int i = 1; i <= 10000; i++) {
			find_self(String.valueOf(i));
		}
		
		for (int i = 1; i <=10000; i++) {
			if (!list.contains(String.valueOf(i))) {
				System.out.print(i + " ");
			}
		}
	}
	
	public static void find_self(String n) {
		int temp = Integer.parseInt(n);
		
		for (int i = 0; i < n.length(); i++) {
			temp += Integer.parseInt(String.valueOf(n.charAt(i)));
		}
		
		if (!list.contains(String.valueOf(temp)) && temp <= 10000) {
			list.add(String.valueOf(temp));
		}
	}
}
