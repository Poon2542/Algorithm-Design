// The longest common subsequence in C++

#include <iostream>
#include<cstring>
using namespace std;

void lcsAlgo(string S1, string S2, int m, int n) {
  int LCS_table[m + 1][n + 1];


  // Building the mtrix in bottom-up way
  for (int i = 0; i <= m; i++) {
    for (int j = 0; j <= n; j++) {
      if (i == 0 || j == 0)
        LCS_table[i][j] = 0;
      else if (S1[i - 1] == S2[j - 1])
        LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
      else
        LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]); //pick the continuation of last character that are the same or pick other character (not picking the at all)
    }
  }


  // Printing the sub sequences
  cout <<LCS_table[m][n]<<endl;
}

int main() {
  string S1,S2;
  cin>>S1;
  cin>>S2;

  int m = S1.length();
  int n = S2.length();

  lcsAlgo(S1, S2, m, n);
}
