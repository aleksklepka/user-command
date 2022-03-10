#include "commands.h"

int commIndex(std::string arr[], std::string ans) {
	int i = 0;
	do {
		if (ans == arr[i])
			return i;
		else
			i++;
	} while (i < COMM_N);
}