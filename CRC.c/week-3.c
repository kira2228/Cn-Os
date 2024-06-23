#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // for sleep function
#include <time.h>   // for time function

int main() {
    int i, j, noframes, x, x1 = 10, x2;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number of frames between 1 and 25 for the simulation
    noframes = rand() % 25 + 1;

    i = 1; // Frame number to send
    j = 1; // Frame number for acknowledgment

    printf("\nNumber of frames: %d\n", noframes);

    while (noframes > 0) {
        printf("Sending frame %d\n", i);
        srand(x1++); // Update the seed to get a new random value
        x = rand() % 10;

        if (x % 2 == 0) {
            // Simulate a random delay for even x values
            for (x2 = 1; x2 < 2; x2++) {
                printf("Waiting for %d second\n", x2);
                sleep(x2);
            }
            printf("Resending frame %d\n", i);
            srand(x1++); // Update the seed again for the resend
            x = rand() % 10;
        }

        printf("Acknowledgment received for frame %d\n", j);
        noframes -= 1; // Decrement the number of frames left to send
        i++; // Increment frame number to send
        j++; // Increment acknowledgment number
    }

    printf("End of Stop-and-Wait protocol\n");

    return 0;
}
