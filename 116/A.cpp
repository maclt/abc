#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
  vector<int> A(3);
  for(int i=0; i<3; i++) {
    cin >> A[i];
  }
  
  sort(A.begin(), A.end());
  
  cout << A[0]*A[1]/2 << endl;
  
  return 0;
}
