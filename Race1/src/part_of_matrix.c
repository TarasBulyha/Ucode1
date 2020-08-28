#include "part_of_matrix.h"

char mx_sign(char *s) {
	int i = 0;

	while(s[i])
	{
		if(s[i] == '+')
			return '+';
		if(s[i] == '-')
			return '-';
		if(s[i] == '*')
			return '*';
		if(s[i] == '/')
			return '/';
		i++;
	}

	return '+';
}

int mx_res(int num_1, int num_2, char operation) {
	if (operation == '+')
		return num_1 + num_2;
	if (operation == '-')
		return num_1 - num_2;
	if (operation == '*')
		return num_1 * num_2;
	if (operation == '/')
		return num_1 / num_2;
	return 0;
}


int mx_q_to_num(char *s) {
	int i = 0;
	int count = 0;
	int res = 1;

	while(s[i])
	{
		if(s[i] == '?')
			count++;
		i++;
	}

	if(count == 1)
		return 0;

	for (int j = 1; j < count; j++)
		res *= 10;

	return res;
}




int main(int argc, char **argv) {
	if (argc == 0)
		return 1;

	int num1;
	int num2;

	int q_n1 = 0;
	int q_n2 = 0;

	if (mx_atoi(argv[1]))
		num1 = mx_atoi(argv[1]);
	else {
		num1 = mx_q_to_num(argv[1]);
		q_n1++;
	}

	if (mx_atoi(argv[3]))
		num2 = mx_atoi(argv[3]);
	else {
		num2 = mx_q_to_num(argv[3]);
		q_n2++;
	}

	for(int i = 0; i < 10; i++) {
		mx_printint(num1);
		mx_printchar(' ');
		mx_printstr(argv[2]);
		mx_printchar(' ');
		mx_printint(num2);
		mx_printchar(' ');
		mx_printchar('=');
		mx_printchar(' ');
		mx_printint(mx_res(num1, num2, mx_sign(argv[2])));
		mx_printchar('\n');

		if (q_n1)
			num1++;
		if (q_n2)
			num2++;
	}
	return 0;
}
