#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node *next; 
}Node;

void print_list(Node *head) {
	Node* cur_node = head;
	do  {
		printf("%d ", cur_node->val);
		cur_node = cur_node->next;
	} while (cur_node != NULL);
	printf("\n");
}

void insert_node(Node *head, int k, int v) {
	Node* cur_node = head;
	int i = 0;
	while (i != k - 2) {
		cur_node = cur_node->next;
		i++;
	}
	Node *temp = malloc(sizeof(Node));
	temp -> val = v;
	temp -> next = cur_node -> next;
	cur_node -> next = temp;
}

void delete_node(Node *head, int k) {
	Node* cur_node = head;
	int i = 0;
	while (i != k - 2) {
		cur_node = cur_node->next;
		i++;
	}
	cur_node -> next = cur_node -> next -> next;

}


int main() {
	struct node Node;
	struct node * head = malloc(sizeof(Node));
	
	int temp;
	temp = 1;
	//scanf("%d", &temp);
	head -> val = temp;
	head -> next = NULL;
	head -> next = malloc(sizeof(Node));
	head -> next -> val = 2;
	head -> next -> next = NULL;
	head -> next -> next = malloc(sizeof(Node));
	head -> next -> next -> val = 3;
	head -> next -> next -> next = NULL;
	head -> next -> next -> next = malloc(sizeof(Node));
	head -> next -> next -> next -> val = 4;
	head -> next -> next -> next -> next = NULL;
	print_list(head);
	insert_node(head, 2, 9);
	print_list(head);
	delete_node(head, 2);
	print_list(head);
}