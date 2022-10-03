import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner scan = new Scanner(System.in);
		int []dice = new int[3];
		int max = 0;
		
		for (int i = 0; i < 3; i++) {
			dice[i] = scan.nextInt();
		}
		
		if (dice[0] == dice[1]) {
			if (dice[0] == dice[2]) {
				System.out.println(10000 + (dice[0] * 1000));
			}
			else {
				System.out.println(1000 + (dice[0] * 100));
			}
		}
		else if (dice[1] == dice[2]) {
			System.out.println(1000 + (dice[1] * 100));
		}
		else if (dice[0] == dice[2]) {
			System.out.println(1000 + (dice[0] * 100));
		}
		else {
			for (int i = 0; i < 3; i++) {
				if (max < dice[i]) {
					max = dice[i];
				}
			}
			System.out.println(max * 100);
		}
	}
}
