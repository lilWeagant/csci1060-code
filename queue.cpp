#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Node {
    string data;
    Node* next;
};

class Queue {
    Node *front;
    public:
        Queue();
        ~Queue(); //destructor
        bool isEmpty();
        void enqueue(string d);
        string dequeue();
        string toString();
};

Queue::Queue(){
    front = NULL;
}

Queue::~Queue(){
    //clean up memory used by dynamic variables
    //called automatically when program terminates
    while(!isEmpty()){
        cout << "deleting node" << endl;
        dequeue();
    }
}

bool Queue::isEmpty(){
    return (front == NULL);
}

void Queue::enqueue(string d){ //adds node to the back queue
    if (isEmpty()){ //if queue is empty
        front = new Node;
        front->data = d;
        front->next = NULL;
    } else { //if adding node to non-empty queue
        Node *current = front; //set current node equal to front node
        while (current->next != NULL) { //while not at the back of the queue
            current = current->next;
        }
        current->next = new Node; //have the back node point to a new node instead of null
        current->next->data = d;
        current->next->next = NULL; //new back of the queue
    }
}

string Queue::dequeue(){ //remove the node at the front of the queue
    if (isEmpty()){
        return "Queue is already empty";
    } else {
        Node* current = front; //temporary node equal to front node
        string value = current->data; //save data from the front node into a variable
        front = current->next; //redefine the front node as the next node in the queue
        delete current; //delete the current node (old front node)
        return value; //return the value from the deleted node
    }
}

string Queue::toString(){
    //print queue back to front
    string result = "(back) -> ";
    Node *current = front;
    vector<string> queue_rep; //vector to hold queue elements in reverse order (front to back)
    while (current != NULL){
        queue_rep.push_back(current->data); //inserts data into the vector
        current = current->next;
    }
    for(int i = queue_rep.size()-1; i >= 0; i--){
        result += queue_rep[i] + " -> "; //treat our vector just like an array
    }
    result += "(front)";
    return result;
}

int main() {
    Queue *q = new Queue();
    cout << q->toString() << endl;
    q->enqueue("Apple");
    q->enqueue("Banana");
    q->enqueue("Orange");
    cout << q->toString() << endl; //print queue
    cout << q->dequeue() << endl; //remove element from queue
    cout << q->toString() << endl; //print queue
    delete q;
}