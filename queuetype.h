#ifndef QUEUETYPE_H
#define QUEUETYPE_H

class FullQueue
{};
class EmptyQueue
{};
template <class ItemType>
class QueType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty();
    bool IsFull();
private:
    NodeType *front, *rear;
};
#endif// QUEUETYPE_H
