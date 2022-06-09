//
//  BST.hpp
//  BST
//
//  Created by Marvin Augustin on 5/31/22.
//

#ifndef BST_hpp
#define BST_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;

#endif /* BST_hpp */

class BST{
private:
    
    struct node
    {
        int key;
        node* left;
        node* right;
    };
    
    node* root;
    
    void AddLeafPrivate(int key, node* Ptr);
    void PrintInOrderPrivate(node* Ptr);
    
public:
    
    BST();
    node* CreateLeaf(int key);
    void AddLeaf(int key);
    void PrintInOrder();
    
};
