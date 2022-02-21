// Singly Linked List

template <typename Key, typename Value>
class Sll
{
public:
    struct Element
    {
        Key key;
        Value value;
        Element(const Key &key, const Value &value)
        {
            key = key;
            value = value;
        }
    };

private:
    struct Node
    {
        Element element;
        Node *next;
        Node(const Key &key, const Value &value, Node *next = nullptr)
        {
            element.key = key;
            element.value = value;
            next = next;
        }
    } *head = nullptr, *back = nullptr;

    unsigned long long _size = 0;

public:
    class Iterator
    {
        const Sll *parent;
        Node *node;
        Iterator(const Sll *parent, Node *node = nullptr);

    public:
        Iterator(const Iterator &src);
        Iterator(const Iterator &&src);
        Iterator &operator=(const Iterator &src);
        Iterator &operator++();
        Iterator operator++(int);
        Iterator &operator--();
        Iterator operator--(int);
        Iterator operator+(unsigned long long int n);
        Iterator operator-(unsigned long long int n);
        Iterator operator+=(unsigned long long int n);
        Iterator operator-=(unsigned long long int n);
        bool operator==(const Iterator &rhs);
        bool operator!=(const Iterator &rhs);
        bool operator>(const Iterator &rhs);
        bool operator>=(const Iterator &rhs);
        bool operator<(const Iterator &rhs);
        bool operator<=(const Iterator &rhs);
        Element &operator*();
        Element *operator->();
    };
    Sll(const Sll &src);
    Sll(const Sll &&src);
    ~Sll();
    Sll &operator=(const Sll &src);
    Iterator begin();
    Iterator end();
    unsigned long long size(); 
};