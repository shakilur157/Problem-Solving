#include <iostream>
#include <set>
#include <vector>

using namespace std;

class BST{
        int data;
        BST *left, *right;

    public:
        BST();
        BST(int);
        BST* Insert(BST*, int);
        bool Inorder(BST*, int);
};
BST ::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}
BST ::BST(int value){
	data = value;
	left = right = NULL;
}
BST* BST:: Insert(BST* root, int value){
    if (!root){
        return new BST(value);
    }
    if (value > root->data){
        root->right = Insert(root->right, value);
    }
    else{
        root->left = Insert(root->left, value);
    }
    return root;
}
bool BST::Inorder(BST* root,int val)
{
    while (root != NULL) {
        if (val > root->data)
            root = root->right;
        else if (val < root->data)
            root = root->left;
        else
            return true;
    }
    return false;
}
class Solution {

public:
    set<int> convertToIntSet(string str){
        int len = str.length();
        set<int> myset;
        for(int i=0; i<len; i++){
            int val = str[i];
            myset.insert(val);
        }
        return myset;
    }
    bool isExist(set<int> vect, BST* root){
        set<int>::iterator it;
        bool ans;
        BST b;

        for(it = vect.begin(); it != vect.end(); it++){
            if(!b.Inorder(root, *it)){
                return false;
            }
        }
        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        BST b, *root = NULL;
        set<int> allowedSet = convertToIntSet(allowed);

        set<int>::iterator it2;
        int i = 0;
        for(it2 = allowedSet.begin(); it2 != allowedSet.end(); it2++){
            if(i == 0){
                root = b.Insert(root, *it2);
            }
            i++;
            b.Insert(root, *it2);
        }

        vector<set<int> > wordsSet;
        vector<string>::iterator it;
        for(it = words.begin(); it != words.end(); it++){
            set<int> val = convertToIntSet(*it);
            wordsSet.push_back(val);
        }
        int counter = 0;
        vector<set<int> >::iterator it1;
        for(it1 = wordsSet.begin(); it1 != wordsSet.end(); it1++){
            if(isExist(*it1, root)){
                counter++;
            }
        }
        return counter;
    }
};

