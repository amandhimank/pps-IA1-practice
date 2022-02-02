#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_arrays(int n, int a[n]);
void out_put(int n, int a[n], int sum);

int main(){
  int n, sum;
  n = input_array_size();
  int a[n];
  input_array(n, a);
  sum = sum_n_arrays(n, a);
  out_put(n, a, sum);
  return 0;
}


int input_array_size(){
  int a;
  printf("Enter Array Size :\n");
  scanf("%d",&a);
  return a;
}

void input_array(int n, int a[n]){
  for(int i = 0; i < n; i++){
    printf("Enter the element %d :\n", i+1);
    scanf("%d", &a[i]);
  }
}

int sum_n_arrays(int n, int a[n]){
  int result = 0;
  for(int i = 0; i < n; i++){
    result += a[i];
  }
  return result;
}

void out_put(int n, int a[n], int sum){
  for(int i = 0; i < n-1; i++){
    printf(" %d +", a[i]);
  }
  printf(" %d is %d\n", a[n-1], sum);
}