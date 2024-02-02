#include <stdio.h>
#include <stdlib.h>
#define __INT_MIN__ -2147483648

struct stack{
    int data;
    struct stack* next;
};
typedef struct stack Stack;

Stack* createStack(){
    Stack *head = (Stack*)malloc(sizeof(Stack));
    head = NULL;
    return head;
}

void push(Stack *head, int value){
    Stack *node = (Stack*)malloc(sizeof(Stack));
    printf("%p\n", node);
    node->data = value;
    node->next = head;
    head = node;
    printf("%d\n", head->data);
    printf("%p\n", head->next);
}

int pop(Stack *head){
    if(head != NULL){
        Stack *p = head;
        head = head->next;
        int data = p->data;
        free(p);
        return data;
    }else{
        printf("stack underflow\n");
        return __INT_MIN__;
    }
}

int peek(Stack *head){
    if(head!= NULL){
        return head->data;
    }else{
        printf("stack is empty\n");
        return __INT_MIN__;
    }
}

int isEmpty(Stack *head){
    if(head == NULL)
        return 1;
    else
        return 0;
}

void display(Stack *head){
    Stack *p = head;
    printf("[ ");
    while(p != NULL){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("]\n");
}

int main(){
    Stack *head = createStack();

    push(head, 66);
    push(head, 87);
    push(head, 89);
    display(head);

    return 0;
}