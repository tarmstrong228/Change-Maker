#include <stdio.h>


void change(int input) {
	
	int bills[] = {1, 5, 10, 25, 100, 500, 1000, 2000, 5000, 10000};
	int output[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (int i = 9; i >= 0; i--) {
		while (input >= bills[i]) {
//			printf("bills at %d: %d\n", i, bills[i]);
			output[i]++;
			input -= bills[i];
//			printf("new input: %d\n", input);
		}

	}

	printf("count: %d Pennies, %d Nickles, %d Dimes, %d Quarters, %d One Dollar Bills, %d Five Dollar Bills, %d Ten Dollar Bills, %d Twenty Dollar Bills, %d Fifty Dollar Bills, %d One Hundred Dollar Bills\n", output[0], output[1], output[2], output[3], output[4], output[5], output[6], output[7], output[8], output[9]);
}


int main() {

	double input;

	printf("Input a price: \n");
	scanf("%lf", &input);
	input = input * 100;
	change(input);

	return 0;
}
