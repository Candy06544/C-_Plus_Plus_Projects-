#include <iostream>
using namespace std;

struct node {
    int myNums;
    node* left;
    node* right;

    // Constructor to initialize a node with a value
    node(int value) : myNums(value), left(nullptr), right(nullptr) {}
};

int main() {
    node* root = new node(15);    // Syntax error fixed: added semicolon
    root->left = new node(10);    // Syntax error fixed: added semicolon
    root->right = new node(20);   // Syntax error fixed: added semicolon

    root->left->left = new node(8);
    root->left->right = new node(12);

    // Corrected syntax for output
    cout << "Root node: " << root->myNums << endl;
    cout << "Left child of root: " << root->left->myNums << endl;
    cout << "Right child of root: " << root->right->myNums << endl;
    cout << "Left child of node " << root->left->myNums << ": " << root->left->left->myNums << endl;
    cout << "Right child of node " << root->left->myNums << ": " << root->left->right->myNums << endl;

    return 0;
}
