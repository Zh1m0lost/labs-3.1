
#include <stdio.h>
int main() {
    int N;   
    printf("Какой ты номер в списке?: ");
    scanf("%d", &N);

    int result = ((N - 1) % 6) + 1;
    printf("Решай вариант: %d", result);

    return 0;
}