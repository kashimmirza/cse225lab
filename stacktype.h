#ifndef STACKTYPE_H
#define STACKTYPE_H


class FullStack
{};
class EmptyStack
{};
template <class ItemType>
class StackType
{
struct NodeType
{
ItemType info;
NodeType* next;
};
public:
StackType();
~StackType();
void Push(ItemType);
void Pop();
ItemType Top();
bool IsEmpty();
bool IsFull();
private:
NodeType* topPtr;
};
#endif
 // STACKTYPE_H
