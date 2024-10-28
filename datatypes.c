#include <stdio.h>

int main() {
    // int, double, float, char
  int age = 34;
  printf("my age is %d years ", age);

  double numb1 = 14.25; 
  float size = 19.8f;
  char sex = 'm';
  printf("\n%.2lf" , sizeof(numb1), numb1);
  printf("\n%f", size);
  printf("\n%c", sex);
  return 0;  
}