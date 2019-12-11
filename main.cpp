#include <iostream>
#include <vector>

using namespace std;

int main() {

  int weight[1000];
  weight[0] = 0;
  weight[1] = 1;
  weight[2] = 3;
  weight[3] = 3;
  weight[4] = 5;
  int n = 4;

  bool p[100][100];
  p[0][0] = true;

  int val;
  cin >> val;

  for(int i = 1 ; i <= val ; i++) {
    for(int j = n ; j >= 0; j--) {
      if(i-weight[j-1] >= 0){
        p[i][j] = p[i-weight[j-1]][j-1] || p[i-weight[j-1]][j-1]
      }
    }
  }

  return 0;
}