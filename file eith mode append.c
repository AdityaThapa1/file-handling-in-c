#include<stdio.h>
#include<stdlib.h>
int main(){
	char str[50];
FILE *p;
p=fopen("readme.txt","a");
if (p==NULL){
	printf("file is not created");
	exit(1);
}
else{
	printf("file is opened");
}
fputs("hii",p);



fclose(p);
return 0;
}
