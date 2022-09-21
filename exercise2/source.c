/*Author: Usman Abdullahi
  Purpose: This program performs multiplication of two integers.
  Date: 21-09-2022 */
#include <stdio.h>


int multiply_two (int y, int z)
{
  int result;

  result = (y * z);
  return result; 
}

int main ()
{
  int multiple; 

  multiple = multiply_two (3, 5); 
  printf("The multiple of 3 and 5 is: %d\n", multiple); 
  return 0;
}
