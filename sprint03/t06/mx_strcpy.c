//#include <stdio.h>

char *mx_(char *dst,const char *src)
{
int i = 0;
while (src[i]){
dst[i] = src[i];
i++;
}
dst[i] = '\0';
return dst;
}
/*
int main(){
char dst[] = "asREssasdasS";
const char src[] = "reQWCGS";
printf("%s\n",mx_(dst,src));


}
*/
