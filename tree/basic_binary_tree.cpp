#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
    
	Node (){

	}
    Node(int val) {
        key = val;
        left = nullptr;
        right = nullptr;
    }

    Node* insertValue(Node* root, int value, queue<Node*>& q) {
        if( value ==-1)
        return  nullptr;
        Node* node = new Node(value);

        if (root == nullptr)
            root = node;
        else if (q.front()->left == nullptr )
            q.front()->left = node;
        else {
            q.front()->right = node;
            q.pop();
        }
        q.push(node);
        return root;
    }
    
    Node* createTree(int arr[], int n) {
        Node* root = nullptr;
        queue<Node*> q;
        for (int i = 0; i < n; i++)
            root = insertValue(root, arr[i], q);
        return root;
    }
    
    void levelOrder(Node* root) {
        if (root == nullptr )
            return;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            cout << q.front()->key << " ";
            if (q.front()->left != nullptr)
                q.push(q.front()->left);
            if (q.front()->right != nullptr)
                q.push(q.front()->right);
            q.pop();
        }
    }
    
    void R_inorder(Node* root) {
        if (root == nullptr)
            return;
        R_inorder(root->left);
        cout << root->key << " ";
        R_inorder(root->right);
    }

void R_preorder(Node* root){
	if(root==nullptr)
	return ;
	cout<<root->key<<" ";
	R_preorder(root->left);
	R_preorder(root->right);
}
void R_postorder(Node* root){
	if(root==nullptr)
	return ;
	
	R_postorder(root->left);
	R_postorder(root->right);
	cout<<root->key<<" ";
}
void inorder(Node *root){
	stack<Node*>s;
	if(root==nullptr)
	return ;
        Node *ptr=root;
        while(ptr!=nullptr || (!s.empty())){
            while(ptr!=nullptr){
                s.push(ptr);
                ptr=ptr->left;
            }
            ptr=s.top();
            s.pop();
            cout<<ptr->key<<" ";
            ptr=ptr->right;
            

        
		
	}
	
}
void preorder(Node *root){
if (!root) {
        cout << "EMPTY TREE" << endl;
        return;
    }

    stack<Node*> s;
    Node* p = root;

    while (p != nullptr) {
        cout << p->key << " ";
        if (p->right != nullptr) {
            s.push(p->right);
        }
        p = p->left;
        if (p == nullptr && !s.empty()) {
            p = s.top();
            s.pop();
        }
    }
}
void postorder(Node *root){
    if(!root){
        cout<<"EMPTY TREE";
        return;
    }
    stack<Node*>s;
    Node* p=root;
    Node* pre=nullptr;
    do{
    while(p!=nullptr){
        s.push(p);
        p=p->left;
    }   while(p==nullptr && !s.empty()){
        p=s.top();
        if(p->right==nullptr || p->right==pre){
            cout<<p->key<<" ";
            pre=p;
            s.pop();
            p=nullptr;
        }
        else{
            p=p->right;
        }
       

    }
   
}
 while(!s.empty());
}
};
int main() {
    Node obj; 
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Node* root = obj.createTree(arr, n);
    int wish;
    cout<<"1 for print in level order "<<endl;
    cout<<"2 for print in R_inorder  "<<endl;
    cout<<"3 for print in R_preorder  "<<endl;
    cout<<"4 for print in R_postorder  "<<endl;
    cout<<"5 for print in inorder  "<<endl;
    cout<<"6 for print in preorder  "<<endl;
    cout<<"7 for print in postorder  "<<endl;
    while(1){
    cin>>wish;
    switch(wish){
        case 1:
              obj.levelOrder(root);
              cout<<endl;
              break;
              case 2:
              obj.R_inorder(root);
              cout<<endl;
              break;
               case 3:
               obj.R_preorder(root);
              cout<<endl;
              break;
              case 4:
               obj.R_postorder(root);
              cout<<endl;
              break;
              case 5:
               obj.inorder(root);
              cout<<endl;
              break;
              case 6:
               obj.preorder(root);
              cout<<endl;
              break;
              case 7:
               obj.postorder(root);
              cout<<endl;
              break;
              default:
              cout<<"INVALID"<<endl;
              exit(0);
    }

    }
return 0;
}
