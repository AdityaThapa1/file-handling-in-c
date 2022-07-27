#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp =fopen("ad.txt","r");
    if(fp==NULL)
    {
        printf("Error in opening file\n");
        return 0;
    }
    //Initially the file pointer points to the starting of the file.
    printf("Position of the pointer : %ld\n",ftell(fp));
    
    char ch;
    while(fread(&ch,sizeof(ch),1,fp)==1)
    {
        //Here we traverse the entire file and print it's contents until we reach it's end.
        printf("%c",ch);
    }
    printf("\n");
    printf("Position of the pointer : %ld\n",ftell(fp));
    
    //Below rewind() is going to bring it back to it's original position.
    rewind(fp);
    printf("Position of the pointer : %ld\n",ftell(fp));
    
    fclose(fp);
    return 0;
}
