import java.io.*;
import java.util.*;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		
		int t = Integer.parseInt(br.readLine());
		
		if(t >= 1 && t <= 1000000) {
			for (int i = 0; i < t; i++) {
				StringTokenizer st = new StringTokenizer(br.readLine());
				
				bw.write("Case #" + (i+1) + ": " +(Integer.parseInt(st.nextToken()) + Integer.parseInt(st.nextToken())) + "\n");
			}
		}
		br.close();
		bw.flush();
		bw.close();
    }
}