#include "logic.h"

string get_prime_numbers(int number) {
	if (number <= 1) {
		return "Error.";
	}

	string result = " ";

	for (int i = 2; i * i <= number; i++) {
		if (number % i == 0) {
			result += " ";
		}
		result += to_string(i);
	
	}

	return result;
}