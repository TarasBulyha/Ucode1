static void right_rotate_byOne(int arr[], int size) 
{ 
    int temp = arr[0], i; 
    for (i = 0; i < size - 1; i++) 
        arr[i] = arr[i + 1]; 
    arr[i] = temp; 
  
}
void mx_arr_rotate(int arr[], int size, int shift) 
{ 
    int i; 
    for (i = 0; i < shift ; i++) 
        right_rotate_byOne(arr, size); 
} 

// #include <stdio.h>     
// void printArray(int arr[], int size) 
// { 
//     int i; 
//     for (i = 0; i < size; i++) 
//         printf("%d ", arr[i]); 
// } 
  
// int main() 
// { 
//     int arr[] = { 1, 2, 3, 4, 5}; 
//     mx_arr_rotate(arr, 5, 3); 
//     printArray(arr, 5); 
//     return 0; 
// } 
