import java.io.*;

public class Main {
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int []result = new int[10];
		int sum = 1;
		
		for (int i = 0; i < 10; i++) {
			result[i] = 0;
		}
		
		for (int i = 0; i < 3; i++) {
			sum *= Integer.parseInt(br.readLine());
		}

		for (int i = 0; i < String.valueOf(sum).length(); i++) {
			result[Integer.parseInt(String.valueOf(String.valueOf(sum).charAt(i)))] += 1;
		}
		
		for (int i = 0; i < 10; i++) {
			System.out.println(result[i]);
		}
	}
}