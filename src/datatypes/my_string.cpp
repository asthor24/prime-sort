#include <iostream>
#include <sstream>
using namespace std;

const int STR_MAX_SIZE = 256;

struct my_string {
  int sz;
  char* arr;
  void free_data() { free(arr); }
  friend ostream& operator<<(ostream& output, my_string& s) {
    for (int i = 0; i < s.sz; i++) {
      output << s.arr[i];
    }
    return output;
  }
  friend istream& operator>>(istream& input, my_string& s) {
    string str;
    input >> str;
    s.sz = str.size();
    s.arr = (char*)malloc(sizeof(char) * STR_MAX_SIZE);
    for (int i = 0; i < s.sz; i++) {
      s.arr[i] = str[i];
    }
    return input;
  }
  bool operator<(my_string& o) {
    for (int i = 0; i < min(sz, o.sz); i++) {
      if (arr[i] < o.arr[i]) return true;
      if (arr[i] > o.arr[i]) return false;
    }
    if (sz < o.sz) return true;
    return false;
  }
  bool operator>(my_string& o) {
    bool eq = sz == o.sz;
    for (int i = 0; i < min(sz, o.sz); i++) {
      if (arr[i] != o.arr[i]) eq = false;
    }
    return !(*this < o) && !eq;
  }
};

my_string* input_my_type() {
  my_string* i = (my_string*)malloc(sizeof(my_string));
  cin >> *i;
  return i;
}
