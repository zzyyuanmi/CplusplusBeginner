#include "BinarySearchTree.h"

int main(int argc, char *argv[])
{
    BinarySearchTree A;
    A.insert(16);
    A.insert(8);
    A.insert(24);
    A.insert(4);
    A.insert(12);
    A.insert(20);
    A.insert(28);
    A.insert(2);
    A.insert(6);
    A.insert(10);
    A.insert(14);
    A.insert(18);
    A.insert(22);
    A.insert(26);
    A.insert(30);
    A.insert(1);
    A.insert(3);
    A.insert(5);
    A.insert(7);
    A.insert(9);
    A.insert(11);
    A.insert(13);
    A.insert(15);
    A.insert(17);
    A.insert(19);
    A.insert(21);
    A.insert(23);
    A.insert(25);
    A.insert(27);
    A.insert(29);
    A.insert(31);
    
    A.updateDepthandPos();
    A.display();

    BinarySearchTree::Node *r = A.getRoot();
    std::cout << "delete " << r->data << std::endl;
    A.del(r);
    A.updateDepthandPos();
    A.display();

    r = A.getRoot();
    std::cout << "delete " << r->left->data << std::endl;
    A.del(r->left);
    A.updateDepthandPos();
    A.display();

    std::cout << "delete " << r->left->right->left->data << std::endl;
    A.del(r->left->right->left);
    A.updateDepthandPos();
    A.display();
    return 0;
};
