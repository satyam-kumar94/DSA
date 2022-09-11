#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
   
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        

    Node *root = new Node(stoi(ip[0]));
        

    queue<Node*> queue;
    queue.push(root);
        
    
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        
        Node* currNode = queue.front();
        queue.pop();
            
       
        string currVal = ip[i];
            
       
        if(currVal != "N") {

            
            currNode->left = new Node(stoi(currVal));
                
           
            queue.push(currNode->left);
        }

        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        
        if(currVal != "N") {
                

            currNode->right = new Node(stoi(currVal));
                
      
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        //base case
        if(node == NULL) {
            return 0;
        }
        
        int left = height(node ->left);
        int right = height(node->right);
        
        int ans = max(left, right) + 1;
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string treeString;
		getline(cin,treeString);
		Node* root = buildTree(treeString);
        Solution ob;
		cout<<ob.height(root)<<endl;
    }
    return 0;
}