#include <stdio.h>

#include <stdio.h>

int calculateSum(int number) {
    static int total = 0;

    total = total + number;
    return total;
}

int main(void) {
    int input;
    int result = 0;

    scanf("%d", &input);

    if (input < 1 || input > 10) {
        printf("NG");
        return 0;
    }

    for (int count = 1; count <= input; count++) {
        result = calculateSum(count * 2);
    }

    printf("%d", result);

    return 0;
}

