#include <iostream>
using namespace std;
class node
{
public:
int data;
node *next;

node() { //constructor
    data = 0;
    next = nullptr;
}
};
class linked_list
{
public:
node *head, *tail;

linked_list(){
    head = NULL;
    tail = NULL;
}
void insert (int data){//inserting nodes
    node *tmp = new node;
    tmp->data = data;
    tmp->next = NULL;
    if(head == NULL){
        head = tmp;
        tail = tmp;
    }
    else{
        tail->next = tmp;
        tail = tail->next;
    }
cout << "Node with data " << data << " successfully added." << endl;
}
void display (void){//displaying data
    node *tmp = head; 
    while(tmp !=NULL){ 
        cout<<(tmp->data)<<" -> "; 
        tmp = tmp->next;//traversing linked list
         } 
         cout<<"NULL\n";
          }
};

class bubblesort{
    public:
   void sort(node *h){
       
      for(node*i = h;i!=NULL;){
           for(node*j = h;j->next!=NULL;){
               if((j->data) > j->next->data){
                   int t = j->next->data;
                    j->next->data = j->data;
                    j->data = t;
               }j=j->next;
           }i=i->next;
       }return;
   }
};

int main(){
    int x;
    cout<<"Enter size";
    cin>>x;
    linked_list ll1;
    bubblesort c;
    int i=0;
    while(i<x){
        ll1.insert(rand() % x);
        i++;
    }
    cout<<"input list is ";
    ll1.display();
    c.sort(ll1.head);
    ll1.display();
    return 0;
}
