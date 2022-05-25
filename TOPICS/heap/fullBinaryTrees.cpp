

/*
  Full Binary Tree: A full binary tree is a binary tree where each node has either 0 or 2 children.

   intution: when n is even it is not possible to create a full binary tree 
    when n is odd it is possible to create a full binary tree
      next-point: what all can become a root node 
      (0-n-1) nodes at odd position only can become root 
      now with given range all possible combinations and calculate  all possible FBTS
      */


#include <bits/stdc++.h>
    using namespace std;

//  * Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };


     
     vector<TreeNode*>  fun(int low,int high) {
         
         
           vector<TreeNode*>  t;
         if(low==high) {
              TreeNode* root=new TreeNode(0);
             t.push_back(root); return t;
         }
          
              for(int i=low+1; i<=high; i+=2) {    /// low=0,i=1 is root next i=3 is to left and right side odd number of nodes
                      
                  auto l=fun(low,i-1);
                  auto r=fun(i+1,high);
                  for(auto it: l) {
                      
                      for(auto it1: r) {
                          TreeNode* root=new TreeNode(0);
                          root->left=it;
                          root->right=it1;
                          t.push_back(root);
                      }
                  }
              }
         return t;
     }
    vector<TreeNode*> allPossibleFBT(int n) {
         if(n%2==0) return {};
       return fun(0,n-1);
    }
      