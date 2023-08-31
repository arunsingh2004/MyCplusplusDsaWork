#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#include<stack>
struct Node
{
	int data;
	struct Node* next;
};


void printList(struct Node*);


void push(struct Node **head_ref, int new_data)
{


struct Node* new_node =
			(struct Node*) malloc(sizeof(struct Node));


new_node->data = new_data;


new_node->next = *head_ref;


*head_ref = new_node;
}


void printList(struct Node *head)
{
	if (!head)
		return;
	
	while (head->next != NULL)
	{
		printf("%d ->",head->data);
		head = head->next;
	}
	printf("%d ->",head->data);
}


Node* find_mid(Node *head)
{
	Node *temp = head, *slow = head, *fast = head ;
	
	while(fast && fast->next)
	{
		
	
	slow = slow->next ;
	fast = fast->next->next ;
	}
	
	
	if(fast)
	slow = slow->next ;

return slow ;
}


void modifyTheList(struct Node *head, struct Node *slow)
{

Stack <int> s;
Node *temp = head ;

while(slow)
{
	s.push( slow->data ) ;
	slow = slow->next ;
}


while( !s.empty() )
{
	temp->data = temp->data - s.top() ;
	temp = temp->next ;
	s.pop() ;
}

}


int main()
{
	struct Node *head = NULL, *mid ;
	
	

	
         
	       push(&head,5);
	       push(&head,5);
	       push(&head,14);
	       push(&head,24);
	       push(&head,3);
	       push(&head,4);
	
	
	
	mid = find_mid(head) ;
	
	
	modifyTheList( head, mid);
	
	
	
	printf("Modified List:");
	printList(head);
	return 0;
}