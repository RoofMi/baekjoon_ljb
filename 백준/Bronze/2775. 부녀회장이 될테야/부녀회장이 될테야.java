import java.util.*;

public class Main {
	static int[] floor;
	static int[] exFloor;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		for (int i = 0; i < t; i++) {
			int k = sc.nextInt();
			int n = sc.nextInt();
			
			floor = new int[n];
			exFloor = new int[n];
			
			cal(k, n);
		}
	}
	
	public static void cal(int k, int n) {
		for (int i = 0; i < n; i++) {
			exFloor[i] = i + 1;					// 0층의 1번방부터 n번방까지 값 채우기
		}
		floor[0] = 1;							// 1층의 1번방은 1
		
		for (int i = 0; i < k; i++) {
			for (int j = 1; j < n; j++) {
				floor[j] = 	floor[j-1] + exFloor[j];					
			}
			
			exFloor = floor;
			floor = new int[n];
			floor[0] = 1;
		}
		
		System.out.println(exFloor[n - 1]);
	}
}