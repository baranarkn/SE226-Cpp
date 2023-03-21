#include <iostream>
#include <new>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;
    int count;

public:
    Queue() {
        front = NULL;
        rear = NULL;
        count = 0;
    }

    bool isEmpty() {
        return (front == NULL);
    }

    void enqueue(int x) {
        Node* temp = new Node;
        temp->data = x;
        temp->next = NULL;
        if (front == NULL) {
            front = temp;
        }
        else {
            rear->next = temp;
        }
        rear = temp;
        count++;
    }

    int dequeue() {
        int x;
        Node* temp;
        if(isEmpty()) {
            cout << "Queue is empty" << endl;
            return 0;
        }
        else{
            temp = front;
            x = temp->data;
            front = front->next;
            delete temp;
            count--;
            return x;
        }
    }

    int top() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return 0;
        }
        else {
            return front->data;
        }
    }

    int size() {
        return count;
    }
};

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(15);
    queue.enqueue(20);
    queue.enqueue(25);
    queue.enqueue(30);

    cout << "Size of Queue: " << queue.size() << endl;
    cout << "Top element: " << queue.top() << endl;
    queue.dequeue();

    cout << "Size of Queue: " << queue.size() << endl;
    cout << "Top element: " << queue.top() << endl;
    queue.dequeue();

    cout << "Size of Queue: " << queue.size() << endl;
    cout << "Top element: " << queue.top() << endl;
    
    return 0;
}
