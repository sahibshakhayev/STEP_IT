
#include <iostream>
using namespace std;

#define MAX 77
template <typename T>
class MyDeque {
    T arr[MAX];
    int front;
    int rear;
    int size;

public:
    MyDeque(int size) {
        front = -1;
        rear = 0;
        this->size = size;
    }
    void insertfront(T key);
    void insertrear(T key);
    void deletefront();
    void deleterear();
    bool isFull();
    bool isEmpty();
    T getFront();
    T getRear();
};
template <typename T>
bool MyDeque<T>::isFull() {
    return ((front == 0 && rear == size - 1) ||
        front == rear + 1);
}
template <typename T>
bool MyDeque<T>::isEmpty() {
    return (front == -1);
}
template <typename T>
void MyDeque<T>::insertfront(T key) {
    if (isFull()) {
        cout << "Full\n"
            << endl;
        return;
    }

    if (front == -1) {
        front = 0;
        rear = 0;
    }

    else if (front == 0)
        front = size - 1;

    else
        front = front - 1;

    arr[front] = key;
}
template <typename T>
void MyDeque<T>::insertrear(T key) {
    if (isFull()) {
        cout << " Full\n " << endl;
        return;
    }

    if (front == -1) {
        front = 0;
        rear = 0;
    }

    else if (rear == size - 1)
        rear = 0;

    else
        rear = rear + 1;

    arr[rear] = key;
}
template <typename T>
void MyDeque<T>::deletefront() {
    if (isEmpty()) {
        cout << "Is Empty\n"
            << endl;
        return;
    }

    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else if (front == size - 1)
        front = 0;

    else
        front = front + 1;
}
template <typename T>
void MyDeque<T>::deleterear() {
    if (isEmpty()) {
        cout << " Is Empty\n"
            << endl;
        return;
    }

    if (front == rear) {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
        rear = size - 1;
    else
        rear = rear - 1;
}
template <typename T>
T MyDeque<T>::getFront() {
    if (isEmpty()) {
        cout << " Is Empty\n"
            << endl;
        return -1;
    }
    return arr[front];
}
template <typename T>
T MyDeque<T>::getRear() {
    if (isEmpty() || rear < 0) {
        cout << " Is Empty\n"
            << endl;
        return -1;
    }
    return arr[rear];
}

int main() {
    MyDeque<int> dq(4);

    
    dq.insertrear(5);
    dq.insertrear(11);

    cout << dq.getRear() << endl;

    dq.deleterear();
    

    

    dq.insertfront(8);

    cout << "First Element: " << dq.getFront() << endl;

    dq.deletefront();
    cout << "First Element after delete: " << dq.getFront() << endl;
    cout << dq.getFront() << endl;
}
