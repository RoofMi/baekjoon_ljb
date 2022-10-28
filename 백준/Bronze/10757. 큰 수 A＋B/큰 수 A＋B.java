import java.math.*;
import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		BigInteger n = sc.nextBigInteger();
		BigInteger n2 = sc.nextBigInteger();
		
		n = n.add(n2);
		
		System.out.println(n);
	}
}
