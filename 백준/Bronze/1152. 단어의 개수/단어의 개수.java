import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
			
		String []input = sc.nextLine().split(" ");
		
		if (input.length == 0) {
			System.out.println("0");
		}
		else if (input[0] != ""){
			System.out.println(input.length);
		}
		else {
			System.out.println(input.length-1);
		}
	}
}