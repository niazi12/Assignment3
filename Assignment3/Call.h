#ifndef CALL_H_INCLUDED
#define CALL_H_INCLUDED

lass FullQueue
{};
class EmptyQueue
{};
template<class ItemType> class queueType
{
public:
    queueType();
    queueType(int max);
    ~queueType();
    void MakeEmpty();
    bool IsEmpty();
    bool IsFull();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    void printQueue();
    void ReplaceItem(int oldItem,int newItem);
private:
    int front;
    int rear;
    ItemType* items;
    int maxQue;
};

#endif // CALL_H_INCLUDED
