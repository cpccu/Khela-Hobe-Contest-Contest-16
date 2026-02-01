#include <stdio.h>

int main() {
    int free_limit = 30; // Free duration in minutes
    int lecture_duration;

    // Input: duration of the lecture
    printf("Enter the duration of the lecture in minutes: ");
    scanf("%d", &lecture_duration);

    // Check if a subscription is needed
    if (lecture_duration > free_limit) {
        printf("Chef needs to buy the subscription.\n");
    } else {
        printf("Chef does not need to buy the subscription.\n");
    }

    return 0;
}