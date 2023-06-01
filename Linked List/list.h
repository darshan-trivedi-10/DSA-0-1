// Forward Declarastion
using namespace std;
class list;
class node
{
private:
    int data;

public:
    node *next;
    node(int data)
    {
        this->data = data;
        next = nullptr;
    }

    int getdata()
    {
        return data;
    }

    friend class list;

    ~node()
    {
        if (next != nullptr)
        {
            delete next;
        }
        // cout << "Deleting node with data " << data << endl;
    }
};

class list
{
    node *head;
    node *tail;

    int searchHelper(node *start, int key)
    {
        // Base Case :
        if (start == nullptr)
        {
            return -1;
        }
        if (start->data == key)
        {
            return 0;
        }
        // Remaining part of the Linked list
        int subIndex = searchHelper(start->next, key);
        if (subIndex == -1)
        {
            return -1;
        }
        else
        {
            return subIndex + 1;
        }
    }

public:
    list()
    {
        head = nullptr;
        tail = nullptr;
    }

    node *begin()
    {
        return head;
    }

    void push_front(int data)
    {
        if (head == nullptr)
        {
            node *n = new node(data);
            head = n, tail = n;
        }
        else
        {
            node *n = new node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data)
    {
        if (head == nullptr)
        {
            node *n = new node(data);
            head = tail = n;
        }
        else
        {
            node *n = new node(data);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
            return;
        }

        // Otherwise
        node *temp = head;
        for (int jump = 0; jump < (pos - 1); jump++)
        {
            temp = temp->next;
        }

        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }

    void pop_front()
    {
        if (head != nullptr)
        {
            node *temp = head;
            head = head->next;
            temp->next = nullptr;
            delete temp;
        }
    }

    // Homework : pop_back, remove(pos)
    void pop_back()
    {
        node *temp = head;
        if (head == nullptr)
        {
            delete head;
        }
        if (temp->next == nullptr)
        {
            // pop_front();
            delete head;
        }
        while ((temp->next)->next != nullptr)
        {
            temp = temp->next;
        }

        node *n = temp->next;
        temp->next = nullptr;
        delete n;
    }

    // Tommorow
    void remove(int position)
    {
        if (position == 0)
        {
            pop_front();
        }

        node *temp = head;

        for (int jump = 0; jump < (position - 1); jump++)
        {
            temp = temp->next;
        }

        node *n = (temp->next);
        temp->next = n->next;
        n->next = nullptr;
        delete n;
    }

    void *reverse(node *&head)
    {
        node *curr = head;
        node *prev = nullptr;
        node *n;
        while (curr != nullptr)
        {
            // Save the next node
            n = curr->next;
            // Make current node point to previous
            curr->next = prev;
            // Update previous and current take them 1 step forward
            prev = curr;
            curr = n;
        }

        head = prev;
    }
    int search(int key)
    {
        node *temp = head;
        int index = 0;
        while (temp != nullptr)
        {
            if (temp->getdata() == key)
            {
                return index;
            }

            temp = temp->next;
            index++;
        }

        return -1;
    }

    int recursive_search(int key)
    {
        int idx = searchHelper(head, key);
        return idx;
    }
    ~list()
    {
        if (head != nullptr)
        {
            delete head;
            head = nullptr;
        }
    }
};