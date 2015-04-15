#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
typedef struct node *BTREE;

BTREE new_node(int data)
{
	BTREE p;
	p = (BTREE)malloc(sizeof(BTREE));
	p->data = data;
	p->left = NULL;
	p->right = NULL;
	return p;
}

BTREE insert(BTREE root, int data)
{
	if (root != NULL)
	{
		if (data < root->data)
		{
			root->left = insert(root->left, data);
		}
		else
		{
			root->right = insert(root->right, data);
		}
	}
	else
	{
		root = new_node(data);
	}
	return root;
}

void preorder(BTREE root)
{
	if (root != NULL)
	{
		cout << root->data << endl;
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(BTREE root)
{
	if (root != NULL)
	{
		inorder(root->left);
		cout << root->data << endl;
		inorder(root->right);
	}
}

void postorder(BTREE root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		cout << root->data << endl;
	}
}

int sum_leaves(BTREE root, int num)
{
	if (root != NULL)
	{
		if (root->left == root->right)
		{
			return num + root->data;
		}
		else
			return sum_leaves(root->right, root->data) + sum_leaves(root->left, num);
	}
	else
		return num;
}

int Size(BTREE root)
{
	if (root != NULL)
	{
		int size = 0;
		size = Size(root->left) + 1 + Size(root->right);
		return size;
	}
	else
		//cout << "Binary Tree is empty." << endl;
		return 0;
}

int average(BTREE root)
{
	if (root != NULL)
	{
		int number = 0;
		int avrg = 0;
		avrg = (sum_leaves(root, number)) / (Size(root));
		return avrg;
	}
}

int height(BTREE root)
{
	int lheight, rheight;
	if (root != NULL)
	{
		lheight = height(root->left);
		rheight = height(root->right);
		if (lheight > rheight)
		{
			return lheight + 1;
		}
		else
			return rheight + 1;
	}
	else
	{
		return 0;
	}
}

BTREE search(BTREE root, int key)
{
	BTREE node;
	if (root != NULL)
	{
		if (key < root->data)
		{
			node = search(root->left, key);
			if (node->data == key)
			{
				cout << "Tree have this node." << endl;
			}
			else
			{
				cout << "This node is not found" << endl;
			}
		}
		else if (key > root->data)
		{
			node = search(root->right, key);
			
		}
		else
		{
			node = root;
		}
		return root;
	}
	else
		return 0;
}

int main()
{
	BTREE root = NULL;
	int number = 0;
	int choice = 0;
	while (1)
	{
		cout << "1-Create a node of tree\n2-Insert at node\n3-Write as preorder\n4-Write as inorder\n5-Write as postorder\n6-Find the size\n7-Find the height\n8-Search on tree\n9-Calculate average of all nodes\n10-Exit\n";
		cout << "choose a choice:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "create binary tree:";
			cin >> number;
			root = new_node(number);
			break;
		case 2:
			cout << "insert at binary tree:";
			cin >> number;
			insert(root, number);
			break;
		case 3:
			preorder(root);
			break;
		case 4:
			inorder(root);
			break;
		case 5:
			postorder(root);
			break;
		case 6:
			cout << Size(root) << endl;
			break;
		case 7:
			cout << height(root) << endl;
			break;
		case 8:
			cout << "search in binary tree:";
			cin >> number;
			search(root, number);
			break;
		case 9:
			cout << average(root) << endl;
			break;
		case 10:
			exit(1);
		default:
			cout << "Wrong choice. Please try again!\a\a" << endl;
			break;
		}
	}
	system("pause");
}