#include<iostream>
#include<queue>
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

///recursive fn
node* buildTree(){

    //cout<<"Enter the data ";
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }

    ///Rec Case
    node* n = new node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}
///Tree Build Function - Using Iteration ( Level by Level )
void levelOrderInput(node*&root){

    cout<<"Enter the root node ";
    int d;
    cin>>d;
    root = new node(d);

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node*parent = q.front();
        q.pop();

        int c1,c2;
        cout<<"Enter children of "<<parent->data<<" ";
        cin>>c1>>c2;

        if(c1!=-1){
            parent->left = new node(c1);
            q.push(parent->left);
        }
        if(c2!=-1){
            parent->right = new node(c2);
            q.push(parent->right);
        }
    }

}

void printTree(node*root){
    if(root==NULL){
        return;
    }
    ///Print the current node
    cout<<root->data<<" ";
    ///Call on left and right subtrees
    printTree(root->left);
    printTree(root->right);
}

int height(node*root){
    if(root==NULL){
        return 0;
    }
    return 1 + max(height(root->left),height(root->right));
}

/// Diameter of Tree
int diameter(node*root){
    if(root==NULL){
        return 0;
    }
    int op1 = height(root->left) + height(root->right);
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);

    return max(op1,max(op2,op3));
}

///Each node should return 2 things, so i make a wrapper
class myPair{
public:
    int height;
    int diameter;
};

myPair diameterFast(node*root){
    ///Null tree
    myPair p;
    if(root==NULL){
        p.diameter = 0;
        p.height = 0;
        return p;
    }
    myPair left = diameterFast(root->left);
    myPair right = diameterFast(root->right);

    int d1 = left.diameter;
    int d2 = right.diameter;

    int h1= left.height;
    int h2 = right.height;

    p.diameter = max(h1+h2,max(d1,d2));
    p.height = max(h1,h2) + 1;
    return p;
}



///Print the tree level by level
void levelOrderPrint(node*root){

    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* f = q.front();
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

int countNodes(node*root){
    if(root==NULL){
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

void printNodesAtLevelK(node *root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
    }
    printNodesAtLevelK(root->left,k-1);
    printNodesAtLevelK(root->right,k-1);
}

void mirror(node*root){
    if(root==NULL){
        return ;
    }
    swap(root->left,root->right);
    mirror(root->left);
    mirror(root->right);

}

class sumPair{
public:
    int inc;
    int exc;
};

sumPair maxSumProblem(node*root){
    sumPair p;
    if(root==NULL){
        p.inc = 0;
        p.exc = 0;
        return p;
    }

    ///Call on the left and right part
    sumPair left = maxSumProblem(root->left);
    sumPair right =maxSumProblem(root->right);

    p.inc = root->data + left.exc + right.exc;
    p.exc = max(left.inc,left.exc) + max(right.inc,right.exc);

    return p;
}


int main(){

    node* root = NULL;
    //root = buildTree();
    levelOrderInput(root);

    ///Print this tree
    cout<<"Preorder Print "<<endl;
    printTree(root);
    cout<<endl;

    cout<<"Inorder Print "<<endl;
    printInorder(root);
    cout<<endl;

    cout<<"Post order Print "<<endl;
    postOrder(root);
    cout<<endl;

    ///level order
    cout<<"\n Level Order Print "<<endl;
    levelOrderPrint2(root);

    cout<<"Count is "<<countNodes(root)<<endl;
    cout<<"Height is "<<height(root)<<endl;

    cout<<"Diameter is "<<diameter(root)<<endl;
    cout<<"Fast diameter is "<<diameterFast(root).diameter<<endl;

    sumPair p =maxSumProblem(root);
    int ans = max(p.inc,p.exc);
    cout<<"Final possible max sum is "<<ans<<endl;

    mirror(root);
    levelOrderPrint2(root);


return 0;
}
