class MyCircularQueue {
private:
    struct Node {
        int data;
        Node* next;
        Node(int val) : data(val), next(nullptr) {}
    };

    Node* front; // Pointer to the front of the queue
    Node* rear;  // Pointer to the rear of the queue
    int size;    // Maximum size of the queue
    int count;   // Current number of elements in the queue

public:
    MyCircularQueue(int k) {
        size = k;
        front = rear = nullptr;
        count = 0;
    }
    
    bool enQueue(int value) {
        if (isFull()) {
            return false;
        }

        Node* newNode = new Node(value);

        if (isEmpty()) {
            front = rear = newNode;
            rear->next = front; // Create circular link
        } else {
            rear->next = newNode;
            rear = newNode;
            rear->next = front; // Maintain circular link
        }

        count++;
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) {
            return false;
        }

        if (front == rear) { // Only one element in the queue
            delete front;
            front = rear = nullptr;
        } else {
            Node* temp = front;
            front = front->next;
            rear->next = front; // Maintain circular link
            delete temp;
        }

        count--;
        return true;
    }
    
    int Front() {
        return isEmpty() ? -1 : front->data;
    }
    
    int Rear() {
        return isEmpty() ? -1 : rear->data;
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
        return count == size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
