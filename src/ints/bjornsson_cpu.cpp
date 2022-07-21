#include "../algos/bjornsson_cpu.h"

#include <iostream>
#include <string>
#include <vector>

#include "../datatypes/my_int.cpp"
#include "../utils/cpu_tests.h"
#include "../utils/free_arrays.h"
#include "../utils/read_input.h"
using namespace std;

int main() {
  vector<vector<my_int*>> arrays = read_input<my_int>();
  run_cpu_tests(arrays, bjornsson_sort);
  free_arrays(arrays);
}