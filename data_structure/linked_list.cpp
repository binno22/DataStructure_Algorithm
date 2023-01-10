#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
typedef struct Node* node;

node head;

node makeNode(int x){
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

void insert_first(node &head,int x){
	node tmp = makeNode(x);
	if(head == NULL) head = tmp;
	else{
		tmp->next = head;
		head = tmp;
	}
}

void printList(node tmp){
	while(tmp != NULL){
		cout << tmp->data << ' ';
		tmp = tmp->next;
	}
}

int main(int argc, char const *argv[]){
	head = NULL;
	insert_first(head,5);
	insert_first(head,10);
	insert_first(head,7);
	printList(head);
	return 0;
}
