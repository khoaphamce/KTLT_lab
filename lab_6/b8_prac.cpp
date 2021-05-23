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
void replace(node* head, int position, int value)
{
  //TODO
    if (position < 0) return;
    for (int i = 1; i <= position && head != NULL; ++i) head = head -> next;
    if (head == NULL) return;
    head -> data = value;
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
  int pos, val;
  cin>>pos>>val;
  replace(head, pos, val);
  print(head);
  return 0;
}
