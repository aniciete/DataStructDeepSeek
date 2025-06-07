#ifndef stack_queue_h
#define stack_queue_h
struct Queuenode{
    int value;
    Queuenode *next;
};
class Dynamicintqueue{
private:
    Queuenode *front;
    Queuenode *rear;
    int numItems;
public:
Dynamicintqueue();
~Dynamicintqueue();
void enqueue(int);
void dequeue(int &);
bool isEmpty()const;
void clear();
void display() const;
};
#endif
