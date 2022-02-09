///Whenever delete is called, Destructor of that object is called.
/// When delete is called at root, Destructor does its work of deleting the children of the root and then root is deleted.
/// So we don't need to make another separate function for deleting, Destructor does that work.
/// In a classic 1: 2, 3 example: unless and until the destructors of 2 and 3 ( which are the children ) does not gets deleted, the destructor of the root does not gets deleted.

/*#include <vector>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() // DESTRUCTOR
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

TreeNode<int>* takeInputLevelWise()
{
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	queue<TreeNode<int>*> pendingNodes;

	pendingNodes.push(root);
	while (pendingNodes.size() != 0)
        {
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter num of children of " << front->data << endl;
		int numChild;
		cin >> numChild;
		for (int i = 0; i < numChild; i++)
		{
			int childData;
			cout << "Enter " << i << "th child of " << front->data << endl;
			cin >> childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}

int main()
{
   TreeNode<int>* root = takeInputLevelWise();
   // TODO delete the tree
   delete root;
   	for (int i = 0; i < root->children.size(); i++)
    {
		cout << (root->children[i]) << " " ;
	}
}*/

#include <vector>
#include <queue>
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() // DESTRUCTOR
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

TreeNode<int>* takeInputLevelWise()
{
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	TreeNode<int>* root = new TreeNode<int>(rootData);

	queue<TreeNode<int>*> pendingNodes;

	pendingNodes.push(root);
	while (pendingNodes.size() != 0)
        {
		TreeNode<int>* front = pendingNodes.front();
		pendingNodes.pop();
		cout << "Enter num of children of " << front->data << endl;
		int numChild;
		cin >> numChild;
		for (int i = 0; i < numChild; i++)
		{
			int childData;
			cout << "Enter " << i << "th child of " << front->data << endl;
			cin >> childData;
			TreeNode<int>* child = new TreeNode<int>(childData);
			front->children.push_back(child);
			pendingNodes.push(child);
		}
	}
	return root;
}

int main()
{
   TreeNode<int>* root = takeInputLevelWise();
   cout << root->data << endl;
   // TODO delete the tree
   delete root;
   cout << root->data << endl;
   //1 3 2 3 4 0 0 0 - Use this input and run the code
   //You will see that the cout statement before delete root is giving the value of 1 and after the delete root statement it gives a garbage value.
   //This means root has been deallocated or deleted for that matter. By 'deallocated' I meant jo memory root ko allocate kiya tha that is free now.
   //Whenever you are not sure about the destructor. You can try printing the values of the memory you just deleted it will give out garbage value or give you some sort  of error probably runtime error
}
