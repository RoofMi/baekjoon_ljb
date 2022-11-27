import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine());
        
        System.out.println(fib1(n) + " " + fib2(n));
    }
    
    public static int fib1 (int n) {
    	if (n == 1 || n == 2) {
    		return 1;
    	}
    	else {
    		return (fib1(n - 1) + fib1(n - 2));
    	}
    }
    
    public static int fib2 (int n) {
    	int[] f = new int[n+1];
    	f[1] = 1;
    	f[2] = 1;
    	
    	for (int i = 3; i <= n; i++) {
    		f[i] = f[i - 1] + f[i - 2];
    	}
    	
    	return n - 2;
    }
}
