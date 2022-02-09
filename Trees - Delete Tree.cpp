/// Deleting a Tree works exactly in a similar way how Post Order Traversal works. ie. it first deletes its children and then deletes the root.
/// Deleting a Tree is a perfect example of Post Order Traversal.
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

    ~TreeNode()
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

void deleteTree(TreeNode<int>* root)
{
	for (int i = 0; i < root->children.size(); i++)
    {
		deleteTree(root->children[i]);
	}
	delete root;
}

int main()
{
    TreeNode<int>* root = takeInputLevelWise();
    // TODO delete the tree
	deleteTree(root);
}
//and aap difference dekho isme you have to specifically mention to delete root after the for loop right?
//but jo code aapne pehle bheja tha, with a destructor u did not mention delete root after the for loop.
//thats the only difference. Destructor for loop ke baad automatically root ko bhi delete kardeta hai.
//and agar aap function create karte ho usme you just have mention 'delete root' specifically.
//otherwise they both work the same way
