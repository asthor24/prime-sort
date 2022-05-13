#include <vector>
using namespace std;
template <class T>
vector<T*> shell_sort(int n, vector<T*> A) {
  int g, gap, i, j;
  for (gap = n >> 1; gap > 0; gap >>= 1) {
    for (i = gap; i < n; i += 1) {
      T* temp = A[i];
      for (j = i; j >= gap && *A[j - gap] > *temp; j -= gap) A[j] = A[j - gap];
      A[j] = temp;
    }
  }
  return A;
}