//
//  BST.cpp
//  BST
//
//  Created by Marvin Augustin on 5/31/22.
//

#include "BST.hpp"

BST::BST(){
    root = NULL;//root pointer pointing to NULL
}
BST::node* BST::CreateLeaf(int key)
{
    node* n = new node;
    n->key = key;//n-> refers to key inside of the node
    n->left = NULL;
    n->right = NULL;
    
    return n;
}

void BST::AddLeaf(int key)
{
    AddLeafPrivate(key, root);
}

void BST::AddLeafPrivate(int key, node* Ptr)
{
    if(root == NULL)
    {
        root = CreateLeaf(key);
    }
    else if (key < Ptr->key)//if the key value that we want to add is less then our node
    {
        if(Ptr->left != NULL)//if their is a value on our left
        {
            AddLeafPrivate(key, Ptr->left);
        }
        else//if left node is not pointing to anything
        {
            Ptr->left = CreateLeaf(key);
        }
    }
    else if (key > Ptr->key)//if the value of our key is greater then the current node
    {
        if(Ptr->right !=NULL)//and the right node points tos omething
        {
            AddLeafPrivate(key, Ptr->right);
        }
        else//if it does not hold anything
        {
            Ptr->right = CreateLeaf(key);//create a new node with our key
        }
    }
    else//If the key is equal to a value in the tree
    {
        cout << "They key " << key << " has already been added to the tree";
    }
}

void BST::PrintInOrder()
{
    PrintInOrderPrivate(root);
}

void BST::PrintInOrderPrivate(node* Ptr)
{
    if(root != NULL)//if there's something in the tree
    {
        if(Ptr->left != NULL)//if left pointer points to something
        {
            PrintInOrderPrivate(Ptr->left);
        }
        cout << Ptr->key << " ";
        if(Ptr->right != NULL)//if right pointer points to something
        {
            PrintInOrderPrivate(Ptr->right);
        }
    }
    else{
        cout << "The tree is empty\n";
    }
}
