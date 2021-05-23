#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};

node *createLinkedList(int n)
{
  // TO DO
  node* List = new node;
  node* Head = List;
  for(int i = 0; i < n; ++i){
      std::cin >> List -> data;
      if (i < n-1){
        List -> next = new node; 
        List = List -> next;
      }
  }
  return Head;
}

node* evenThenOddLinkedList(node *head)
{
  //TODO
    node *EvenList = new node;
    node *OddList = new node;
    node *HeadOddList = OddList;
    node *HeadEvenList = EvenList;
    node *PrevEvenList = EvenList;
    node *PrevOddList = OddList;
    bool ifEven = false;
    bool ifOdd = false;

    while (head){
        if (head -> data % 2 == 0){
            ifEven = true;
            //std::cout << "Even found at value: " << head -> data << std::endl;
            EvenList -> data = head -> data;
            EvenList -> next = new node;
            PrevEvenList = EvenList;
            EvenList = EvenList -> next;
        }
        else{
            ifOdd = true;
            //std::cout << "Odd found at value: " << head -> data << std::endl;
            OddList -> data = head -> data;
            OddList -> next = new node;
            PrevOddList = OddList;
            OddList = OddList -> next;
        }
        head = head -> next;
    }
    if (ifEven && !ifOdd){
        PrevEvenList -> next = NULL;
        return HeadEvenList;
    } 
    else if(!ifEven && ifOdd){
        PrevOddList -> next = NULL;
        return HeadOddList;
    }
    else{
        PrevEvenList -> next = HeadOddList;
        PrevOddList -> next = NULL;
        return HeadEvenList;
    }
}

void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout<<endl;
}
int main()
{
  int n = 0;
  cin >> n;
  node *head = createLinkedList(n);
  print(head);
  head = evenThenOddLinkedList(head);
  print(head);
  return 0;
}