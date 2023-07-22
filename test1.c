#include <stdio.h>
#include <string.h>

#define MAX_SIZE 256

int canSwapCharacters(char* s, char* goal) {
    int s_freq[MAX_SIZE] = {0};
    int goal_freq[MAX_SIZE] = {0};
    int s_len = strlen(s);
    int goal_len = strlen(goal);
    int i;

    if (s_len != goal_len) {
        return 0;
    }

    for (i = 0; i < s_len; i++) {
        s_freq[(int) s[i]]++;
        goal_freq[(int) goal[i]]++;
    }

    for (i = 0; i < MAX_SIZE; i++) {
        if (s_freq[i] != goal_freq[i]) {
            return 0;
        }
    }

    int num_diff = 0;
    for (i = 0; i < s_len; i++) {
        if (s[i] != goal[i]) {
            num_diff++;
        }
        if (num_diff > 2) {
            return 0;
        }
    }

    return num_diff == 2;
}

int main() {
    char s[] = "ab";
    char goal[] = "ba";
    if (canSwapCharacters(s, goal)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
