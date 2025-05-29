 #include <stdio.h>
void fibonacci(int limit) {
    int a = 0, b = 1, next = 0;
    printf("Fibonacci : %d %d ", a, b);
    next = a + b;
    while (next <= limit) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
}
int main() {
    int limit;
    scanf("%d", &limit);
    fibonacci(limit);
    return 0;
}
