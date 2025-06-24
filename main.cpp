#include "BinTree.h"

int main() {

    BinTree<int> tree;

    tree.insert(14);
    tree.insert(67);
    tree.insert(47);
    tree.insert(7);
    tree.insert(12);
    tree.insert(5);
    tree.insert(45);
    tree.insert(64);
    tree.insert(72);
    tree.insert(79);
    tree.insert(12);


    auto p = tree.search(72);
    if(p == nullptr) cout << "Not found!\n";
    else p->showNode();

    tree.showTree();

    return 0;
}
