#include <stdio.h>

int input_n();
int sum_n(int n);
void output(int n, int sum);

int main(){
  int n, sum;
  n = input_n();
  sum = sum_n(n);
  output(n, sum);
  return 0;
}

int input_n(){
  int a;
  printf("Enter the number :\n");
  scanf("%d", &a);
  return a;
}

int sum_n(int n){
  int result = 0;
  for(int i = 1; i <= n; i++){
    result += i;
  }
  return result;
}

void output(int n, int sum){
  for(int i = 1; i < n; i++){
    printf("%d + ", i);
  }
  printf("%d is %d\n", n, sum);

}


