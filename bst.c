#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

Node* createNode(Kendaraan data){

    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node* insertBST(Node* root, Kendaraan data){

    if(root == NULL){
        return createNode(data);
    }

    if(data.id < root->data.id){
        root->left = insertBST(root->left, data);
    }

    else if(data.id > root->data.id){
        root->right = insertBST(root->right, data);
    }

    return root;
}

Node* searchBST(Node* root, int id){

    if(root == NULL || root->data.id == id){
        return root;
    }

    if(id < root->data.id){
        return searchBST(root->left, id);
    }

    return searchBST(root->right, id);
}

void inorder(Node* root){

    if(root != NULL){

        inorder(root->left);

        printf("ID      : %d\n", root->data.id);
        printf("Plat    : %s\n", root->data.plat);
        printf("Pemilik : %s\n", root->data.nama);
        printf("VIP     : %s\n", root->data.vip ? "Ya" : "Tidak");

        printf("------------------------\n");

        inorder(root->right);
    }
}

Node* minValueNode(Node* node){

    Node* current = node;

    while(current && current->left != NULL){
        current = current->left;
    }

    return current;
}

Node* deleteBST(Node* root, int id){

    if(root == NULL){
        return root;
    }

    if(id < root->data.id){
        root->left = deleteBST(root->left, id);
    }

    else if(id > root->data.id){
        root->right = deleteBST(root->right, id);
    }

    else{

        if(root->left == NULL){

            Node* temp = root->right;
            free(root);

            return temp;
        }

        else if(root->right == NULL){

            Node* temp = root->left;
            free(root);

            return temp;
        }

        Node* temp = minValueNode(root->right);

        root->data = temp->data;

        root->right = deleteBST(root->right, temp->data.id);
    }

    return root;
}
