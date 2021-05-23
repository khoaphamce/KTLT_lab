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
int searchLinkedList(node* head, int key)
{
  // TODO
    int pos = 0;
    while (head){
        if (head -> data == key) return pos;
        head = head -> next;
        pos++; 
    }
    return -1;
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
  int m;
  cin>>m;
  cout<<searchLinkedList(head,m);
  return 0;
}
