#include "logic.h"

string order(int n, int m) {

	string result;
	for (int i = n; ;) {
		result += to_string(i) + " ";
		if (m > n) {
			i++;
		}
		else {
			i--;
		}
	}

	return result;
}