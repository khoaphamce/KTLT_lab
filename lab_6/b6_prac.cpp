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
node *insertNode(node *head, node *newNode, int position)
{
  // TO DO
    if (position <= 0) return head;
    if (position == 1) {
        newNode -> next = head;
        return newNode;    
    }
    node* HeadList = head;
    node*PrevNode = HeadList;
    for (int i = 1; i < position-1 && head != NULL; ++i){
        //std::cout << "head now at " << head -> data << std::endl;
        PrevNode = head;
        head = head -> next;
        //std::cout << "Already move head" << std::endl;
    }
    if (head == NULL){
        //std::cout << "See that head is NULL so adding new node to end" << std::endl;
        PrevNode -> next = newNode;
        newNode -> next = NULL;
        return HeadList;
    } 
    else if (head -> next == NULL){
        //std::cout << "See that head NEXT is NULL so adding new node to end" << std::endl;
        head -> next = newNode;
        newNode -> next = NULL;
        return HeadList;
    }
    newNode -> next = head -> next;
    head -> next = newNode;
    return HeadList;
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
  node *newNode = new node();
  cin >> newNode->data;
  int position = 0;
  cin >> position;
  head = insertNode(head, newNode, position);
  print(head);
  return 0;
}


