import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int []result = new int[4];
		int a = scan.nextInt();
		scan.nextLine();
		String b = scan.nextLine();
		
		result[0] = a * (b.charAt(2) - '0');
		result[1] = a * (b.charAt(1) - '0');
		result[2] = a * (b.charAt(0) - '0');
		result[3] = result[0] + Integer.parseInt((String.valueOf(result[1]) + "0")) + Integer.parseInt((String.valueOf(result[2]) + "00"));
		
		for (int i = 0; i < 4; i++) {
			System.out.println(result[i]);
		}
    }
}