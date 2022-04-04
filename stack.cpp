#include <iostream>
#include <string>

using namespace std;

//First In, Last Out
//Push -> add data to top of stack
//Pop -> remove data from top of stack

struct Node { 
    string data; //holds data for the stack
    Node* next; //points to the next node in the stack
};

class Stack {
    Node* top;
    public:
        Stack(); //constructor -> create new (empty) stack
        bool isEmpty(); //check if stack is empty
        void push(string d); //push new node to top of stack
        string pop(); //remove node from top of stack
        string toString(); //print contents of stack
};

Stack::Stack(){
    top = NULL; //empty stack, top points to null
}

bool Stack::isEmpty(){
    return (top == NULL); //will return true is stack is empty
}

void Stack::push(string d){
    Node* newtop = new Node; //dynamically creating a new node

    newtop->data = d;
    newtop->next = top; //point to the current top of the node

    top = newtop; //makes new node the top of the stack 
}

string Stack::pop(){
    if(isEmpty()){
        return "Cannot pop from empty Stack";
    }
    else {
        string value = top->data;
        Node* oldtop = top; //oldtop is a temporary variable
        top = top->next; //reassign the top of the stack to the second top element

        delete oldtop;
        return value; //holds value of popped node
    }
}

string Stack::toString(){ //print the stack in human-readable format
    string result = "(top) -> "; //(top) -> element1 -> element2 -> NULL
    Node* current = top;
    while (current != NULL) {
        result += current->data + " -> ";
        current = current->next; //reassigns current node to the next node in the stack
    }
    result += "NULL";
    return result;
}

int main(){
    //driver code
    Stack *s = new Stack();
    cout << s->toString() << endl;
    s -> push("Yoda"); //push Yoda to top of stack
    s -> push("Chewbacca");
    s -> push("R2D2"); 
    cout << s->toString() << endl; //(top) -> R2D2 -> Chewbacca -> Yoda -> NULL
    s -> pop();
    cout << s->toString() << endl; //(top) -> Chewbacca -> Yoda -> NULL

    delete s;
    
    return 0;
}