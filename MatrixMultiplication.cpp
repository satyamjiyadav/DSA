#include <iostream>

using namespace std;

int main() {
  // Get the matrix size from the user.
  int m;
  cin >> m;

  // Create two matrices of size m x m.
  int A[m][m], B[m][m], C[m][m];

  // Read the elements of the first matrix from the user.
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A[i][j];
    }
  }

  // Read the elements of the second matrix from the user.
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cin >> B[i][j];
    }
  }

  // Calculate the product of the two matrices.
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      C[i][j] = 0;
      for (int k = 0; k < m; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  // Print the product of the two matrices.
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
