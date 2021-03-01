/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

using namespace std;

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

int nodeDepths(BinaryTree *root, int currDepth) {
    if (root == NULL) {
        return 0;
    }
    return currDepth + nodeDepths(root->left, currDepth + 1) + nodeDepths(root->right, currDepth + 1);
}

int nodeDepths(BinaryTree *root) {
  // Write your code here.
  return nodeDepths(root, 0);
}
