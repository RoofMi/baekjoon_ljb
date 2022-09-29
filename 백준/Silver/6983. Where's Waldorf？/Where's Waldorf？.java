import java.util.*;

public class Main {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		List <Integer> result_i = new ArrayList<>();
		List <Integer> result_j = new ArrayList<>();
		int n, i, j, h, y, wc, t;
		int foundWord = 0;
		
		int firstInput = scan.nextInt();
		scan.nextLine();
		
		for (n = 0; n < firstInput; n++) {
			h = scan.nextInt();
			y = scan.nextInt();
			scan.nextLine();
			
			String []input = new String[h];
			
			for (i = 0; i < h; i++) {
				input[i] = scan.nextLine();
			}
			
			wc = scan.nextInt();
			scan.nextLine();
			
			String []words = new String[wc];
			
			for (i = 0; i < wc; i++) {
				words[i] = scan.nextLine();
			}
			
			for (t = 0; t < words.length; t++) {
				for (i = 0; i < h; i++) {
					for (j = 0; j < y; j++) {
						if (find_match(input, words, i, j, h, y, t) == 1 && foundWord != 1) {
							foundWord = 1;
							result_i.add(i+1);
							result_j.add(j+1);
						}
					}
				}
				if (foundWord == 0) {
					result_i.add(h);
					result_j.add(y);
				}
				else {
					foundWord = 0;
				}
			}
			result_i.add(0);
			result_j.add(0);
		}
		
		for (i = 0; i < result_i.size() - 1; i++) {
			if(result_i.get(i) != 0 && result_j.get(i) != 0) {
				System.out.println(result_i.get(i) + " " + result_j.get(i));
			}
			else {
				System.out.println();
			}
		}
	}
	
	public static int find_match(String []input, String []words, int start_i, int start_j, int h, int y, int t) {
		int [] di = {-1 , -1, -1, 0, 1, 1, 1, 0};
		int [] dj = {-1, 0, 1, 1, 1, 0, -1, -1};
		
		int i, j, dir, wordIndex;
		
	    for (dir = 0; dir < 8; dir++) {
	        i = start_i;
	        j = start_j;
	        wordIndex = 0;
	        
	        while (i >= 0 && i < h && j >= 0 && j < y) {
	        	if (words[t].toLowerCase().charAt(wordIndex) == input[i].toLowerCase().charAt(j)) {
		        	i += di[dir];
		            j += dj[dir];
		            wordIndex++;
	        	}
	        	else {
	        		break;
	        	}
	        	if (wordIndex == words[t].length()) {
	        		return 1;
	        	}
	        }
	    }
	    return 0;
	}
}