static char *mx_strcpy(char *dst,const char *src)
{
int i = 0;
while (src[i]){
dst[i] = src[i];
i++;
}
dst[i] = '\0';
return dst;
}
int mx_strcmp(const char *s1, const char *s2);

int mx_selection_sort(char **arr, int size){
int i, j, min_idx; 
char  minStr; 
    for (i = 0; i < size-1; i++) 
    { 
        int min_idx = i; 
        mx_strcpy(minStr, arr[i]); 
        for (j = i+1; j < size; j++) 
        { 
            if (mx_strcmp(minStr, arr[j]) > 0) 
            { 
                mx_strcpy(minStr, arr[j]); 
                min_idx = j; 
            } 
        } 
        if (min_idx != i) 
        { 
            char temp; 
            mx_strcpy(temp, arr[i]); 
            mx_strcpy(arr[i], arr[min_idx]); 
            mx_strcpy(arr[min_idx], temp); 
        } 
    } 
} 
       int main() 
{ 
    char arr[][MAX_LEN] = {"GeeksforGeeks", "Practice.GeeksforGeeks", 
                                                    "GeeksQuiz"}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int i; 
   
    printf("Given array is\n"); 
    for (i = 0; i < n; i++) 
        printf("%d: %s \n", i, arr[i]); 
   
    selectionSort(arr, n); 
   
    printf("\nSorted array is\n"); 
    for (i = 0; i < n; i++) 
        printf("%d: %s \n", i, arr[i]); 
   
    return 0; 
} 
              