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
      List -> next = new node;
      if (i < n-1)
        List = List -> next;
  }
  List -> next = NULL;
  return Head;
}
int countNode(node* head)
{
  //TODO
  int count = 0;
  while (head){
      count++;
      head = head->next;
  }
  return count;
}
void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << endl;
    head = head->next;
  }
}
int main()
{
  int n = 0;
  cin >> n;
  node *head = createLinkedList(n);
  print(head);
  cout<<endl;
  cout<<countNode(head);
  return 0;
}
