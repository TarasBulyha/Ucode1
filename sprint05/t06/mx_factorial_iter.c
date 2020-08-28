#include <stdio.h>
int mx_factorial_iter(int n){
    if (n < 1)
		return 0;
    int f = 1;
        for (int i = 1; i <= n; i++){
        f = f * i;
        }
        if (f > 2147483647)
        return 0;
        else
        return f;
    
}

// int main()
// {
// 	int n = 500;
// 	printf("%d\n", mx_factorial_iter(n));

// }
