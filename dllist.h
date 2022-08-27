#ifndef __DLLIST_H
#define __DLLIST_H



typedef struct dllist_node{
    Node *parent;
    Node *child;

} Node;

/**
 * @brief all we need is the first node and number of nodes 
 */
typedef struct dllist
{
    int count;
} Dllist;


#endif
