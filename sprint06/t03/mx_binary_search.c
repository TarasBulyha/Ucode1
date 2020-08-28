int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int left = 0;
	int right = size - 1;
	while(left <= right){
		*count = *count+1;
		int mid = (left + right)/2;
		if(mx_strcmp(arr[mid],s) > 0){
			right = mid - 1;
		}
		else if(mx_strcmp(arr[mid],s) < 0){
			left = mid + 1;
		}
		else
			return mid;
	}
	*count = 0;
	return -1;
}
// #include <stdio.h>
// int main() {
// 	int count = 0;
// 	char *arr[]={"222" , "Abcd", "aBc", "ab", "az", "z"};
// 	char s[]={"ab"};
// 	printf("%d\n", mx_binary_search(arr,6, s, &count));
// 	printf("count = %d\n", count);
// }