#include <stdio.h>
#include <stdbool.h>

// 2016fjq1 Model Answer

bool arrayEqual(char a[], char b[], int n){
  int i;
  for (i=0;i<n;i++){
    if (a[i]!=b[i]){
      return false;
    }
  }
  return true;
}

int main(){
  int i;
  int P,N;
  scanf("%d %d\n",&P,&N);
  char a[N];
  
  // processing input
  for (i=0;i<N;i++){
    *(a+i) = getchar();
  }
  char b[N];
  for (i=0;i<N;i++){
    *(b+i) = getchar();
  }
  char c[N];
  for (i=0;i<N;i++){
    *(c+i) = getchar();
  }
  
  // Fulfiling task 1
  if (P==N){
    if (arrayEqual(a,b,N) || arrayEqual(a,c,N)){
      printf("Impossible");
    }else{
      for (i=0;i<N;i++){
        putchar(*(a+i));
      }
      printf("\n");
    }
    return 0;
  }
}