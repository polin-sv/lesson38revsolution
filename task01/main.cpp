#include "logic.h"

int main() {
	int n;
	int d;

	cout << "Input number of likes:";
	cin >> n;
	cout << "Input number of days:";
	cin >> d;

	cout << result_likes(n, d);

	return 0;
}