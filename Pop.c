#include <stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

int pop() {
    if (top == -1) {
        printf("Stack Underflow. Cannot pop.\n");
        return -1; // Signifies an error
    } else {
        int value = stack[top];
        top--;
        return value;
    }
}

int main() {
    push(5);
    push(10);
    int poppedValue = pop();
    if (poppedValue != -1) {
        printf("%d popped from the stack.\n", poppedValue);
    }
    return 0;
}
