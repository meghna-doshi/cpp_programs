#include <iostream>
#include <string>
#include <stack>

using namespace std;


struct Node
 {
     string _val;
     Node* left;
     Node* right;
     Node (string val); 
 };  
     
 Node::Node (string val)
 {   
     _val = val;
     right = NULL;
     left = NULL;
 }   

//-----------------------------
//Preoder traversal using stack
//-----------------------------
void preorder (Node* node)
{
    stack<Node*> s;
    s.push (node);
    while (!s.empty())
    {
        Node* t = s.top ();
        s.pop();
        cout << t->_val << endl;
        if (t->right != NULL) s.push (t->right);
        if (t->left != NULL) s.push (t->left);
    }
}

int preorder_recursion (Node* node)
{
    static int num_nodes = 0;
    if (node == NULL) return 0;
    cout << node->_val << endl;
    num_nodes++;
    if (node->left != NULL) preorder_recursion (node->left);
    if (node->right != NULL) preorder_recursion (node->right);
    return num_nodes;
}


int main() {
    Node* a = new Node ("a");
    Node* b = new Node ("b");
    Node* c = new Node ("c");
    Node* d = new Node ("d");
    Node* e = new Node ("e");
    Node* f = new Node ("f");
    Node* g = new Node ("g");
 
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
    d->right = g;
 
    cout << "Pre order traversal using stack" << endl;
    preorder(a);
    cout << "Pre order traversal using recursion" << endl;
    int num = preorder_recursion (a);
    cout << "number of nodes = " << num << endl;

    return 0;
}
