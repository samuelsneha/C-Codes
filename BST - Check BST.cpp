int minimum(BinaryTreeNode<int>* root) {
	if (root == NULL) {// first statement which is b.c
		return INT_MAX;// We are initializing with the largest number ( eg. 9999) because whichever number you encounter ( suppose 100) will definetly be less than the initialized number. So 100 can be a potential minimum number.
	}
	return min(root->data, min(minimum(root->left), minimum(root->right)));
}
return min(root->data, min(minimum(root->left), minimum(root->right)));// cOZ MIN/MAX CAN TAKE ONLY 2 ARGUMENTS AT A TIME
// 2 RECURSIONS AT SAME TIME
// 2nd statement which is the return and it is calling 2 recursive calls at the same time. Hence its time complexity is so high and we need to optimize it.\\


	bool output = (root->data > leftMax) && (root->data <= rightMin) && isBST(root->left) && isBST(root->right);
//See recursion is working in such a way that for every parent nodes in a tree , its leftMax, rightMin is figured out and then whether its BST or no is  figured out.
//See isBST  -> left and isBST -> RIGHT BOTH ARE DEPENDENT ON THE OUTPUTS WE RECEIVE FOR (root->data > leftMax) && (root->data <= rightMin) because obviously those two are the concept of BST and those two makes / breaks a BST.
// If suppose, root -> data > leftMax is false then isBST( root -> left ) is also false and hence the entire o/pp is false.
