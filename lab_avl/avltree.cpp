/**
 * @file avltree.cpp
 * Definitions of the binary tree functions you'll be writing for this lab.
 * You'll need to modify this file.
 */

template <class K, class V>
V AVLTree<K, V>::find(const K& key) const
{
    return find(root, key);
}

template <class K, class V>
V AVLTree<K, V>::find(Node* subtree, const K& key) const
{
    if (subtree == NULL)
        return V();
    else if (key == subtree->key)
        return subtree->value;
    else {
        if (key < subtree->key)
            return find(subtree->left, key);
        else
            return find(subtree->right, key);
    }
}

template <class K, class V>
void AVLTree<K, V>::rotateLeft(Node*& t)
{
    functionCalls.push_back("rotateLeft"); // Stores the rotation name (don't remove this)
    // your code here
    Node* temp = t->right;
    t->right = temp->left;
    temp->left = t;
    t = temp;
    //update height
    t->left->height = 1 + std::max(heightOrNeg1(t->left->left), heightOrNeg1(t->left->right));
    t->height = 1 + std::max(heightOrNeg1(t->left), heightOrNeg1(t->right));    
}

template <class K, class V>
void AVLTree<K, V>::rotateLeftRight(Node*& t)
{
    functionCalls.push_back("rotateLeftRight"); // Stores the rotation name (don't remove this)
    // Implemented for you:
    rotateLeft(t->left);
    rotateRight(t);
}

template <class K, class V>
void AVLTree<K, V>::rotateRight(Node*& t)
{
    functionCalls.push_back("rotateRight"); // Stores the rotation name (don't remove this)
    // your code here
   Node* temp = t->left;
   t->left = temp->right;
   temp->right = t;
   t = temp;
   //update height
   t->right->height = 1 + std::max(heightOrNeg1(t->right->left), heightOrNeg1(t->right->right)); 
   t->height = 1 + std::max(heightOrNeg1(t->left), heightOrNeg1(t->right));
}

template <class K, class V>
void AVLTree<K, V>::rotateRightLeft(Node*& t)
{
    functionCalls.push_back("rotateRightLeft"); // Stores the rotation name (don't remove this)
    // your code here
    rotateRight(t->right);
    rotateLeft(t);
}

template <class K, class V>
void AVLTree<K, V>::rebalance(Node*& subtree)
{
    // your code here
    if(subtree == NULL) return;

    int bf = heightOrNeg1(subtree->right) - heightOrNeg1(subtree->left);
    if(bf < -1){
        int bfl = heightOrNeg1(subtree->left->right) - heightOrNeg1(subtree->left->left);
        if(bfl > 0) rotateLeftRight(subtree);
        else rotateRight(subtree);
    }
    if(bf > 1) {
        int bfr = heightOrNeg1(subtree->right->right) - heightOrNeg1(subtree->right->left);
        if(bfr < 0) rotateRightLeft(subtree);
        else rotateLeft(subtree);
    }
    subtree->height = 1 + std::max(heightOrNeg1(subtree->left), heightOrNeg1(subtree->right));
}

template <class K, class V>
void AVLTree<K, V>::insert(const K & key, const V & value)
{
    insert(root, key, value);
}

template <class K, class V>
void AVLTree<K, V>::insert(Node*& subtree, const K& key, const V& value)
{
    // your code here
    if(subtree == NULL){
        //std::cout << "insert null" << std::endl; 
        subtree = new Node(key, value);
    }else if(key < subtree->key){
        //std::cout << "insert left" << std::endl; 
        insert(subtree->left, key, value);
    }else if(key > subtree->key){
        //std::cout << "insert right" << std::endl; 
        insert(subtree->right, key, value);
    }
    rebalance(subtree);
    //std::cout << "insert reb" << std::endl; 
}

template <class K, class V>
void AVLTree<K, V>::remove(const K& key)
{
    remove(root, key);
}

template <class K, class V>
void AVLTree<K, V>::remove(Node*& subtree, const K& key)
{
    if (subtree == NULL)
        return;

    if (key < subtree->key) {
        // your code here
        remove(subtree->left, key);
    } else if (key > subtree->key) {
        // your code here
        remove(subtree->right, key);
    } else {
        if (subtree->left == NULL && subtree->right == NULL) {
            /* no-child remove */
            // your code here
            delete subtree;
	    subtree = NULL;
        } else if (subtree->left != NULL && subtree->right != NULL) {
            /* two-child remove */
            // your code here
            Node* lrmost = subtree->left;
            while(lrmost->right != NULL) lrmost = lrmost->right;
            swap(lrmost, subtree);
            remove(subtree->left, key);
        } else {
            /* one-child remove */
            // your code here
            Node* temp = NULL;
            if(subtree->left != NULL) temp = subtree->left;
            else temp = subtree->right;
            
	    delete subtree;
            subtree = temp;
        }
        // your code here
    }
    rebalance(subtree);
}
