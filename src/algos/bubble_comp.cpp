#include <vector>
using namespace std;
template <class T>
vector<T*> bubble_sort(int n, vector<T*> A, int& comparison_count) {
  for (int i = n - 1; i > 0; i--) {
    for (int j = 0; j < i; j++) {
      comparison_count++;
      if (*A[j] > *A[j + 1]) {
        swap(A[j], A[j + 1]);
      }
    }
  }
  return A;
}