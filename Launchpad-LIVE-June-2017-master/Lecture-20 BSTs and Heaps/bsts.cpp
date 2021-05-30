#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node*left;
    node*right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};


///Print the tree level by level
void levelOrderPrint2(node*root){

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            q.pop();
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            q.pop();
            cout<<f->data<<" ";

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
}

void printPreorder(node*root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printPreorder(root->left);
    printPreorder(root->right);
}

void printInorder(node*root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

void postOrder(node*root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";

}
/// Builds a BST
node* insertInBST(node*root,int data){
    if(root==NULL){
        root = new node(data);
        return root;
    }
    ///Rec Case
    if(data <= root->data){
        root->left = insertInBST(root->left,data);
    }
    else{
        root->right = insertInBST(root->right,data);
    }
    return root;
}

void takeInput(node*&root){

    int data;
    cin>>data;

    while(data!=-1){
        root = insertInBST(root,data);
        cin>>data;
    }
}
ostream& operator<<(ostream&os, node*root){
    levelOrderPrint2(root);
    return os;
}
istream& operator>>(istream&is, node*&root){
    takeInput(root);
    return is;
}
///Time Complexity of the search function
bool search(node*root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data==data){
        return true;
    }
    if(root->data < data){
        return search(root->right,data);
    }
    return search(root->left,data);
}
/// Pair
class myPair{
public:
    int height;
    bool balance;
};

myPair isBalanced(node*root){
    myPair p;
    if(root==NULL){
        p.height = 0;
        p.balance = true;
        return p;
    }

    myPair leftTree = isBalanced(root->left);
    myPair rightTree = isBalanced(root->right);

    int diff = abs(leftTree.height - rightTree.height);

    if(diff<=1 && leftTree.balance && rightTree.balance){
            p.balance = true;
    }
    else{
        p.balance = false;
    }
    p.height = max(leftTree.height,rightTree.height) + 1;
    return p;
}

/// Count BST - HW - Catalan Number
int countBSTs(int n){


}
///Min Node
node* minNode(node*root){
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}


/// Delete in BST
node* deleteNode(node *root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data == key){
        ///Three cases 0 child, 1 child, 2 children
        if(root->left==NULL && root->right==NULL){
           // cout<<"Here "<<endl;
            delete root;
            return NULL;
        }
        /// Single Child
        if(root->left==NULL && root->right!=NULL){
                node*temp = root->right;
                delete root;
                return temp;
        }
        if(root->left!=NULL && root->right==NULL){
                node* temp = root->left;
                delete root;
                return temp;
        }
        /// 2 children
        /// find min node in right subtree
            node* replaceMent = minNode(root->right);
            root->data = replaceMent->data;
            root->right =  deleteNode(root->right,replaceMent->data);
            return root;
    }
    else if(root->data > key){
        root->left = deleteNode(root->left,key);
        return root;
    }
    else{
        root->right = deleteNode(root->right,key);
        return root;
    }
}


node* arrayToBST(int *a,int s,int e){
    if(s>e){
        return NULL;
    }
    int mid = (s+e)/2;
    node* root = new node(a[mid]);
    root->left = arrayToBST(a,s,mid-1);
    root->right = arrayToBST(a,mid+1,e);
    return root;
}

bool isBST(node*root,int minV=INT_MIN, int maxV = INT_MAX){
    if(root==NULL){
        return true;
    }
    if(root->data >= minV && root->data <maxV
       && isBST(root->left,minV,root->data) &&
       isBST(root->right,root->data,maxV)){
        return true;
    }
    return false;
}

class LinkedList{
public:
    node*head;
    node*tail;
};

LinkedList tree2LL(node*root){
    LinkedList l;
    if(root==NULL){
        l.head = l.tail = NULL;
        return l;
    }
    else if(root->left==NULL && root->right==NULL){
        l.head = root;
        l.tail = root;
    }
    else if(root->left!=NULL && root->right==NULL){
        LinkedList leftLL = tree2LL(root->left);
        leftLL.tail->right = root;

        l.head = leftLL.head;
        l.tail = root;
    }
    else if(root->left==NULL && root->right!=NULL){
        LinkedList rightLL = tree2LL(root->right);
        root->right = rightLL.head;
        l.head = root;
        l.tail = rightLL.tail;
    }
    else{
        LinkedList leftLL = tree2LL(root->left);
        LinkedList rightLL = tree2LL(root->right);

        leftLL.tail->right = root;
        root->right = rightLL.head;

        l.head = leftLL.head;
        l.tail = rightLL.tail;
    }
    return l;

}



int main(){

    node*root = NULL;
    int a[] = {1,2,4,5,6,8,9,10};
    int n = sizeof(a)/sizeof(int);

    root = arrayToBST(a,0,n-1);
    if(isBST(root)){
        cout<<"Yes its bst"<<endl;
    }
    else{
        cout<<"not a bst"<<endl;
    }
    cout<<root<<endl;

    LinkedList l = tree2LL(root);
    node*temp = l.head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->right;
    }
    cout<<"NULL"<<endl;
return 0;
}


