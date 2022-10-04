import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int t = scan.nextInt();
		scan.nextLine();
		
		/**t의 입력만큼 반복(테스트케이스)**/
		for (int i = 0; i < t; i++) {
			String input = scan.nextLine();
			int check = 0;
			
			if (input.length() >= 2 && input.length() <= 50) {		// input으로 받은 스트링의 길이가 2이상 50 이하일때 실행
				for (int j = 0; j < input.length(); j++) {
					if (input.charAt(j) == '(') {					// '(' 괄호가 나오면 check값을 올려준다.
						check++;
					}
					else if (input.charAt(j) == ')') {				// ')' 괄호가 나오면 check값을 줄여주는데,
						check--;									
						if (check < 0) {							// 만약 check가 0, 즉 시작괄호가 없는 상태에서 나온다면 이미 실패한 경우이므로 break한다.
							break;
						}
					}
				}
				if (check == 0) {									// check가 0이면 모든 경우 통과, 아니면 실패
					System.out.println("YES");
				}
				else {
					System.out.println("NO");
				}
			}
		}
    }	
}