import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int dr = sc.nextInt();
		int i = 1;
		
		while(true) {
			if ((3 * (i * i)) - (3 * i) + 1 >= dr) {
				break;
			}
			i++;
		}
		
		System.out.println(i);
	}
}
