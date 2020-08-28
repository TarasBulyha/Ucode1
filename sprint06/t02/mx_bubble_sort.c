int mx_strcmp(const char *s1, const char *s2); 
static void swap(char *xp, char *yp) 
{ 
    char temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
int mx_bubble_sort(char **arr, int size) 
{ 
   int i, j; 
   for (i = 0; i < size-1; i++)       
     
       for (j = 0; j < size - i - 1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(arr[j], arr[j+1]); 
    return i;
} 
// #include <stdio.h>   
// int main() 
// { 
//     char *arr[] = {"abc", "xyz", "ghi", "def"};
//     printf("%d\n",mx_bubble_sort(arr,4)); 
    
//     return 0; 
// } 