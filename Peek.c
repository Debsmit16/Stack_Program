#include <stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

int peek() {
    if (top == -1) {
        printf("Stack is empty. Cannot peek.\n");
        return -1; // Signifies an error
    } else {
        return stack[top];
    }
}

int main() {
    push(5);
    push(10);
    int topValue = peek();
    if (topValue != -1) {
        printf("Top element of the stack: %d\n", topValue);
    }
    return 0;
}
