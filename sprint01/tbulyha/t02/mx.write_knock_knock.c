
 #include <unistd.h>
 #include <string.h>
/*
 void mx_write_knock_knock(void);
 char textt[] = "Follow the white rabbit.\nKnock, knock, Neo.\n";
 int main(void) {	
	 mx_write_knock_knock();
 }
*/
 void mx_write_knock_knock(void){
        write(1,textt,strlen(textt));
	char textt[] = "Follow the white rabbit.\nKnock, knock, Neo.\n";
}   

