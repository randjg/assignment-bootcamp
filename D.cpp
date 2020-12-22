#include <stdio.h>  
#include <string.h>  
#include <stdlib.h>  
   
struct node{  
    int data;  
    struct node *next;  
};  
   
struct node *head = NULL;  
struct node *tail = NULL;  

void add(int data){    
    struct node *createNode = (struct node*)malloc(sizeof(struct node));  
    createNode->data = data;  
    if(head == NULL){  
        head = tail = createNode;  
        createNode->next = head;  
    }else {  
tail->next = createNode;  
tail = createNode;  
tail->next = head;  
}  
}  
  

void removeDuplicate() {  
 
struct node *current = head, *index = NULL, *temp = NULL;  
if(head == NULL) {  
printf("List is empty");  
}  
else {  
do{  
 
temp = current;  

index = current->next;  
while(index != head) {  
  
if(current->data == index->data) {  

temp->next = index->next;  
}  
else{  
  
     temp = index;  
}  
index= index->next;  
}  
current =current->next;  
}while(current->next != head);   
}  
}  
 
void printLinkedList(){  
    struct node *current = head;  
    if(head == NULL){  
        printf("List is empty");  
    }  
    else{  
 do{  

printf("%d -> ", current->data);  
current = current->next;  
}while(current != head);
printf("NULL");  
printf("\n");  
    }  
}  
      
int main()  
{  

   	add(1);  
   	add(2);  
   	add(3);  
  	add(2);  
   	add(2);  
  	add(4);  
	add(5);  
  	add(2);  
  	add(5);  
  	add(4);  
  	add(1);  
  	add(4);
   	printf("Linked List before Removing Duplicates: ");
   	printLinkedList();  
   	printf("\n");
   	removeDuplicate();  
   	printf("Linked List after Removing Duplicates: ");  
   
   	printLinkedList();  
     
   	return 0;  
}  	
