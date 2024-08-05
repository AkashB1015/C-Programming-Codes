  #include <stdio.h>
  
  int main(){
    int i = 72;
    int* j =&i; // J is pointer pointing to i(j is an integer pointer)
    int k = 67;
    
    printf("\n the Address of i is :%p",&i);
    printf("\n the Address of j is :%p",j);
    printf("\n the Address of k is :%p",&k);

      printf("\n The value at address of j is :%d",*j);
      printf("\n The value at address of j is :%d",*(&i));
    return 0;
  }
