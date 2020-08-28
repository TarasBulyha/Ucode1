//#include <stdio.h>
void mx_ref_pointer(int i,int ******ptr)
{
    ******ptr = i;
}
/*
int main()
{
    int ptr;
    int *ptr1 = &ptr;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
 
    mx_ref_pointer(5, &ptr5);
 
    printf("%d\n", ptr);
    return 0;
}
*/
