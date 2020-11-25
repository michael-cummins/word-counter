#include <iostream>
#include "node.cpp"
#include <string>
using namespace std;

int main(){
  node* n;
  node* temp1;
  node* temp2;
  node* head;
  string t_word;

  cin >> t_word;
  n = new node(t_word);
  temp1 = n;
  head = n;
  while(cin.eof() == false){
    cin >> t_word;
    n = new node(t_word);
    temp1->next=n;
    temp1 = n;
  }

  temp1 = head;
  n = temp1->next;
  temp2 = head; //keep some pointer pointing to the head
  
  while(head->next != 0){
    temp1 = head;
    n = temp1->next;
    while(temp1->next!= 0){
     if(n->get_string() == head->get_string()){
      head->set_count();
      delete n;
      n = n->next;
      temp1->next = n;
    }
    else{
      n = n->next;
      temp1 = temp1->next;
    }
   }
   head = head->next;
  }
  
  temp1 = temp2;
  while(temp1->next != 0){
    temp1->print_data();
    temp1 = temp1->next;
  }

  return 0;
}

