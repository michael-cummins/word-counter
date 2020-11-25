#include "node.hpp"
#include <iostream>
#include <string>
using namespace std;

node::node(){
  
}

node::~node(){

}

node::node(string w){
  count = 1;
  word = w;
}

void node::set_count(){
  count = count + 1;
}

void node::print_data(){
  cout << "\"" << word << "\""  << " " << count << endl;
}

string node::get_string(){
  return word;
}
