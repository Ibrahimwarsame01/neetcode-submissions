class MyCircularQueue {
private:
     vector<int> Cqueue;
     int count = 0;
     int front ;
     int rear ;
     int capacity;
public:
    MyCircularQueue(int k) {
        Cqueue.resize(k);   
        front = 0;
        rear = 0;
        capacity = k;
    }
    
    bool enQueue(int value) {
        if(count != capacity){
            Cqueue[rear] = value;
            rear++;
              if(rear == capacity){
                rear = 0;
            }
            count++;
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(count != 0){
            front++;
            if(front == capacity){
                front = 0;
            }
            count--;
            return true;
        }
        return false;
        
    }
    
    int Front() {
         if(count == 0){
            return -1;
        }
        return Cqueue[front];
    }
    
    int Rear() {
        if(count == 0){
            return -1;
        }
        return Cqueue[(rear - 1 + capacity) % capacity ];
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
        return count == capacity;
    }
};