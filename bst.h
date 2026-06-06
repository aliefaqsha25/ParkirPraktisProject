#ifndef BST_H
#define BST_H

#include "kendaraan.h"

typedef struct Node{
    Kendaraan data;
    struct Node *left;
    struct Node *right;
} Node;

Node* createNode(Kendaraan data);
Node* insertBST(Node* root, Kendaraan data);
Node* searchBST(Node* root, int id);
void inorder(Node* root);

Node* minValueNode(Node* node);
Node* deleteBST(Node* root, int id);

#endif
