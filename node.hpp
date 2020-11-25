#pragma once
#include <string>
using namespace std;

class node: public string {
  private:
  int count;
  string word;
  public:
  node *next;
  node();
  ~node();
  node(string w);
  void set_count();
  void print_data();
  string get_string();
};
