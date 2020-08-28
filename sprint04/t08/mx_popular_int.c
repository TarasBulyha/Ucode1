//#include<stdio.h>

int mx_popular_int(const int *arr, int size) {
    int i, j, maxcount, maxelement, count;
    maxcount = 0;
    for(i = 0; i < size; i++){
        count = 1;
        for(j = i+1; j < size; j++){
            if(arr[j] == arr[i]){
                count++;
		if(count > maxcount){
                    maxcount = count;
                    maxelement = arr[j];
                }}
            }
        }
    return maxelement;
}
/* 
int main() {
    int arr[4] = {2, 2, 4, 4};
 
   printf("%d\n", mx_popular_int(arr, 4));
     
    return 0;
}
*/
