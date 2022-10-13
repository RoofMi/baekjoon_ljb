import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String input = sc.nextLine();
		
		int alpha_ct = 0;
		
		for (int i = 0; i < input.length(); i++) {
			if (input.charAt(i) == 'c' && i+1 < input.length()) {
				if (input.charAt(i+1) == '=') {
					i++;
				}
				else if (input.charAt(i+1) == '-') {
					i++;
				}
			}
			else if (input.charAt(i) == 'd' && i+1 < input.length()) {
				if (input.charAt(i+1) == '-') {
					i++;
				}
				else if (input.charAt(i+1) == 'z' && i+2 < input.length()) {
					if (input.charAt(i+2) == '=') {
						i+=2;
					}
				}
			}
			else if (input.charAt(i) == 'l' && i+1 < input.length()) {
				if (input.charAt(i+1) == 'j') {
					i++;
				}
			}	
			else if (input.charAt(i) == 'n' && i+1 < input.length()) {
				if (input.charAt(i+1) == 'j') {
					i++;
				}
			}
			else if (input.charAt(i) == 's' && i+1 < input.length()) {
				if (input.charAt(i+1) == '=') {
					i++;
				}
			}
			else if (input.charAt(i) == 'z' && i+1 < input.length()) {
				if (input.charAt(i+1) == '=') {
					i++;
				}
			}
			
			alpha_ct++;
		}
		
		System.out.println(alpha_ct);
	}
}