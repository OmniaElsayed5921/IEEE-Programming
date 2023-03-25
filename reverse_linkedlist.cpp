#include <iostream>
using namespace std;
struct node{
  int data;
  node*next ;
};
node*head = NULL ;
void insert_Node( int value ){
 node* newnode = new node ;
 newnode->data = value ;
 newnode->next= NULL;

 if( head == NULL ){
   head = newnode ;
    newnode->next = NULL;
 }
  else{
   node*temp = head;
   while( temp->next != NULL ){
    temp = temp->next;
   }
  temp->next = newnode;
   newnode->next = NULL;
 }
}
void display(){
  node*current = head;
  while( current!= NULL ){
    cout << current-> data << " " ;
    current=current->next;
  }
}
void reverse_linkedlist(){
     node* current = head ;
     node * previouse = NULL;
     node * Next = current->next ;
     while( Next!= NULL){
        Next = current->next ;
        current->next = previouse ;
        previouse=current;
        current=Next;
     }
     head= previouse;
}
int main()
{
    int t ; cin >>  t ;
    for( int i=1 ; i<=t ; i++ ){
     int n ; cin >> n ;
     for( int j=0 ; j<n ; j++ ){
        int val ; cin >> val;
        insert_Node(val);
     }
     reverse_linkedlist();
     display();
     cout << endl;
    }
    return 0;
}
