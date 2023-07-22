#include <stdio.h>

void simulateDays(int cells[], int size, int days) {
    int current[size];
    int next[size];

    for (int i = 0; i < size; i++) {
        current[i] = cells[i];
    }

    for (int d = 0; d < days; d++) {
        for (int i = 0; i < size; i++) {
            if (i == 0 || i == size - 1) {
                next[i] = 0; // Assuming the two cells on the ends are always inactive
            } else if (current[i - 1] == current[i + 1]) {
                next[i] = 0; // Both neighbors are the same, so the cell becomes inactive
            } else {
                next[i] = 1; // Different neighbors, so the cell becomes active
            }
        }

        // Update the current state for the next iteration
        for (int i = 0; i < size; i++) {
            current[i] = next[i];
        }
    }

    printf("State after %d days:\n", days);
    for (int i = 0; i < size; i++) {
        printf("%d ", current[i]);
    }
    printf("\n");
}

int main() {
    int size = 8;
    int cells[size];
    int days;

    printf("Enter the initial state of the cells (comma-separated values):\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &cells[i]);
    }

    printf("Enter the number of days to simulate:\n");
    scanf("%d", &days);

    printf("Initial State:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", cells[i]);
    }
    printf("\n");

    simulateDays(cells, size, days);

    return 0;
}
