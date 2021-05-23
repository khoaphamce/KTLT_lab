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
      List = List -> next;
  }
  return Head;
}
bool isEqual(node *head1, node *head2)
{
  // TO DO
  node* List1 = head1;
  node* List2 = head2;
  while (List1 && List2){
      if (List1 -> data != List2 -> data) return false;
      List1 = List1 -> next;
      List2 = List2 -> next;
  }
  return true;
}
int main()
{
  int n = 0;
  cin>> n;
  node *head1 = createLinkedList(n);
  int m = 0;
  cin>> m;
  node *head2 = createLinkedList(m);
  cout << isEqual(head1, head2) << endl;
  return 0;
}
