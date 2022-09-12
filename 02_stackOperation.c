 #include<stdlib.h>
 #include<stdio.h>
 struct stack {
   int size;
   int top;
   int *arr;
 };
  int isEmpty(struct stack *ptr){
   if(ptr->top==-1){
     return 1;
   }
   else{
     return 0;
   }
 }
 int isFull(struct stack *ptr){
   if(ptr->top==ptr->size - 1){
     return 1;
   }
   else{
     return 0;
   }
 }
  void push(struct stack *ptr,int val){
   if(isFull(ptr)){
     printf("stack is overflow at %d ",val);
   }
   else{
     ptr->top++;
     ptr->arr[ptr->top]=val;
   }
  }
 int  pop(struct stack *ptr){
   if(isEmpty(ptr)){
     printf("stack is underflow");
      return -1;
   }
   else{
     int val =ptr->arr[ptr->top];
     ptr->top--;
     return val;
   }
  }

 int main() {
    struct stack *s = (struct stack *) malloc(sizeof(struct stack ));
    // struct stack *s;
     s->size = 10;
     s->top = -1;
     s->arr = (int *)malloc(s->size * sizeof(int));
     push(s,1);
     push(s,2);
     push(s,3);
     push(s,4);
     push(s,5);
     push(s,6);
     push(s,7);
     push(s,8);
     push(s,9);
     push(s,10);
    printf("stack has been created successfully.\n");
    printf("Before pushing,Full : %d\n",isFull(s));
    printf("Before pushing,Empty : %d\n",isEmpty(s));

    printf("poped %d from the stack\n ",pop(s));
    printf("poped %d from the stack\n ",pop(s));
    printf("poped %d from the stack\n ",pop(s));
  
   return 0;
}


