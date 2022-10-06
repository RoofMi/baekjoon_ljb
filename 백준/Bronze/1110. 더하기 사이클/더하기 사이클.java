import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String goal = sc.nextLine();
		int count = 0;
		if (goal.length() == 1) {
			goal = "0" + goal.charAt(0);
		}
		
		if (Integer.parseInt(goal) <= 99 && Integer.parseInt(goal) >= 0) {
			String goal_temp = goal;
			String a, b, c;
			while (true) {
				if (goal_temp.length() == 1) {
					a = "0";
					b = String.valueOf(goal_temp.charAt(0));
				}
				else {
					a = String.valueOf(goal_temp.charAt(0));
					b = String.valueOf(goal_temp.charAt(1));
				}
				c = String.valueOf(Integer.parseInt(String.valueOf(a)) + Integer.parseInt(String.valueOf(b)));
				
				if (c.length() > 1) {
					goal_temp = b + c.charAt(c.length() - 1);
				}
				else {
					goal_temp = b+c;
				}
				count++;
				
				if (goal.equals(goal_temp)) {
					System.out.println(count);
					break;
				}
			}
		}
	}
}