// Insertion in BST

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int key;
	struct node *left, *right;
};

struct node* newNode(int item)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));

	temp-> key = item;
	temp -> left = temp -> right = NULL;

	return temp;
}

struct node* insert(struct node *root, int key)
{
	// If the tree is empty, return a new node
	if(root == NULL)
	{
		return newNode(key);
	}

	// Otherwise, recur down the tree
	if(key < root -> key)
	{
		root -> left = insert(root -> left, key);
	} else if(key > root -> key)
	{
		root -> right = insert(root -> right, key);
	}

	return root;
}

void inorder(struct node *root)
{
	if(root != NULL) 
	{
		inorder(root -> left);
		printf("%d\n", root -> key);
		inorder(root -> right);
	}
}

int main()
{
	/*
	 *        50
	 *      /    \
	 *    30     70
	 *   / \    /  \
	 * 20   40 60   80
	 * */
	struct node *root = NULL;
	root = insert(root, 50);

	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);

	inorder(root);

	return 0;
}

/*Time Complexity
 * O(h) :  h is hight of the Binary Search Tree
 * */

/*Output:
20
30
40
50
60
70
80
*/
