#include <stdio.h>

class Node
{
public:
    Node(int val, Node *prev_node, Node *next_node)
    {
        m_val = val;
        prev = prev_node;
        next = next_node;
    }

    int get_val()
    {
        return m_val;
    }
public:
    Node *next;
    Node *prev;
private:
    int m_val;
};

class LinkedList
{
public:
    LinkedList()
    {
        m_first = NULL;
        m_last = NULL;
        m_len = 0;
    }

    ~LinkedList()
    {
        Node *current_node = m_first;
        for (size_t i = 0; i < m_len; ++i)
        {
            Node *node_to_delete = current_node;
            current_node = current_node->next;
            delete node_to_delete;
        }
    }

    void append(int val)
    {
        if (m_last == NULL)
        {
            Node *new_node = new Node(val, NULL, NULL);
            m_first = new_node;
            m_last = new_node;
        }
        else
        {
            Node *new_node = new Node(val, m_last, NULL);
            m_last->next = new_node;
            m_last = new_node;
        }

        m_len++;
    }

    /**
    * Insert an element on `index` position.
    */
    void insert(int val, size_t index)
    {
        // TODO: YOUR CODE HERE
    }

    /**
    * Insert an element after the given node.
    */
    void insert(int val, Node *node)
    {
        // TODO: YOUR CODE HERE
    }

    /**
    * Delete the given node and return the deleted value.
    */
    int del(Node *node)
    {
        // TODO: YOUR CODE HERE
        return 0;
    }

    /**
    * Delete an element on the i-th position and return the deleted value.
    */
    int del(size_t i)
    {
        // TODO: YOUR CODE HERE
        return 0;
    }

    int operator[](size_t i)
    {
        if (m_len == 0)
        {
            return -666;
        }

        Node *current_node = m_first;
        for (size_t j = 0; j < i; ++j)
        {
            current_node = current_node->next;
        }

        return current_node->get_val();
    }

    size_t length()
    {
        return m_len;
    }

    void dump()
    {
        printf("\n===========================LIST DUMP===========================\n");
        printf("First node [%p]\nLast node [%p]\nsize %lu\n", m_first, m_last, m_len); 

        Node *current_node = m_first;
        for (int i = 0; i < m_len; ++i)
        {
            printf("Node [%p] = %d; next [%p], prev [%p]\n", current_node, current_node->get_val(), current_node->next, current_node->prev);
            current_node = current_node->next;
        }
        printf("===============================================================\n");
    }
private:
    Node *m_first;
    Node *m_last;
    size_t m_len;
};

int main()
{
    LinkedList list;

    list.dump();
    list.append(10);
    list.dump();
    list.append(20);
    list.dump();
    list.append(30);
    list.dump();
    list.append(40);
    list.dump();

    for (size_t i = 0; i < 4; ++i)
    {
        printf("[%lu] = %d\n", i, list[i]);
    }

    return 0;
}
