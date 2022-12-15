#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 *
 * @parent: - is a pointer to the parent node of the node to create
 * @value: - is the value to put in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

    /* declaration and allocation of memory for the new node */
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));


    if (new_node == NULL)
    {
        return NULL;
    }

    /* assign values to the properties of the node */
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->value = value;
    
   /* return a pointer to the node */
    return new_node;
}
