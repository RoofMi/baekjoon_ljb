#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	long ans1 = 0, ans2 = 0, ans3 = 0;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		ans1 = ans1 + i;
		ans3 = ans3 + pow(i, 3);
	}

	ans2 = pow(ans1, 2);

	cout << ans1 << '\n' << ans2 << '\n' << ans3 << '\n';
    
	return 0;
}