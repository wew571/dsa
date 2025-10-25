from collections import deque

class node:
    def __init__(self , x):
        self.data = x
        self.left = None
        self.right = None

def insert_Binary_Search_Tree(tree , x):
    if tree is None:
        newnode = node(x)
        return newnode
    if x < tree.data:
        tree.left = insert_Binary_Search_Tree(tree.left , x)
    if x > tree.data:
        tree.right = insert_Binary_Search_Tree(tree.right , x)
    return tree

def display_Binary_Search_Tree(tree):
    if tree is None:
        return None
    display_Binary_Search_Tree(tree.left)
    print(f"{tree.data}" , end=" ")
    display_Binary_Search_Tree(tree.right)

def search_Binary_Search_Tree(tree , x):
    if tree is None:
        return None
    if tree.data == x:
        return 1
    if x < tree.data:
        return search_Binary_Search_Tree(tree.left , x)
    if x > tree.data:
        return search_Binary_Search_Tree(tree.right , x)

def BFS_Search(tree , x):
    if tree is None:
        return None
    q = deque([tree])
    while q:
        Node = q.popleft()
        if Node.data == x:
            return 1
        if Node.left:
            q.append(Node.left)
        if Node.right:
            q.append(Node.right)
    return None

def BFS_Level_Tree(tree):
    if tree is None:
        return 0
    q = deque([tree])
    level = 0
    while q:
        for _ in range(len(q)):
            Node = q.popleft()
            if Node.left:
                q.append(Node.left)
            if Node.right:
                q.append(Node.right)
        level +=1
    return level

def find_min(node):
    while node.left is not None:
        node = node.left
    return node

def delete_node(root, key):
    if root is None:
        return root

    if key < root.key:
        root.left = delete_node(root.left, key)
    elif key > root.key:
        root.right = delete_node(root.right, key)
    else:
        if root.left is None:
            return root.right
        elif root.right is None:
            return root.left

        temp = find_min(root.right)
        root.key = temp.key
        root.right = delete_node(root.right, temp.key)

    return root