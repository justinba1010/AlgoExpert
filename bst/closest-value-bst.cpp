/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

class BST {
public:
  int value;
  BST *left;
  BST *right;

  BST(int val);
  BST &insert(int val);
};

int traverse(BST *tree, int target, int closest) {
    if (tree == NULL) {
        return closest;
    }
    int val = tree->value;
    if (val == target) {
        return val;
    } else if (val < target) {
        int c = target - val < abs(closest - target) ? val : closest;
        return traverse(tree->right, target, c);
    } else if (val > target) {
        int c = (val - target < abs(closest - target)) ? val : closest;
        return traverse(tree->left, target, c);
    }
    return closest;
}

int findClosestValueInBst(BST *tree, int target) {
  // Write your code here.
  return traverse(tree, target, tree->value);
}
