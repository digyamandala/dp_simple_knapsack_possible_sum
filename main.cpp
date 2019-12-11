#include <iostream>
#include <vector>

using namespace std;

/*
  To mark TRUE if bag of n kg can be FULLY-FILLED with collections of n_things
  with various weights'

  f(n, thing(i)) = f(n-weight(i), thing(i-1)) || f(n, thing(i-1))
*/

bool p[100][100];

void fillKnapsackTable(int weights[], int n_things, int max_capacity) {

  p[0][0] = true;

  for(int i = 1 ; i < 100 ; i++) {
    p[0][i] = true;
  }

  for(int x = 1 ; x <= 12 ; x++) {
    for(int k = 1 ; k <= 4 ; k++) {
      if(x - weights[k-1] >= 0) {
        p[x][k] = p[x-weights[k]][k-1] || p[x][k-1];
      }else {
        p[x][k] = p[x][k] || p[x][k-1];
      }
    }
  }
}

int main() {

  int weight[1000];
  weight[0] = 0;
  weight[1] = 1;
  weight[2] = 3;
  weight[3] = 3;
  weight[4] = 5;
  int n = 4;

  fillKnapsackTable(weight, n, 12);

  for(int i = 0 ; i <= 4 ; i++) {
    for(int j = 0 ; j <= 12 ; j++) 
      cout << p[j][i] << " ";
    cout << endl;
  }
  return 0;
}