#include <iostream>

struct Package
{
    std::string packageID;
    std::string destinationCity;
    int dimensions[3];
};

struct Node
{
    Package data;
    Node *next;
};

Node *top = NULL;

void push(Package p)
{
    Node *n = new Node;
    n->data = p;
    n->next = top;
    top = n;
}

void pop()
{
    if (top == NULL)
        return;
    Node *t = top;
    top = top->next;
    delete t;
}

int main()
{
    Package p1 = {"P1", "Istanbul", {1, 2, 3}};
    Package p2 = {"P2", "Ankara", {4, 5, 6}};
    Package p3 = {"P3", "Izmir", {7, 8, 9}};

    push(p1);
    push(p2);
    push(p3);

    std::cout << "STACK:\n";

    pop();

    return 0;
}
