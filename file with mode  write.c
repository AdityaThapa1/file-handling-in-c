#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *p;
p=fopen("readme.txt","a+");
if (p==NULL){
	printf("file is not created");
	exit(1);
}
else{
	printf("file is created");
}
fclose(p);
return 0;
}
