//#include <stdio.h>

void mx_deref_pointer(char ******str)
{
    static char msg[] = "Follow the white rabbit";
    *****str = msg;
}
/*
int main()
{
    char *ptr1 = NULL;
    char **ptr2 = &ptr1;
    char ***ptr3 = &ptr2;
    char ****ptr4 = &ptr3;
    char *****ptr5 = &ptr4;
    
    mx_deref_pointer(&ptr5);

    puts(ptr1);
    return 0;
}
*/
