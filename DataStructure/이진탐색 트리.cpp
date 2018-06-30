//#include <iostream>
//using namespace std;
//
//class Node{
//public:
//  int key;
//  Node * l, * r;
//  Node(int k){
//    key = k;
//    l = r = NULL;
//  }
//};
//
//class BinarySearchTree{
//public:
//  Node * root;
//  BinarySearchTree(){
//    root = NULL;
//  }
//  
//  bool search(Node * root, int key){
//    if(root == NULL) return false;
//    if(root->key == key) return true;
//    if(key < root->key){
//      return search(root->l, key);
//    }else{
//      return search(root->r, key);
//    }
//  }
//  
//  void add(Node * & root, int key){
//    if(root == NULL) {
//      root = new Node(key);
//      return;
//    }
//    if(key < root->key){
//      add(root->l, key);
//    }else{
//      add(root->r, key);
//    }
//  }
//  
//  Node * del(Node * & root, int key){
//    if(root == NULL) return root;
//    if(key < root->key){
//      root->l = del(root->l, key);
//    }else if(key > root->key){
//      root->r = del(root->r, key);
//    }else{
//      // node has one child or no child
//      if(root->l == NULL){
//        Node * tmp = root->r;
//        delete root;
//        return tmp;
//      }else if(root->r == NULL){
//        Node * tmp = root->l;
//        delete root;
//        return tmp;
//      }
//      
//      // node has two child
//      Node * tmp = maxValueNode(root->l);
//      root->key = tmp->key;
//      root->l = del(root->l, tmp->key);
//      
//    }
//    return root;
//  }
//  
//  Node * maxValueNode(Node * root){
//    Node * cur = root;
//    while (cur->l != NULL) cur = cur->l;
//    return cur;
//  }
//  
//  void inorder(Node * & root){
//    if(root == NULL) return;
//    inorder(root->l);
//    cout << root->key << " ";
//    inorder(root->r);
//  }
//  
//  void preorder(Node * & root){
//    if(root == NULL) return;
//    cout << root->key << " ";
//    preorder(root->l);
//    preorder(root->r);
//  }
//  
//  void postorder(Node * & root){
//    if(root == NULL) return;
//    postorder(root->l);
//    postorder(root->r);
//    cout << root->key << " ";
//  }
//  
//};
//
//
//
//int main(void){
//  
//  BinarySearchTree bst = BinarySearchTree();
//  
//  static int data[] = {150,20,30,10,-1,160,180, 190, 200, 220,303,253,151,24};
//  
//  
//  for (int i=0; i<(sizeof(data)/sizeof(int)); i++) {
//    bst.add(bst.root, data[i]);
//  }
//  
//  bst.inorder(bst.root); // 오름차순 정렬
//  cout << endl;
//  bst.preorder(bst.root); //
//  cout << endl;
//  bst.postorder(bst.root); //
//  cout << endl;
//  
//  
//  cout << bst.search(bst.root, -2) << endl;
//  cout << bst.search(bst.root, 30) << endl;
//  bst.root = bst.del(bst.root, 30);
//  
//  bst.inorder(bst.root); // 오름차순 정렬
//  cout << endl;
//  
//  return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//
