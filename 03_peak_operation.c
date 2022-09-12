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


  // ****************peek function**********************
  int peek(struct stack *s,int i){
    int arrInd = s->top-i+1;
    if(arrInd<0){
      printf("Not a valid position\n");
      return -1;
    }
    else
     return s->arr[arrInd];
  }

  

 int main() {
    struct stack *s = (struct stack *) malloc(sizeof(struct stack ));
    // struct stack *s;
     s->size = 50;
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


    //  ******************peek operation********************
   for(int j=1;j<= s->top+1;j++){
    printf("The value at position %d is %d\n",j,peek(s,j));
   }
  
   return 0;
}
