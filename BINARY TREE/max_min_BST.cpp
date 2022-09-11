#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    node(int d){
        this->data =d;
        this->left= NULL;
        this->right = NULL;

    }
};
void inorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}
void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
node* insertintobst(node* root,int d){
    // base case
    if(root == NULL){
        root = new node(d);
        return root;
    }
    if(d > root ->data){
        root -> right = insertintobst (root->right,d);
    }
    else{
        root->left = insertintobst (root->left,d);
    }
    return root;
}
node* minvalue(node*root){
    node*temp= root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
    
}
node* maxvalue(node*root){
    node*temp= root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
    
}

void takeinput(node* &root){
    int data;
    cin>>data;
    while (data != -1)
    {
        root = insertintobst(root,data);
        cin>>data;
    }
    
}
int main(){
    node*root = NULL;
    cout<< "Enter data for create a BST "<< endl;
    takeinput(root);
    cout<<"printing the BST"<<endl;
    levelOrderTraversal(root);
    
    cout <<endl<< "inorder traversal is: ";
    inorder(root);

    cout << endl<< "preorder traversal is: ";
    preorder(root);

    cout << endl<< "postorder traversal is: ";
    postorder(root);

    cout<< endl <<"min value is "<<minvalue(root)->data<<endl;
    cout <<"max value is "<<maxvalue(root)->data<<endl;
    return 0;

}