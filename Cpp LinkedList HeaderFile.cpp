/******************************************************************************

*******************************************************************************/
#include <bits/stdc++.h>


using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(){
        data = 0;
        next = NULL;
    }
  
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist {
    Node* head;
  
public:
    Linkedlist() { head = NULL; }
  
    void insertNode(int);
  
    void printList();
  
    void deleteNode(int);
    
    int lengthlist();
    
    void search(int);
};

int Linkedlist::lengthlist() {
    Node *temp1 = head;
    int ListLen = 0;
    while (temp1 != NULL) {
        temp1 = temp1->next;
        ListLen++;
    }
    
    return ListLen;
}

void Linkedlist::search(int x) {
    int count = 0;
    Node *current = head;
    while (current != NULL) {
        if (current->data == x) {
            cout << x << " Element found in LinkedList at node " << count << endl;
            return;
        }    
        current = current->next;
        count++;
    }
    cout << x << " Element Not found in LinkedList" << endl;
    return;
}

void Linkedlist::deleteNode(int nodeOffset) {
    Node *temp1 = head, *temp2 = NULL;
    int ListLen = 0;
  
    if (head == NULL) {
        cout << "List empty." << endl;
        return;
    }

    while (temp1 != NULL) {
        temp1 = temp1->next;
        ListLen++;
    }
    if (ListLen < nodeOffset) {
        cout << "Index out of range"
             << endl;
        return;
    }

    temp1 = head;

    if (nodeOffset == 1) {

        head = head->next;
        delete temp1;
        return;
    }

    while (nodeOffset-- > 1) {

        temp2 = temp1;

        temp1 = temp1->next;
    }

    temp2->next = temp1->next;

    delete temp1;
}

void Linkedlist::insertNode(int data)
{
    Node* newNode = new Node(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

void Linkedlist::printList()
{
    Node* temp = head;
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Linkedlist list;
    int choice, num;
    p: 
    cout << "\n1. Create Linked List" << endl;
    cout << "\n2. Insert Node into Linked List" << endl;
    cout << "\n3. Delete Node in the Linked List" << endl;
    cout << "\n4. Length of Linked List" << endl;
    cout << "\n5. Search Linked List" << endl;
    cout << "\n6. Print Linked List" << endl;
    
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
           
            cout << "Enter number of Elements: ";
            cin >> num;
    
            for (int i = 0; i < num; i++) {
                 int temp;
                 cout << "Enter element : ";
                 cin >> temp;
                 list.insertNode(temp);
            }
           
        case 2:    
             int nodedata;
             cout << "Enter element : ";
             cin >> nodedata;
             list.insertNode(nodedata);
             cout << "Node Inserted!" << endl;
        
        case 3: 
             int deldata;
             cout << "Enter element : ";
             cin >> deldata;
             list.deleteNode(deldata);
             cout << "Node Deleted!" << endl;
        
        case 4:
             int len;
             len = list.lengthlist();
             cout << "Length of List: " << len << endl;
        
        case 5: 
             int x;
             cout << "Enter element : ";
             cin >> x;
             list.search(x);
        
        case 6:
              cout << "Elements of the list are: ";
              list.printList();
              cout << endl;
    }
    return 0;
}






























