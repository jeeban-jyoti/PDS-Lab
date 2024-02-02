#include <stdio.h>
#include <stdlib.h>
#define __INT_MIN__ -2147483648
#define MAX 100

struct stack{
    int stk[MAX];
    int top;
};
typedef struct stack Stack;

void createStack(Stack* st){
    st->top = -1;
    printf("%d\n", st->top);
}

void push(Stack* st, int element){
    if(st->top < MAX -1){
        st->top++;
        printf("%d\n", st->top);
        st->stk[st->top] = element;
    }else{
        printf("stack overflow");
    }
}

int pop(Stack* st){
    if(st->top > 0){
        return st->stk[st->top];
        st->top--;
    }else{
        printf("stack underflow");
        return __INT_MIN__;
    }
}

int peek(Stack* st){
    if(st->top >= 0){
        return st->stk[st->top];
    }else{
        printf("stack underflow");
        return __INT_MIN__;
    }
}

int isEmpty(Stack* st){
    if(st->top <= 0){
        return 1;
    }else{
        return 0;
    }
}

void display(Stack* st){
    printf("[ ");
    for(int i = 0; i < st->top +1; i++){
        printf("%d ", st->stk[i]);
    }
    printf("]\n");
}

int main(){
    Stack *st = (Stack*)malloc(sizeof(Stack));

    createStack(st);
    push(st, 23);
    push(st, 45);
    printf("%d\n", pop(st));
    push(st, 667);
    printf("%d\n", peek(st));
    display(st);
    printf("%d\n", isEmpty(st));
    printf("%d\n", pop(st)); 
    
    free(st);

    return 0;
}