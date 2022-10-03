import java.util.*;

public class Main {
	public static void main(String[] args) throws Exception {
		Scanner scan = new Scanner(System.in);
		
		int h = scan.nextInt();
		int m = scan.nextInt();
		int t = scan.nextInt();
		
		if ((h >= 0 && h <= 23) && (m >= 0 && m <= 59) && (t >= 0 && t <= 1000)) {
			if (h + (t / 60) > 23) {
				h = (h + (t / 60)) - 24;
				m += t % 60;
				if (m >= 60) {
					h++;
					m -= 60;
					
					if (h == 24) {
						h = 0;
					}
				}
			}
			else {
				h += t / 60;
				m += t % 60;
				if (m >= 60) {
					h++;
					m -= 60;
					
					if (h == 24) {
						h = 0;
					}
				}
			}
		}
		System.out.println(h + " " + m);
	}
}
