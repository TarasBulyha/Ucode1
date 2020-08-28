void mx_printint(int c);
void mx_printchar(char c);
void mx_print_arr_int(const int *arr, int size)
{
for (int i = 0;i < size; i++){ 
mx_printint(arr[i]);
mx_printchar('\n');
}
}
/*
int main() {
const int arr[3] = {1,2,3};
mx_print_arr_int(arr, 3);
}
*/


