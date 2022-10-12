import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String []nums = sc.nextLine().split(" ");
		
		String temp = "";
		for (int i = 2; i >= 0; i--) {
			temp += nums[0].charAt(i);
		}
		int a = Integer.parseInt(temp);
		
		temp = "";
		for (int i = 2; i >= 0; i--) {
			temp += nums[1].charAt(i);
		}
		int b = Integer.parseInt(temp);

		System.out.println(a > b ? a : b);
	}
}