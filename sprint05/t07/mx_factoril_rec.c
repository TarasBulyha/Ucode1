int mx_factorial_rec(int n)
{
	if (n < 1)
		return 0;
        
        int f = n * mx_factorial_rec(n - 1);
	if (f > 2147483647)
        return 0;
    else
    return f;

}

#include <stdio.h>

// int main()
// {
// 	int n = -5;
// 	printf("%d\n", mx_factorial_rec(n));

// 	return 0;
// }