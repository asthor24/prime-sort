#include <vector>
using namespace std;

template <class T>
vector<T> bjornsson_sort(int n, vector<T> A, int& comparison_count) {
  for (int d = n; d >= 1; d--) {
    for (int i = d; i <= n; i += d) {
      for (int j = i; j > d; j -= d) {
        comparison_count++;
        if (A[j - d - 1] > A[j - 1])
          swap(A[j - d - 1], A[j - 1]);
        else
          break;
      }
    }
  }
  return A;
}
