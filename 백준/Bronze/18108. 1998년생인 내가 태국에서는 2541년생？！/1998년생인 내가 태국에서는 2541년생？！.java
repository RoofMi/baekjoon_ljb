import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int y = scan.nextInt();
		
		if (y >= 1000 && y <= 30000) {
			y -= 543;
			
			System.out.println(y);
		}
    }
}