#include "iostream"

using namespace std;

struct Node {
	int data;
	struct Node* next;
};
struct Node* head;

void insertAtEnd(int x) {
	// create node
	Node* temp = new Node();
	temp -> data = x;
	temp -> next = NULL;

	// traverse to end of list
	Node* temp1 = head;
	if (temp1 == NULL) {
		// first node
		head = temp;
	}
	else {
	while(temp1 -> next != NULL) {
		temp1 = temp1 -> next;
	}

	// insert node
	temp1 -> next = temp;
	}
}

void insertAtBeginning(int x) {
	// create node
	Node* temp = new Node();
	temp -> data = x;
	temp -> next = head;

	// insert node
	head = temp;
}

void insertAtP(int x, int p) {
	// create node
	Node* temp = new Node();
	temp -> data = x;
	temp -> next = head;

	if (p == 1) {
		temp -> next = head;
		head = temp;
		return;
	}

	int pos = 0;
	Node* prev = head;
	while(pos < p - 2) {
		prev = prev -> next;
		pos++;
	}

	temp -> next = prev -> next;
	prev -> next = temp;
}

void deleteAtP(int p) {
	int pos = 0;
	Node* temp1 = head;

	if (p == 1) {
		head = temp1 -> next;
		delete temp1;
		return;
	}

	while(pos < p - 2) {
		temp1 = temp1 -> next;
		pos++;
	}

	// temp1 is (n - 1)th node
	Node* temp2 = temp1 -> next;
	temp1 -> next = temp2 -> next;
	delete temp2;
}

void printList() {
	Node* temp = head;
	while(temp != NULL) {
		cout << temp -> data << ' ';
		temp = temp -> next;
	}
	cout << '\n';
}

int main() {
	head = NULL;

	int n, x, p;
	cin >> n;
	while(n--) {
		cin >> x >> p;
		insertAtP(x, p);
	}

	printList();
	deleteAtP(2);
	printList();

	return 0;
}