import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();				// 테스트 케이스
		
		for (int n = 0; n < t; n++) {
			int k = sc.nextInt();
			String input = sc.nextLine().replaceAll(" ", "");
			
			for (int i = 0; i < input.length(); i++) {
				for (int j = 0; j < k; j++) {
					System.out.print(input.charAt(i));
				}
			}
			System.out.println();
		}
	}
}
