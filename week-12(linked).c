#include<stdio.h>

struct file {
    char frame[10];
    int start, size, block[10];
} f[10];

int main() {
    int i, j, n;
    printf("Linked file allocation algorithm\n\n");
    printf("Enter number of files: ");
    scanf("%d", &n);
   
    for(i = 0; i < n; i++) {
        printf("\nEnter file name: ");
        scanf("%s", f[i].frame);
        printf("Enter the starting block: ");
        scanf("%d", &f[i].start);
        printf("Enter the size of the file: ");
        scanf("%d", &f[i].size);
        f[i].block[0] = f[i].start;

        printf("Enter block numbers: ");
        for(j = 1; j < f[i].size; j++) {
            scanf("%d", &f[i].block[j]);
        }
    }

    printf("\nFile\tstart\tsize\tblock\n");
    for(i = 0; i < n; i++) {
        printf("%s\t%d\t\t%d\t\t", f[i].frame, f[i].start, f[i].size);
        for(j = 0; j < f[i].size; j++) {
            if (j < f[i].size - 1)
                printf("%d--->", f[i].block[j]);
            else
                printf("%d", f[i].block[j]);
        }
        printf("\n");
    }
}
