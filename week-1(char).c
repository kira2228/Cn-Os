#include <stdio.h>
#include<string.h>

int main() {
    char a[100],b[100],c[100];
    int n,i=0,j=0,k=0;
    printf("Enter the data:");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if((a[i]=='d' && a[i+1]=='l' && a[i+2]=='e') || (a[i]=='e' && a[i+1]=='s' && a[i+2]=='c'))
        {
            c[k++]='e';
            c[k++]='s';
            c[k++]='c';
        }
        c[k++]=a[i];
    }
    c[k++]='\0';
    b[k++]='\0';
    printf("%s\n",b);
    printf("DLESTX");
    printf("%s",c);
    printf("DLEETX");
}
