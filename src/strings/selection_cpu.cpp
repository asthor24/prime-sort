#include "../algos/selection_cpu.h"

#include <iostream>
#include <string>
#include <vector>

#include "../utils/cpu_tests.h"
#include "../utils/read_input.h"
using namespace std;

int main() {
  vector<vector<string>> arrays = read_input<string>();
  run_cpu_tests(arrays, selection_sort);
}