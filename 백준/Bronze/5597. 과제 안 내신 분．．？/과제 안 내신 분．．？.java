import java.io.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		boolean[] rs = new boolean[30];
		
		for (int i = 0; i < 30; i++) {
			rs[i] = false;
		}
		
		for (int i = 0; i < 28; i++) {
			int n = Integer.parseInt(br.readLine());
			
			rs[n-1] = true;
		}
		
		for (int i = 0; i < 30; i++) {
			if (rs[i] == false) {
				System.out.println(i+1);
			}
		}
		
		
	}
}