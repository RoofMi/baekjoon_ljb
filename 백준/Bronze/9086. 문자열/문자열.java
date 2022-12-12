import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        for (int i = 0 ; i < t ; i++) {
            
            String str = sc.next();

            System.out.println(String.valueOf(str.charAt(0)) + String.valueOf(str.charAt(str.length()-1)));
        }
    }
}