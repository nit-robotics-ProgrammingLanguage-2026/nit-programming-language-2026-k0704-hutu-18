#include <stdio.h>

int calculateSum(int number) {
    // static変数は関数が終了しても値が残る
    static int total = 0;

    // 前回までの合計に今回の数値を加える
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

