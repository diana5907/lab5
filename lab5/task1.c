#include <stdio.h>

int main() {
    int n, x;
    printf("Введіть розмір масиву n: ");
    scanf("%d", &n);

    int a[n];
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Введіть число x: ");
    scanf("%d", &x);

    int sum = 0;
    for (int i = 0; i < x; i++) {
        sum += a[i] * a[i];  // Додаємо квадрат кожного елемента до суми
    }

    printf("Сума квадратів перших %d елементів масиву: %d\n", x, sum);

    return 0;
}