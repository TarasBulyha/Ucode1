int mx_strlen(const char *s);
int mx_printstr(const char *s);


void mx_is_positive(int a){
	if (a>0)
	mx_printstr("Positive");
	else if (a<0)
	mx_printstr("Negative");
	else
	mx_printstr("zero");
}
/*
int main(){
 mx_is_positive(0);
}
*/
