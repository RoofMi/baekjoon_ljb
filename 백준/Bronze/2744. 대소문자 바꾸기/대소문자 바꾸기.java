import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        String str = br.readLine();
        
        char[] ch = str.toCharArray();
        
        for(int i = 0; i < ch.length; i++) {
        	if(65 <= ch[i] && ch[i] <= 90) {
        		ch[i] = (char) (ch[i] + 32);
        	}
        	else if(97 <= ch[i] && ch[i] <= 122) {
        		ch[i] = (char) (ch[i] - 32);
        	}
        }
        
        System.out.println(ch);
    }
}
