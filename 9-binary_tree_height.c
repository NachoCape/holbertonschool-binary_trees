#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree, If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (!tree)
		return (-1);
	h_left = 1 + binary_tree_height(tree->left);
	h_right = 1 + binary_tree_height(tree->right);
	return (h_left > h_right ? h_left : h_right);
}
