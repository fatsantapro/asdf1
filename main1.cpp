

#include <iostream>
#include "bag6.h"
#include "bintree.h"
using namespace std;

void format();

int main()
{
    //S F E V D U J P O T
    
    //TREE CREATION
    cout<< "TREE CREATION" <<endl <<endl;
    bag<char> tree;
    tree.insert('S');
    print(tree.get_rootptr(), 0);
    format();
    tree.insert('F');
    print(tree.get_rootptr(), 0);
    format();
    tree.insert('E');
    print(tree.get_rootptr(), 0);
    format();
    tree.insert('V');
    print(tree.get_rootptr(), 0);
    format();
    tree.insert('D');
    print(tree.get_rootptr(), 0);
    format();
    tree.insert('U');
    print(tree.get_rootptr(), 0);
    format();
    tree.insert('J');
    print(tree.get_rootptr(), 0);
    format();
    tree.insert('P');
    print(tree.get_rootptr(), 0);
    format();
    tree.insert('O');
    print(tree.get_rootptr(), 0);
    format();
    tree.insert('T');
    print(tree.get_rootptr(), 0);
    format();
    
    //TREE DELETION
    cout <<"TREE DELETION" <<endl <<endl;
    bst_remove(tree.get_rootptr(), 'S');
    print(tree.get_rootptr(), 0);
    return 0;
}


void format()
{
    cout <<endl <<"-----------------" <<endl <<endl;
}
