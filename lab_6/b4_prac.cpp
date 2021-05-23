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
node* ReverseLinkedList(node* List){
    node* TravelNode = List;
    node* Head = List;
    node* PrevNode;
    node* NextNode;
    node* TempNodePath = TravelNode -> next;
    while (TravelNode){
        NextNode = TempNodePath;
        if (NextNode){
            TempNodePath = NextNode -> next;
            NextNode -> next = TravelNode;
        }
        PrevNode = TravelNode;
        TravelNode = NextNode;
    }
    Head -> next = NULL;
    Head = PrevNode;
    return PrevNode;
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
  if (n > 0)
  {
    node *head = createLinkedList(n);
    head = ReverseLinkedList(head);
    print(head);
  }
  else
  {
    cout << "Invalid n" << endl;
  }
  return 0;
}