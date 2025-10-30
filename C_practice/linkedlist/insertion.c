#include <stdio.h>
#include <stdlib.h>

	struct node{
		int data;
		struct node *link;
		};

int main(){
	struct node *head = malloc(sizeof(struct node));
	head->data = 45;
	head->link = NULL;

	struct node *current = malloc(sizeof(struct node));
	current->data = 67;
	current->link = NULL;

	head->link = current;

	struct node *temp = head;

	while(temp != NULL){
		printf("%d->", temp->data);
		temp = temp->link;
	}

	return 0;
}

