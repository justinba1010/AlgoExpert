/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

using namespace std;

// This is the class of the input root. Do not edit it.
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



void branches(BinaryTree *currentBranch, vector<int> &vec, int sum) {
    // Is End
    if (currentBranch == NULL) {
        return;
    }
    if (currentBranch->left == NULL && currentBranch->right == NULL) {
        vec.push_back(sum + currentBranch->value);
    }
    branches(currentBranch->left, vec, sum + currentBranch->value);
    branches(currentBranch->right, vec, sum + currentBranch->value);
}

vector<int> branchSums(BinaryTree *root) {
    vector<int> vec;
    branches(root, vec, 0);
  return vec;
}
