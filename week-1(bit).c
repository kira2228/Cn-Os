#include <stdio.h>
int main(){
    char input[100];
    scanf("%s",input);
    int inputlength = sizeof(input)-1;
    char output[2*inputlength];
    int count=0,j=0;
    for(int i=0;i<inputlength;i++){
        if(input[i]=='1'){
            count++;
        }else{
            count=0;
        }
        output[j++]=input[i];
        if(count==5){
            output[j++]='0';
            count=0;
        }
    }
    output[j]='\0';
    printf("Input : %s\n",input);
    printf("Output after bit stuffing : %s\n",output);
}
