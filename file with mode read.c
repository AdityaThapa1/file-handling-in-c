#include<stdio.h>
#include<stdlib.h>
int main(){
	char str[50];
FILE *p;
p=fopen("readme.txt","r");
if (p==NULL){
	printf("file is not created");
	exit(1);
}
else{
	fgets(str,50,p);
	puts(str);
}
fclose(p);
return 0;
}
