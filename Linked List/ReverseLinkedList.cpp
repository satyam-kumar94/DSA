#include <bits/stdc++.h>
using namespace std;
struct node
{

    int data;
    struct node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
struct linkedlist
{
    node *head;
    linkedlist() { head = NULL; }

    void reverse()
    {
        node *current = head;
        node *prev = NULL, *next = NULL;

        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    void print()
    {
        struct node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void push(int data)
    {
        node *temp = new node(data);
        temp->next = head;
        head = temp;
    }
};
int main()
{
    linkedlist ll;
    ll.push(28);
    ll.push(4);
    ll.push(15);
    ll.push(20);
    ll.push(85);
    cout << "Given Linked List: " << endl;
    ll.print();
    ll.reverse();
    cout << endl << "Reversed Linked List: " << endl;
    ll.print();
    return 0;
}
