import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int result = 0;
		
		int n = sc.nextInt();
		
		for (int i = 1; i <= n; i++) {
			if (find_num(i)) {
				result++;
			}
		}
		
		System.out.println(result);
	}
	
	public static boolean find_num(int k) {
		String temp = String.valueOf(k);
		if (temp.length() < 3) {
			return true;
		}
		else {
			int d = Integer.parseInt(String.valueOf(temp.charAt(0))) - Integer.parseInt(String.valueOf(temp.charAt(1)));
			for (int i = 1; i < temp.length() - 1; i++) {
				if (d != Integer.parseInt(String.valueOf(temp.charAt(i))) - Integer.parseInt(String.valueOf(temp.charAt(i+1)))) {
					return false;
				}
			}
		}
		return true;
	}
}
