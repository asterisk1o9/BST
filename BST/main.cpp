//
//  main.cpp
//  BST
//
//  Created by Marvin Augustin on 5/31/22.
//

#include "BST.hpp"
#include <iostream>


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int TreeKeys[16] = {50,76,21,4,32,64,15,52,14,100,83,2,3,70,87,80};
    BST myTree;
    
    cout << "Print the tree in order\nBefore adding numbers" << "\n";
    
    myTree.PrintInOrder();
    
    for(int i = 0; i < 16; i++)
    {
        myTree.AddLeaf(TreeKeys[i]);
    }
    
    cout << "Printing the tree in order\nAfter adding number\n";
    
    myTree.PrintInOrder();
    
    cout << "\n";
    return 0;
}
