#include <stdio.h>

#define MAX_INPUTS 100

int main() {
    int num_inputs;
    printf("Enter the number of inputs: ");
    scanf("%d", &num_inputs);

    int inputs[MAX_INPUTS];
    for (int i = 0; i < num_inputs; i++) {
        printf("Enter input #%d: ", i + 1);
        scanf("%d", &inputs[i]);
    }

    int combined_binary[8] = {0};

    for (int i = 0; i < num_inputs; i++) {
        int current_number = inputs[i];
        int binary_digits[8] = {0};

        for (int j = 7; j >= 0; j--) {
            binary_digits[j] = current_number % 2;
            current_number /= 2;
        }

        for (int j = 0; j < 8; j++) {
            combined_binary[j] = (combined_binary[j] + binary_digits[j]) % 2;
        }
    }

    printf("Output: ");
    for (int i = 0; i < 8; i++) {
        printf("%d", combined_binary[i]);
    }
    printf("\n");

    return 0;
}
