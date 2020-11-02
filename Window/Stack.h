#ifndef STACK_H
#define STACK_H

#ifndef NULL
#define NULL    0
#endif

template <typename T>
class Stack
{
private:
    class StackNode
    {
    public:
        T Data;
        StackNode* pNext;

        StackNode(T data) : Data(data), pNext(NULL) {}
    };

private:
    // the head pointer of the stack
    StackNode* m_pTop;

public:
    Stack();
    ~Stack();

    /// <summary>
    /// push the data into this stack
    /// </summary>
    ///
    /// <param name="data">
    /// a data to push into this stack
    /// </param>
    void Push(T data);
    /// <summary>
    /// pop(remove) the last-in data from this stack
    /// </summary>
    void Pop();
    /// <summary>
    /// get the last-in data of this stack
    /// </summary>
    /// 
    /// <returns>
    /// the last-in data of this stack
    /// </returns>
    T Top();
    /// <summary>
    /// check whether this stack is empty or not.
    /// </summary>
    ///
    /// <returns>
    /// true if this stack is empty.
    /// false otherwise.
    /// </returns>
    bool IsEmpty();
};

#endif
