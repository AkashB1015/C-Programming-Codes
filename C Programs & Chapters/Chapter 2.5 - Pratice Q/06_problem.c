 #include <stdio.h>
 
 int main()
 {
    
  	// Write a program to find greatest of four numbers entered by the user.
  
  int a = 4, b = 10 , c = 144,d= 123;

  if (a>b && a>c && a>d)
  {
     printf("\n The greatest of all is :%d ",a);
  }
  else if (b>a && b>c && b>d)
  {
    printf("\n The greatest of all is :%d",b);
    
  }
  else if (c>a && c>b && c>d)
  {
      printf("\n The greattest of all is :%d",c);
  }

  else if(d>a && d>b && d>c)
  {
     printf("\n The greatest of all is :%d",d);

   
  }
  return 0;
}
