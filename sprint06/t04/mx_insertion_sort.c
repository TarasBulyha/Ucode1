int mx_strlen(const char *s);
int mx_insertion_sort(char **arr, int size){
 int j = 0;
 int count = 0; 
 char *key;
    for (int i = 1; i < size; i++) { 
        j = i;

    while (mx_strlen(arr[j]) < mx_strlen(arr[j-1]) && j > 0)
    {
    key = arr[j-1];
    arr[j-1] = arr[j];
    arr[j] = key;
    count++;
    j--;
    }
    }
    return count;
    }
#include <stdio.h>
int main() 
{ 
    char *arr[] = {"12aaaaaaaaaa", "11aaaaaaaaa", "13aaaaaaaaaaa", "5aaaa", "6aaaaa"};
   printf("%d\n",mx_insertion_sort(arr, 5) );
   
    
} 
