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

void pushTail(int number){
    Node *temp = createNode(number);
    if(!head){
        head = tail = temp;
    }
    else{
        tail->next = temp;
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

void sortLinkedList(){
	int temp;
	Node *curr;
	Node *ptr = head;
	while(ptr!=NULL){
		curr=ptr->next;
		while(curr!=NULL){
			if(ptr->number>curr->number){
			temp=ptr->number;
			ptr->number = curr->number;
			curr->number= temp;
		}
		curr=curr->next;
	}
	ptr=ptr->next;
}
}
int main(){
	
  int n , m , a , b;

  printf("How many Datas (1): "); scanf("%d" , &m);
  printf("Insert Number: ");
  for(int i=0 ; i<m ; i++){
    scanf("%d" , &a);
    pushTail(a);
  }

  printf("How many Datas (2): "); scanf("%d" , &n);
  printf("Insert Number: ");
  for(int i=0 ; i<n ; i++){
    scanf("%d" , &b);
    pushTail(b);
  }

  	sortLinkedList();
	printLinkedList();

printf("\n");
return 0;
}
