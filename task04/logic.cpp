#include "logic.h"

string order(int n, int m) {
	string result;
	for (int i = n; i <= m; i++) {
		result += to_string(i) + " ";
	}

	return result;
}