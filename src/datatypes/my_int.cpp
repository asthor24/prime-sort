#include <iostream>
#include <sstream>
using namespace std;

struct my_int {
  int value;
  void free_data(){};
  friend ostream& operator<<(ostream& output, my_int& s) {
    output << s.value;
    return output;
  }
  friend istream& operator>>(istream& input, my_int& s) {
    input >> s.value;
    return input;
  }
  bool operator<(my_int& o) { return value < o.value; }
  bool operator>(my_int& o) { return value > o.value; }
};

my_int* input_my_type() {
  my_int* i = (my_int*)malloc(sizeof(my_int));
  cin >> *i;
  return i;
}