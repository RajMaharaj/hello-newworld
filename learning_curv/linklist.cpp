#include<iostream>
using namespace std;

	/* 
	struct node{
		int data;
		struct node* next;

	};
	void init_node(struct node*& node, int dat){
	struct node* first;
	first=new (struct node);
	first->data=dat;
	first->next=node;
	node= first;
	}

	void insert_last(struct node* node, int dat){
		struct node* append;
		append= new (struct node);
		append->data=dat;
		append->next=NULL;
		struct node* current = node;
		while(current){
			if (current->next==NULL)
			{
				current->next=append;
				return;
			}
			current=current->next;
		}
	}

void print(struct node* node)
{
	struct node* current=node;
	while(current!=NULL)
	{
			cout<<current->data<< " ";
		current=current->next;
	}
	cout<<endl;
}
int main()
{
	struct node* node = NULL;
 init_node(node, 8);
 print(node);
 insert_last(node, 1);
 print(node);
 insert_last(node, 7);
 print(node);
 insert_last(node, 8);
 print(node); 
 return 0;
}	*/



// same inpplementation Using different format of pointers "*"
 struct Node {
	int data;
	Node* next;
};

// only for the 1st Node
void initNode(struct Node *head,int n){
	head->data = n;
	head->next =NULL;
}

// apending
void addNode(struct Node *head, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;

	Node *cur = head;
	while(cur) {
		if(cur->next == NULL) {
			cur->next = newNode;
			return;
		}
		cur = cur->next;
	}
}
void display(struct Node *head) {
	Node *list = head;
	while(list) {
		cout << list->data << " ";
		list = list->next;
	}
	cout << endl;
	cout << endl;
}

	int main() 
{
	//struct Node *newHead;
	struct Node *head = new Node;
	
	initNode(head,10);
	display(head);

	addNode(head,20);
	display(head);

	addNode(head,30);
	display(head);

	addNode(head,35);
	display(head);
}