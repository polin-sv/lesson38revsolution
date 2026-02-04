#include "logic.h"

string odd_numbers(int n, int m) {
	n = n > m ? m : n;
	m = m > n ? m : n;

	string result = "";

	for (int i = m; i >= n; i--) {
		result += i % 2 == 1 ? to_string(i) + " " : " ";
	}
	return result;
}