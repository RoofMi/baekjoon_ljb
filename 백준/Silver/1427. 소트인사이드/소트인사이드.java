import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String tmp = br.readLine();
        ArrayList<Integer> sort = new ArrayList<>();

        for (int i = 0; i < tmp.length(); i++) {
            sort.add(Integer.parseInt(String.valueOf(tmp.charAt(i))));
        }

        Collections.sort(sort, Collections.reverseOrder());

        for (int i = 0; i < sort.size(); i++) {
            System.out.print(sort.get(i));
        }
    }
}