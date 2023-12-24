#include <stdio.h>
#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
        printf("Pushed %d into the stack\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped %d from the stack\n", stack[top]);
        top--;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    pop();
    pop();
    pop();
    pop();  
    return 0;
}

// devkawsarkabir
// 672749
