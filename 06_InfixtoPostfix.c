#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack {
  int size;
  int top;
  char *arr;
};
 int isFull(struct stack *ptr){
  if(ptr->top == ptr->size-1)
  return 1;
  return 0;
}
int isEmpty(struct stack *ptr){
  if(ptr->top == -1)
  return 1;
  return 0;
}
void push(struct stack *ptr,char value){
if(isFull(ptr)){
  printf("StackOverflow");
  // return -1;
}
else{
  ptr->top++;
  ptr->arr[ptr->top] =value;
}

}
char pop(struct stack *ptr){
if(isEmpty(ptr)){
  printf("StackUndererflow");
  return -1;
}
else{
 char value=ptr->arr[ptr->top];
  ptr->top--;
  return value;
}
}
 int stackTop(struct stack *sp){
  return sp->arr[sp->top];
 }
 int precedence(char ch){
  if(ch=='*' || ch == '/')
    return 3;
    else if(ch=='+' || ch == '-')
    return 2;
    else
     return 0;
 }
  int isOperator(char ch){
    if(ch == '+' || ch =='-' || ch == '*' || ch=='/') 
    return 1;
    return 0;
  }

 char *InfixtoPostfix(char *infix){
  struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
  sp->size =10;
  sp->top =-1;
  sp->arr = (char *)malloc(sp->size *sizeof(char));
  char *postifix = (char *) malloc((strlen(infix)+1) *sizeof(char));
  int i=0;
  int j =0;
  while(infix[i] !=  '\0'){
    if(! isOperator(infix[i])){
      postifix[j] =infix[i];
      i++;
      j++;
    }
    else{
      if(precedence(infix[i])>precedence(stackTop(sp))){
        push(sp,infix[i]);
        i++;
      }
      else{
        postifix[j] = pop(sp);
        j++;
      }
    }
  }
   while(!isEmpty(sp)){
    postifix[j]= pop(sp);
    j++;
   }
   postifix[j] != '\0';
   return postifix;
 }

int main() {
  char *infix = "x-y/z-k*d";
  printf("Postfix is %s\n",InfixtoPostfix(infix));
  return 0;
}
