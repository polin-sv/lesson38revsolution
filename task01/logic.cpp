#include "logic.h"

string result_likes(int n, int d) {
	if (d < 0) {
		return "error";
	}

	string result;

	for (int i = 1; i <= d; i++) {
		int likes_per_day = i * n;
		result += "day " + to_string(i) + ": " 
			+ to_string(likes_per_day) + " likes " + "\n";
		
	}

	return result;
}