#include <stdio.h>

int input();
int cmp(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main(){
  int x, y, z, largest;
  x = input();
  y = input();
  z = input();
  largest = cmp(x, y, z);
  output(x, y, z, largest);
  return 0;
}

int input(){
  int a;
  printf("Enter the number :\n");
  scanf("%d", &a);
  return a;
}

int cmp(int a, int b, int c){
  int max;
  if(a > b){
    max = a;
  }
  else{
    max = b;
  }

  if(c > max){
    max = c;
  }
  else{
    max = max;
  }
  return max;
}

void output(int a, int b, int c, int largest){
  printf("The largest no. among (%d, %d & %d) is %d\n",a, b, c,largest);
}