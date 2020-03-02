/**
 * @file list.cpp
 * Doubly Linked List (MP 3).
 */

template <class T>
List<T>::List() { 
  // @TODO: graded in MP3.1
    head_ = NULL;
    tail_ = NULL;
    length_ = 0;
}

/**
 * Returns a ListIterator with a position at the beginning of
 * the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::begin() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(head_);
}

/**
 * Returns a ListIterator one past the end of the List.
 */
template <typename T>
typename List<T>::ListIterator List<T>::end() const {
  // @TODO: graded in MP3.1
  return List<T>::ListIterator(NULL);
}


/**
 * Destroys all dynamically allocated memory associated with the current
 * List class.
 */
template <typename T>
void List<T>::_destroy() {
  /// @todo Graded in MP3.1
  ListNode* temp;
  ListNode* curr = head_;
  while(curr != NULL) {
      temp = curr;
      curr = curr -> next;
      delete temp;
  }
  head_ = NULL;
  tail_ = NULL;
  temp  = NULL;
  length_ = 0;
}

/**
 * Inserts a new node at the front of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertFront(T const & ndata) {
  /// @todo Graded in MP3.1

  ListNode* newNode = new ListNode(ndata);
  newNode -> next = head_;
  newNode -> prev = NULL;
  if (head_ != NULL) head_ -> prev = newNode;
  if (tail_ == NULL) tail_ = newNode;
  head_ = newNode;
  length_++;
}

/**
 * Inserts a new node at the back of the List.
 * This function **SHOULD** create a new ListNode.
 *
 * @param ndata The data to be inserted.
 */
template <typename T>
void List<T>::insertBack(const T & ndata) {
  /// @todo Graded in MP3.1
  ListNode* newNode = new ListNode(ndata);
  newNode -> next = NULL;
  newNode -> prev = tail_;
  if (head_ == NULL) head_ = newNode;
  if (tail_ != NULL) tail_ -> next = newNode;
  tail_ = newNode;
  length_++;
}

/**
 * Helper function to split a sequence of linked memory at the node
 * splitPoint steps **after** start. In other words, it should disconnect
 * the sequence of linked memory after the given number of nodes, and
 * return a pointer to the starting node of the new sequence of linked
 * memory.
 *
 * This function **SHOULD NOT** create **ANY** new List or ListNode objects!
 *
 * This function is also called by the public split() function located in
 * List-given.hpp
 *
 * @param start The node to start from.
 * @param splitPoint The number of steps to walk before splitting.
 * @return The starting node of the sequence that was split off.
 */
template <typename T>
typename List<T>::ListNode * List<T>::split(ListNode * start, int splitPoint) {
  /// @todo Graded in MP3.1
  if(start == NULL || length_ < splitPoint) return NULL;
  if(splitPoint == 0) return start;
  
  ListNode * curr = start;

  for (int i = 0; i < splitPoint - 1 && curr != NULL; i++) {
    if(curr -> next != NULL) curr = curr->next;
  }

  if (curr != NULL) {
      curr = curr -> next;
      curr->prev->next = NULL;
      tail_ = curr -> prev;
      curr->prev = NULL;
      return curr;
  }

  return NULL;
}

/**
  * Modifies List using the rules for a TripleRotate.
  *
  * This function will to a wrapped rotation to the left on every three 
  * elements in the list starting for the first three elements. If the 
  * end of the list has a set of 1 or 2 elements, no rotation all be done 
  * on the last 1 or 2 elements.
  * 
  * You may NOT allocate ANY new ListNodes!
  */
template <typename T>
void List<T>::tripleRotate() {
  // @todo Graded in MP3.1
  if(head_ == NULL || length_ < 3) return;
  int count = length_ /3;
  ListNode* start = head_;
  ListNode* startPre;
  ListNode* end = head_ -> next -> next;
  ListNode* endNext;
  for(int i = 0; i < count; i++) {
      startPre = start -> prev;
      endNext = end -> next;
      start -> next -> prev = startPre;
      start -> next = endNext;
      end -> next = start;

      if(endNext == NULL) tail_ = start;
      else endNext -> prev = start;

      if(startPre == NULL) head_ = end -> prev;
      else startPre -> next = end -> prev;
      
      if(endNext != NULL) {
          start = endNext;
          end = start -> next -> next;
      }
  }
  return;
}

/**
 * Reverses the current List.
 */
template <typename T>
void List<T>::reverse() {
  reverse(head_, tail_);
}

/**
 * Helper function to reverse a sequence of linked memory inside a List,
 * starting at startPoint and ending at endPoint. You are responsible for
 * updating startPoint and endPoint to point to the new starting and ending
 * points of the rearranged sequence of linked memory in question.
 *
 * @param startPoint A pointer reference to the first node in the sequence
 *  to be reversed.
 * @param endPoint A pointer reference to the last node in the sequence to
 *  be reversed.
 */
template <typename T>
void List<T>::reverse(ListNode *& startPoint, ListNode *& endPoint) {
  /// @todo Graded in MP3.2
  if(startPoint == endPoint) return;
  ListNode* temp;
  ListNode* curr = startPoint;
  ListNode* startPre = startPoint -> prev;
  ListNode* endNext = endPoint -> next;
  
  while(curr != endPoint) {
      temp = curr -> prev;
      curr -> prev = curr -> next;
      curr -> next = temp;
      curr = curr -> prev;
  }
  
  curr -> next = curr -> prev;
  curr -> prev = startPre;
  startPoint -> next = endNext;
  if(startPre == NULL) head_ = endPoint;
  else startPre -> next = endPoint;
  if(endNext == NULL) tail_ = startPoint;
  else endNext -> prev = startPoint;
  
  temp = startPoint;
  startPoint = endPoint;
  endPoint = temp;
}

/**
 * Reverses blocks of size n in the current List. You should use your
 * reverse( ListNode * &, ListNode * & ) helper function in this method!
 *
 * @param n The size of the blocks in the List to be reversed.
 */
template <typename T>
void List<T>::reverseNth(int n) {
  /// @todo Graded in MP3.2
  if(head_ == NULL || n <= 1 || length_ <= 1) return;
  if(n >= length_) reverse();
  ListNode* start = head_;
  ListNode* end = head_;

  while(start != NULL) {
      end = start;
      int count = n - 1;
      while(count > 0) {
          if(end -> next != NULL) end = end -> next;
          count--;
      }
      reverse(start, end);
      start = end -> next;
  }
}


/**
 * Merges the given sorted list into the current sorted list.
 *
 * @param otherList List to be merged into the current list.
 */
template <typename T>
void List<T>::mergeWith(List<T> & otherList) {
    // set up the current list
    head_ = merge(head_, otherList.head_);
    tail_ = head_;

    // make sure there is a node in the new list
    if (tail_ != NULL) {
        while (tail_->next != NULL)
            tail_ = tail_->next;
    }
    length_ = length_ + otherList.length_;

    // empty out the parameter list
    otherList.head_ = NULL;
    otherList.tail_ = NULL;
    otherList.length_ = 0;
}

/**
 * Helper function to merge two **sorted** and **independent** sequences of
 * linked memory. The result should be a single sequence that is itself
 * sorted.
 *
 * This function **SHOULD NOT** create **ANY** new List objects.
 *
 * @param first The starting node of the first sequence.
 * @param second The starting node of the second sequence.
 * @return The starting node of the resulting, sorted sequence.
 */
template <typename T>
typename List<T>::ListNode * List<T>::merge(ListNode * first, ListNode* second) {
  /// @todo Graded in MP3.2
  if(first == NULL && second != NULL) return second;
  else if(first != NULL && second == NULL) return first;
  else if(first == NULL && second == NULL) return NULL;
  
  ListNode* s1 = first;
  ListNode* s2 = second;
  ListNode* result;
  ListNode* tempR;
  
  if(s1 -> data < s2 -> data) {
      result = s1;
      s1 = s1 -> next;
  }else {
      result = s2;
      s2 = s2 -> next;
  }
  tempR = result;

  while (s1 != NULL || s2 != NULL) {
      
      if(s2 != NULL && (s1 == NULL || s2 -> data < s1 -> data)) {
          tempR -> next = s2;
          tempR -> next -> prev = tempR;
          s2 = s2 -> next;
          tempR = tempR -> next;
      }else {
	  tempR -> next = s1;
          tempR -> next -> prev = tempR;
          s1 = s1 -> next;
          tempR = tempR -> next;
      }
  }
  
  return result;
}

/**
 * Sorts a chain of linked memory given a start node and a size.
 * This is the recursive helper for the Mergesort algorithm (i.e., this is
 * the divide-and-conquer step).
 *
 * Called by the public sort function in List-given.hpp
 *
 * @param start Starting point of the chain.
 * @param chainLength Size of the chain to be sorted.
 * @return A pointer to the beginning of the now sorted chain.
 */
template <typename T>
typename List<T>::ListNode* List<T>::mergesort(ListNode * start, int chainLength) {
  /// @todo Graded in MP3.2
  if(chainLength <= 1) return start;
  
  ListNode* second = split(start, chainLength / 2);
  start = mergesort(start, chainLength / 2);
  ListNode* end = mergesort(second, chainLength - chainLength / 2);
  return merge(start, end);
}
