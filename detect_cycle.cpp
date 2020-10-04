#include<bits/stdc++.h>
#include<algorithms>
#define lli long long int
using namespace std;
//creates a node that consist of data value and a next pointer;
struct Node
{
	int data;
	struct Node* next;
};
//create a new node;
Node* getNode(int val)
{
	Node* temp = new Node;
	temp->data = val;
	temp->next = NULL;
	return temp;
}
//check whether the linked list contain a cycle or not, if it has a cycle then the function will return
//corresponding data value;
void check_cycle(Node* head)
{
	Node *p, *q;
	p = head;
	q = head;
	bool flag = false;
	//take two pointer where one pointer will go one step forward and another will go two step forward
	//untill any of them become null or both points to same note;
	while(p and q and q->next)
	{
		p = p->next;
		q = q->next->next;
		if(p == q)		//this condition will execute if the link list have a cycle;
		{
			flag = true;
			break;
		}
	}
	if(!flag)	//if the link list don't have a cycle;
	{
		cout << "Link list does not have a cycle:: " << endl;
		return;
	}
	p = head;
	//traverse one pointer from starting node and another from joining node and each node go one step forward;
	while(p != q)
	{
		p = p->next;
		q = q->next;
	}
	cout << "Cycle present at number:: " << q->data << endl;
}
int main()
{
	Node* head = NULL;
	Node* temp;
	Node* r;
	temp = head;
	for(int i = 0; i < 10; i++)
	{
		if(i == 5)
			r = temp;
		if(!temp)
		{
			head = getNode(i*10);
			temp = head;
		}
		else
		{
			temp->next = getNode(i*10);
			temp = temp->next;
		}
	}
	temp->next = r;
	//check cycle in the link list;
	check_cycle(head); // calling the function which checks if there is a cycle.
	return 0;
}
