import java.util.*;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        
        for (int i = 0; i < n; i++) {
        	int a = scan.nextInt();
            int b = scan.nextInt();
            
            if (a > 0 && b < 10) {
                System.out.println(a+b);
            }
        }
        
    }
}