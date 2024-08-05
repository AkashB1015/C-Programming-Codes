  #include <stdio.h>
  
  int main(){
    char i = 72;
    char* j =&i; 
    float k = 5.232;
    float* k1 = &k;
    
    printf("\n the Address of i is :%p",&i);
    printf("\n the Address of j is :%p",j);
    printf("\n the Address of k is :%p",&k);

      printf("\n The value at address of j is :%d",*j);
      
    return 0;
  }
