import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        
        st = new StringTokenizer(br.readLine());
        
        while(st.hasMoreTokens()) {
        	int a = Integer.parseInt(st.nextToken());
        	int b = Integer.parseInt(st.nextToken());
        	
        	if (a == 0 && b == 0) {
        		break;
        	}
        	else {
        		if (a > b) {
        			System.out.println("Yes");
        		}
        		else {
        			System.out.println("No");
        		}
        	}
        	
        	st = new StringTokenizer(br.readLine());
        }
    }
}
