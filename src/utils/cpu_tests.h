#include "cpu_tests.cpp"
template <class T>
void run_cpu_tests(vector<vector<T*>> arrays,
                   vector<T*> (*func)(int n, vector<T*>));