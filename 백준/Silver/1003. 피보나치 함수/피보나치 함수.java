import java.io.*;

public class Main {
	static StringBuilder sb = new StringBuilder();
	static int []memory = new int[41];
	
	public static void main(String[] args) throws Exception {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		memory[0] = 0;
		memory[1] = 1;
		memory[2] = 1;
		
		int test = Integer.parseInt(bf.readLine());

		for (int i = 0; i < test; i++) {
			int n = Integer.parseInt(bf.readLine());
			if (n >= 0 && n <= 40) {
				if (n == 0) {
					sb.append("1 0\n");
	            } else if (n == 1) {
	            	sb.append("0 1\n");
	            } else {
	            	fibonacci(n);
					
					sb.append(memory[n-1]).append(" ").append(memory[n]).append("\n");
	            }
			}
			else {
				System.exit(0);
			}
		}
		System.out.println(sb);
	}
	
	/**메모이제이션 기법 사용**/
	public static int fibonacci(int n) {
		if (n == 0) {
			return 0;
		}
		else if (n == 1) {
			return 1;
		}
		else {
			if (memory[n] != 0) {
				return memory[n];
			}
			else {
				return memory[n] = fibonacci(n-1) + fibonacci(n-2);
			}
		}
	}
}
