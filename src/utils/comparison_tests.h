#include "comparison_tests.cpp"
template <class T>
void run_comparison_tests(vector<vector<T>> arrays,
                          vector<T> (*algo)(int, vector<T>, int&));