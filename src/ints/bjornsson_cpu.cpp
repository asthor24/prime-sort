#include "../algos/bjornsson_cpu.h"

#include <iostream>
#include <string>
#include <vector>

#include "../utils/cpu_tests.h"
#include "../utils/read_input.h"
using namespace std;

int main() {
  vector<vector<int>> arrays = read_input<int>();
  run_cpu_tests(arrays, bjornsson_sort);
}