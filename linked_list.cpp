#include <iostream>
#include <cstdlib>

using namespace std;

struct Node	{ //Define a Node struct
	int data;
	Node* next;	//Pointer to the next node
};

struct LinkedList	{ //Define a LinkedList struct
	Node* head; //Pointer to first node
	Node* tail; //Pointer to last node
};

void insertToList(LinkedList* list, int value)	{
	if (list -> head == 0)	{
		//empty list
		Node* n = new Node;
		n->data = value;
		n->next = 0;
		list->head = n;
		list->tail = n;
	}
	else	{
		//Add new node onto the head of the list
		Node* n = new Node;
		n->data = value;
		n->next = list->head;
		list->head = n;
}
}

int main()	{

	LinkedList mylist; //Create a LinkedList struct

	insertToList(&mylist, 10); //Insert 3 nodes into mylist
	insertToList(&mylist, 15);
	insertToList(&mylist, 20);

	cout << mylist.head->next->next->data << endl; //Should print 10

	return 0;

}
