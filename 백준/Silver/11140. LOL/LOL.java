import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int n = scan.nextInt();
		scan.nextLine();
		
		if (n >= 0 && n <= 100) {
			for (int i = 0; i < n; i++) {		
				String input = scan.nextLine();
				
				if (input.length() <= 50) {
					if (input.contains("lol")) {
						System.out.println(0);
					}
					else {
						if (input.contains("ll") || input.contains("ol") || input.contains("lo")) {
							System.out.println(1);
						}
						else {
							if (input.contains("l")) {
								int index = input.indexOf("l");
								if (index+2 < input.length()) {
									if (input.charAt(index + 2) == 'l') {
										System.out.println(1);
									}
									else {
										System.out.println(2);
									}
								}
								else {
									System.out.println(2);
								}
							}
							else if (input.contains("o")) {
								System.out.println(2);
							}
							else {
								System.out.println(3);
							}
						}
					}
				}
			}
		}
	}
}