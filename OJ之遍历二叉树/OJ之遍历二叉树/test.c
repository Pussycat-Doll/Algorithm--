#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct TreeNode
{
	struct TreeNode* left;
	struct TreeNode* right;
	char value;
}TreeNode;
TreeNode* CreatTree(TreeNode* root, char str[],int *i)
{
	if (root == NULL)
		return;
	if (str[*i] == '#')
		str[*i] == NULL;
	root->value = str[*i];
	(*i)++;
	CreatTree(root->left,str,*i);
	CreatTree(root->right,str,*i);
	return root;
}

int main()
{

	return 0;
}
