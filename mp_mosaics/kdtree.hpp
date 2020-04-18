/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
    if(first[curDim] != second[curDim]) return first[curDim] < second[curDim];
    else return first < second;
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
     int pt = dis(potential, target);
     int ct = dis(currentBest, target);
     if(pt != ct) return pt < ct;
     else return potential < currentBest;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
    size = newPoints.size();
    if(size == 0) root = NULL;
    else {
        for(auto p : newPoints){
            points.push_back(p);
        }
        root = construct(0, size-1, 0);
    }
}

template <int Dim>                                                                 
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::construct(int begin, int end, int dim){
    if(begin == end) return new KDTreeNode(points[begin]);
    else if(begin > end) return NULL;
    else{					//else if(begin > end) return NULL;
        int median = (begin + end) / 2;
        int newDim = (dim + 1) % Dim;
        quickSelect(begin, end, median, dim);
        KDTreeNode* current = new KDTreeNode(points[median]);
        current->left = construct(begin, median-1, newDim);
        current->right = construct(median+1, end, newDim); 
        return current;
    }
}

template <int Dim>
void KDTree<Dim>::quickSelect(int begin, int end, int median, int dim){
    while(begin != end){ //while(begin < end)
        Point<Dim> middle = points[median];
        points[median] = points[end];
        points[end] = middle;
        int target = begin;
        for(int i = begin; i < end; i++) {
            if(smallerDimVal(points[i], middle, dim) || points[i] == middle){
                Point<Dim> temp = points[target];
                points[target] = points[i];
                points[i] = temp;
                target++; 
            }
        }
        Point<Dim> temp = points[target];
        points[target] = points[end];
        points[end] = temp;
        if(median == target) return;
        else if(median > target) begin = target + 1;
        else end = target - 1;
    }
}
template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
    this = new KDTree(other.points);
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */
    if(*this != rhs){
        destroy();
        this = new KDTree(rhs.points);
    }
    return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
    destroy();
}

template <int Dim>
void KDTree<Dim>::destroy(){
    points.clear();
    size = 0;
    destroy(root);
}

template <int Dim>                                                                  
void KDTree<Dim>::destroy(typename KDTree<Dim>::KDTreeNode* node){
    if(node == NULL) return;
    
    destroy(node->left);
    destroy(node->right);
    delete node;
    node = NULL;
    
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */
    return findNearestNeighbor(query, root, 0);
}

template <int Dim>                                                                  
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query, typename KDTree<Dim>::KDTreeNode* node, int dim) const {
    if(node->left == NULL && node->right == NULL) return node->point;
    Point<Dim> currentBest = node->point;
    Point<Dim> temp = currentBest;
    bool isSmaller = smallerDimVal(query, currentBest, dim);
    int newDim = (dim + 1) % Dim;
    if(isSmaller && node->left != NULL) {
        temp = findNearestNeighbor(query, node->left, newDim);
    }else if(!isSmaller && node->right != NULL){
        temp = findNearestNeighbor(query, node->right, newDim);
    }

    if(shouldReplace(query, currentBest, temp)) currentBest = temp;
    
    if(dis(query, currentBest)>=(query[dim]-node->point[dim])*(query[dim]-node->point[dim])){
        if(!isSmaller && node->left != NULL){
            temp = findNearestNeighbor(query, node->left, newDim);
            if(shouldReplace(query, currentBest, temp)) currentBest = temp;
        }else if(isSmaller && node->right != NULL){
            temp = findNearestNeighbor(query, node->right, newDim);
            if(shouldReplace(query, currentBest, temp)) currentBest = temp;
        }
    }
    return currentBest;
}

template<int Dim>
int KDTree<Dim>::dis(const Point<Dim>& first, const Point<Dim>& second)const{
    int dis = 0;
    for(int i = 0; i < Dim; i++){
        dis += (first[i]-second[i])*(first[i]-second[i]);
    }
    return dis;
}
