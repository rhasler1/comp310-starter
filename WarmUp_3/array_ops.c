#include <stdio.h>

int main(int argc, char *argv[])
{
    int numbers[5] = {1,2,3,4,5};
    int sum = 0;
    double average;
    int size_of_array = sizeof(numbers) / sizeof(numbers[0]);
    for (int i = 0; i < size_of_array; i++) {
        sum += numbers[i];
    }
    average = sum / size_of_array;
    printf("Sum: %d\n", sum);
    printf("Average: %lf\n", average);
}