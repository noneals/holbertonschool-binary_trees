# Binary Trees

This project implements various binary tree operations and algorithms in C. It covers fundamental concepts of binary trees including creation, traversal, and analysis of tree properties.

## Description

A binary tree is a hierarchical data structure where each node has at most two children, referred to as the left child and the right child. This implementation provides a comprehensive set of functions to work with binary trees.

## Data Structure

The binary tree is represented using the following structure:

```c
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

## Files

| File | Description |
|------|-------------|
| `binary_trees.h` | Header file containing function prototypes and struct definitions |
| `0-binary_tree_node.c` | Creates a binary tree node |
| `1-binary_tree_insert_left.c` | Inserts a node as the left-child of another node |
| `2-binary_tree_insert_right.c` | Inserts a node as the right-child of another node |
| `3-binary_tree_delete.c` | Deletes an entire binary tree |
| `4-binary_tree_is_leaf.c` | Checks if a node is a leaf |
| `5-binary_tree_is_root.c` | Checks if a given node is a root |
| `6-binary_tree_preorder.c` | Traverses a binary tree using pre-order traversal |
| `7-binary_tree_inorder.c` | Traverses a binary tree using in-order traversal |
| `8-binary_tree_postorder.c` | Traverses a binary tree using post-order traversal |
| `9-binary_tree_height.c` | Measures the height of a binary tree |
| `10-binary_tree_depth.c` | Measures the depth of a node in a binary tree |
| `11-binary_tree_size.c` | Measures the size of a binary tree |
| `12-binary_tree_leaves.c` | Counts the leaves in a binary tree |
| `13-binary_tree_nodes.c` | Counts the nodes with at least 1 child in a binary tree |
| `14-binary_tree_balance.c` | Measures the balance factor of a binary tree |
| `15-binary_tree_is_full.c` | Checks if a binary tree is full |
| `16-binary_tree_is_perfect.c` | Checks if a binary tree is perfect |
| `17-binary_tree_sibling.c` | Finds the sibling of a node |
| `18-binary_tree_uncle.c` | Finds the uncle of a node |
| `binary_tree_print.c` | Helper function to print binary trees |

## Function Prototypes

### Basic Operations
- `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
- `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- `void binary_tree_delete(binary_tree_t *tree);`

### Tree Analysis
- `int binary_tree_is_leaf(const binary_tree_t *node);`
- `int binary_tree_is_root(const binary_tree_t *node);`
- `size_t binary_tree_height(const binary_tree_t *tree);`
- `size_t binary_tree_depth(const binary_tree_t *tree);`
- `size_t binary_tree_size(const binary_tree_t *tree);`
- `size_t binary_tree_leaves(const binary_tree_t *tree);`
- `size_t binary_tree_nodes(const binary_tree_t *tree);`

### Tree Traversal
- `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
- `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`

### Tree Properties
- `int binary_tree_balance(const binary_tree_t *tree);`
- `int binary_tree_is_full(const binary_tree_t *tree);`
- `int binary_tree_is_perfect(const binary_tree_t *tree);`

### Node Relations
- `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
- `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`

## Key Concepts

### Tree Terminology
- **Root**: The top node of the tree
- **Leaf**: A node with no children
- **Height**: The longest path from the node to a leaf
- **Depth**: The distance from the root to the node
- **Balance Factor**: The difference between heights of left and right subtrees

### Tree Types
- **Full Binary Tree**: Every node has either 0 or 2 children
- **Perfect Binary Tree**: All internal nodes have two children and all leaves are at the same level
- **Balanced Binary Tree**: The height difference between left and right subtrees is at most 1

### Traversal Methods
- **Pre-order**: Root → Left → Right
- **In-order**: Left → Root → Right
- **Post-order**: Left → Right → Root

## Usage Example

```c
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    
    printf("Size: %lu\n", binary_tree_size(root));
    printf("Height: %lu\n", binary_tree_height(root));
    printf("Is full: %d\n", binary_tree_is_full(root));
    
    binary_tree_delete(root);
    return (0);
}
```

## Memory Management

All functions that allocate memory use `malloc()` and proper error checking. The `binary_tree_delete()` function should be used to free all allocated memory to prevent memory leaks.

## Author

This project is part of the Holberton School curriculum on binary trees and data structures.

**Team:**
- Abdulaziz Hamed (aziz5g-tech)
- Norah Mohammed (noneals)

## License

This project is for educational purposes as part of the Holberton School curriculum.
