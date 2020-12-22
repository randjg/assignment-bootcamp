#include<stdio.h>
#include<stdlib.h>

struct node{
   int number;
   struct node *next;
}*head,*temp;
int count=0;

void insert(int val){
   struct node* createNode = (struct node*)malloc(sizeof(struct node));
   createNode->number = val;
   createNode->next = NULL;
   if(head == NULL){
      head = createNode;
      temp = head;
      count++;
   } else {
      temp->next=createNode;
      temp=temp->next;
      count++;
   }
}

void printLinkedlist(){
   if(head==NULL)
      printf("no node ");
   else {
      temp=head;
      while(temp!=NULL) {
         printf("%d ",temp->number);
         temp=temp->next;
      }
   }
}

void last(int n){
   int i;
   temp=head;
   for(i=0;i<count-n;i++){
      temp=temp->next;
   }
   if(n==1)
   printf("\nThe %dst node from the end of the Linked List : %d" ,n,temp->number);
	else if(n==2)
   printf("\nThe %dnd node from the end of the Linked List : %d" ,n,temp->number);
   else if(n==3)
   printf("\nThe %drd node from the end of the Linked List : %d" ,n,temp->number);
   else
   printf("\nThe %dth node from the end of the Linked List : %d" ,n,temp->number);


}
int main(){
   //creating list
   	struct node* head = NULL;
	int n;
	insert(1);
   	insert(2);
   	insert(3);
   	insert(4);
   	insert(5);
   	insert(6);
   	insert(7);
   	insert(8);
   	insert(9);
   	insert(10);
	printf("\nLinked List is : ");
   	printLinkedlist();
   	printf("\nFind Element's Number (from the end of Linked List): ");
	scanf("%d", &n);

   	last(n);
   	return 0;
}
