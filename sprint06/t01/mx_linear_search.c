int mx_strcmp(const char *s1, const char *s2);
int mx_linear_search(char **arr, const char *s){
    int i;
    while(arr[i]){
        int x = mx_strcmp(arr[i],s);
        if ( x == 0)
        return i;
        i++;
    }
    return -1;
}

// #include <stdio.h>
// int main(){

//     char *arr[] = {"222","aBc", "ab", "az", "z", NULL};
//     printf("%d\n",mx_linear_search(arr, "z"));
        
//     return 0; 
// } 