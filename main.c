#include <conversion.h>

#include <stdio.h>

int main(){
  printf("How many inches?");

  float inches = 0;

  int paluuarvo = scanf("%f", &inches);

  if (paluuarvo == 1){
    printf("%f inches is %f\n", inches, inchesToCm(inches));
  }
  
  else {
    printf("Invalid input. Please input valid floating numbers.\n");
  }
  
  return 0;
}
