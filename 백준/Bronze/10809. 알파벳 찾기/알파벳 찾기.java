import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int []alpha = new int[26];
		
		for (int i = 0; i < 26; i++) {
			alpha[i] = -1;
		}
		
		String input = sc.nextLine();
		
		for (int i = 0; i < input.length(); i++) {
			char ch = input.charAt(i);
			
			if (alpha[ch - 'a'] == -1) {
				alpha[ch - 'a'] = i;
			}
		}
		
		for (int i = 0; i < alpha.length - 1; i++) {
			System.out.print(alpha[i] + " ");
		}
		System.out.println(alpha[25]);
	}
}
