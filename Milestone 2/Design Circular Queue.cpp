class MyCircularQueue {
public:
    int front, rear, sz, len = 0;
    vector<int> CirQue;

    MyCircularQueue(int k) {
        sz = k;
        front = 0;
        rear = 0;
        CirQue.assign(k,-1);
    }

    bool enQueue(int value) {
        if(isFull())
            return false;
        len++;
        CirQue[rear] = value;
        rear++;
        rear %= sz;
        return true;
    }

    bool deQueue() {
        if(isEmpty())
            return false;
        len--;
        CirQue[front] = -1;
        front = (front + 1) % sz;
        return true;
    }

    int Front() {
        if(isEmpty())
            return -1;
        return CirQue[front];
    }

    int Rear() {
        if(isEmpty())
            return -1;
        int index = rear-1;
        if(index < 0)
            index = index + sz;
        return CirQue[index];
    }

    bool isEmpty() {
        if(len == 0)
            return true;
        return false;
    }

    bool isFull() {
        if(len == sz)
            return true;
        return false;
    }
};
