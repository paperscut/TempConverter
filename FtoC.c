h#include <stdio.h>
  
int main()
{
  float celsius, fahrenheit;
   
  printf("\nInput temperature in Fahrenheit: ");
  scanf("%f", &fahrenheit);
  
  celsius = ((fahrenheit - 32) * 5/9);
 
 printf("\nTemp in Celsius: %f", celsius);
 getchar();

 printf("\n\nPress ENTER key to Continue\n");  
 getchar(); 
  
 return 0;
}
