#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

// make a tree -> 1 2 3
typedef struct node{
    int number;
    struct node* left;
    struct node* right;
}node;
void print(node* root);
int main(){
    node* tree = NULL;
    node* n = malloc(sizeof(node));
    if(n == NULL){
        return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;
    n = malloc(sizeof(node));
    if(n == NULL){
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;
    n = malloc(sizeof(node));
    if(n == NULL){
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;

    print(tree);

}
void print(node* root){
    if(root == NULL){
        return;
    }
    printf("%d\n",root->number);
    print(root->left);
    print(root->right);
    free(root);
}

