import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		BigInteger a = BigInteger.valueOf(Integer.parseInt(st.nextToken()));
		BigInteger b = BigInteger.valueOf(Integer.parseInt(st.nextToken()));

		String result = String.valueOf(a.subtract(b)).replace("-", "");
		
		System.out.println(result);
	}
}