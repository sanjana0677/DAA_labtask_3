#include <stdio.h>
#define MAX 100
typedef struct stack {
    int arr[MAX];
    int top;
} Stack;
void init(Stack* s) {
    s->top = -1;
}
int isEmpty(Stack* s) {
    return (s->top == -1);
}
int isFull(Stack* s) {
    return (s->top == MAX - 1);
}
void push(Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow!\n");
    } 
    else {
        s->top = s->top + 1;
        s->arr[s->top] = value;
    }
}

int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow!\n");
        return -1;
    }
     else {
        int x = s->arr[s->top];
        s->top--; 
        return x;
    }
}
int peek(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->arr[s->top];
}
void display(Stack* s) {
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}
int main(){
    Stack s;
    int x, y;
    init(&s);
    push(&s,10);
    push(&s,20);
    push(&s,30);
    push(&s,40);
    push(&s,50);
    printf("The stack is:");
    display(&s);
    x = peek(&s);
    printf("Top element is %d\n", x);
    y = pop(&s);
    printf("Popped element is %d\n", y);
    printf("The stack after popping:");
    display(&s);
    return 0;
}
