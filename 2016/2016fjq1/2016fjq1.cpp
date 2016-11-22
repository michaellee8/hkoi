#include <stdio.h>
#include <stdbool.h>
#include <vector>

// 2016fjq1 Model Answer

bool test(int x, int y, int z int case1, int case2, int case3, int case4,
          int P) {
  int a, b, c;
  a = case1 + x + y + z;
  b = x + z;
  c = y + z;
  if (a < P || b >= P || c >= P)
    return false;
  return true;
}

bool arrayEqual(char a[], char b[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  int i;
  int P, N;
  scanf("%d %d\n", &P, &N);
  char a[N];

  // processing input
  for (i = 0; i < N; i++) {
    *(a + i) = getchar();
  }
  char b[N];
  for (i = 0; i < N; i++) {
    *(b + i) = getchar();
  }
  char c[N];
  for (i = 0; i < N; i++) {
    *(c + i) = getchar();
  }

  /*
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
  */

  // Fulfiling all task

  /*
   * case1 --> TFF
   * case2 --> TTF
   * case3 --> TFT
   * case4 --> TTT
   */
  vector<int> case1, case2, case3, case4;
  for (i = 0; i < N; i++) {
    if (a[N] == b[N]) {
      if (a[N] == c[N]) {
        case1.push_back(N);
      } else {
        case2.push_back(N);
      }
    } else {
      if (a[N] == c[N]) {
        case3.push_back(N);
      } else {
        case4.push_back(N);
      }
    }
  }

  int case1s = case1.size();
  int case2s = case2.size();
  int case3s = case3.size();
  int case4s = case4.size();

  int x, y, z;

  for (z = 0; z < case4s; z++) {
    for (x = 0; x < case1s; x++) {
      for (y = 0; y < case2s; y++) {
        if (test(x, y, z, case1, case2, case3, case4, P)) {
          int d = 0;
          int e = 0;
          int f = 0;
          for (i = 0; i < N; i++) {
            if (a[N] == b[N]) {
              if (a[N] == c[N]) {
                case1.push_back(N);
              } else {
                case2.push_back(N);
              }
            } else {
              if (a[N] == c[N]) {
                case3.push_back(N);
              } else {
                case4.push_back(N);
              }
            }
          }
        }
      }
    }
  }
  printf("Impossible");
  return 0;
}