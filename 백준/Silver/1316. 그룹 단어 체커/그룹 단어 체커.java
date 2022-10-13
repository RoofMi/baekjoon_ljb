import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int group_word = 0;

		int test = sc.nextInt();
		sc.nextLine();
		
		for (int t = 0; t < test; t++) {
			List <String> list = new ArrayList<>();
			
			String in = sc.nextLine();
			boolean check = true;
			
			for (int i = 0; i < in.length(); i++) {
				if (!list.contains(String.valueOf(in.charAt(i)))) {
					char h = in.charAt(i);
					while(i+1 < in.length() && in.charAt(i+1) == h) {
						i++;
					}
					
					list.add(String.valueOf(in.charAt(i)));
				}
				else {
					check = false;
				}
			}
			
			if (check) {
				group_word++;
			}
		}
		
		System.out.println(group_word);
	}
}