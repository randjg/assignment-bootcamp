#include <stdio.h>
#include <stdlib.h>

struct Node{
    int number;
    Node *next;
}*head , *tail , *curr;

Node *createNode(int number){
    Node *newNode = (Node*) malloc(sizeof(Node));
    newNode->number = number;
    newNode->next  = NULL;
    return newNode;
}

void pushHead(int number){
  Node *temp = createNode(number);

  if(!head){
    head=tail=temp;
  } else{
    temp->next = head;
    head=temp;
  }
}

void popHead(int number){
  if(!head){
    return;
  } else if(head==tail){
  head=tail=NULL;
  free(head);
  } else{
    Node *temp = head;
    head = temp->next;
    temp->next=NULL;
    free(temp);
  }
}
void popTail(int number) {
  if(!head) {
    return;
  } else if(head == tail) {
    head = tail = NULL;
    free(head);
  } else {
    Node *temp = head;
    while(temp->next != tail) {
      temp = temp->next;
    }
    temp->next = NULL;
    free(tail);
    tail = temp;
  }
}

void printLinkedList(){
  
  Node *curr = head;
  while(curr !=NULL){
  printf("%d ", curr-> number);
    curr= curr-> next;
  }
}

int main(){
  int data , a , b;
  printf("How many datas? "); 
  scanf("%d" , &data);
  printf("Input number (in Ascending Order): ");
  for(int i=0 ; i<data ; i++){
    scanf(" %d" , &a);
    pushHead(a);
  }
  printf("Result (in Descending Order)\t : "); 

  printLinkedList();

printf("\n");
return 0;
}



