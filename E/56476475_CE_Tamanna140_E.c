#include <stdio.h>

int marks_summation(int marks[], int number_of_students, char gender) {
    int sum = 0;
    
    if (gender == 'b') {
        // Sum marks of boys: marks at even indices (0, 2, 4, ...)
        for (int i = 0; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    } else if (gender == 'g') {
        // Sum marks of girls: marks at odd indices (1, 3, 5, ...)
        for (int i = 1; i < number_of_students; i += 2) {
            sum += marks[i];
        }
    }
    
    return sum;
}

int main() {
    int number_of_students;
    scanf("%d", &number_of_students);
    
    int marks[number_of_students];
    
    // Read the marks for each student
    for (int i = 0; i < number_of_students; i++) {
        scanf("%d", &marks[i]);
    }
    
    char gender;
    scanf(" %c", &gender); // Read the gender character ('b' or 'g')
    
    // Call the marks_summation function and print the result
    int result = marks_summation(marks, number_of_students, gender);
    printf("%d\n", result);
    
    return 0;
}