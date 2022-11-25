import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        int[] list = new int[N + 1];
        list[0] = 0;
        list[1] = 0;

        for (int i = 2; i < N + 1; i++) {
            list[i] = list[i - 1] + 1;
            
            if (i % 3 == 0) {
                list[i] = Math.min(list[i], list[i / 3] + 1);
            }
            
            if (i % 2 == 0) {
                list[i] = Math.min(list[i], list[i / 2] + 1);
            }
        }

        System.out.println(list[N]);
    }
}