#include <stdio.h>

int main() {
    int i, sn, st[20];
    printf("\nHow many stations: ");
    scanf("%d", &sn);
    char op;
    do {
        printf("\nENTER STATUS OF STATIONS\n");
        for (i = 0; i < sn; i++) {
            printf("Enter status of station %d: ", i + 1);
            scanf("%d", &st[i]);
        }
        for (i = 0; i < sn; i++) {
            if (st[i] == 1) {
                printf("Station %d is ready to transmit\n", i + 1);
            }
        }
        printf("Repeat? Press Y: ");
        scanf(" %c", &op);
    } while (op == 'y' || op == 'Y');

    return 0;
}
