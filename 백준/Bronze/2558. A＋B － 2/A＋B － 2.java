import java.util.*;

public class Main {
	public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        int a = scan.nextInt();
        scan.nextLine();
        int b = scan.nextInt();
        
        if (a > 0 && b < 10) {
            System.out.println(a+b);
        }
    }
}