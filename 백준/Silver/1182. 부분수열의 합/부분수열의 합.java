import java.io.*;
import java.util.*;

public class Main {
		static List<Integer> list = new ArrayList<>();
		static int[] subset;
		static int target;
		static int result;
		
		public static void solve(int num_idx, int subset_idx, int subset_size) {		
			if (subset_idx == subset_size) {
				
				int sum = 0;
				
				for (int i = 0; i < subset_size; i++) {
					sum += subset[i];
				}
				
				if (sum == target) {
					result++;
				}
				
				return;
			}
			for (int i = num_idx; i < list.size(); i++) {
				subset[subset_idx] = list.get(i);
				
				solve(i + 1, subset_idx + 1, subset_size);
			}
		}

		public static void main(String[] args) throws IOException {
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			StringTokenizer st = new StringTokenizer(br.readLine());
			
			int n = Integer.parseInt(st.nextToken());
			target = Integer.parseInt(st.nextToken());
			result = 0;
			
			st = new StringTokenizer(br.readLine());
			
			for (int i = 0; i < n; i++) {
				list.add(Integer.parseInt(st.nextToken()));
			}
			
			for (int i = 1; i <= list.size(); i++) {
				subset = new int[i];

				solve(0, 0, i);
			}

			System.out.println(result);
		}
	}