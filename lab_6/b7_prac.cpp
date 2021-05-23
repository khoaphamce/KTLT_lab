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
  List = NULL;
  return Head;
}
void mergeList(node* head1, node* head2)
{
  // TODO
    node *PrevNode = head1;
    while (head1){
        PrevNode = head1;
        head1 = head1 -> next;
    }
    PrevNode -> next = head2;
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
  int m;
  cin>>m;
  node *head1 = createLinkedList(m);
  mergeList(head, head1);
  print(head);
  return 0;
}
