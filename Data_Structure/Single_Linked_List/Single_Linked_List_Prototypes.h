/*
 * Linked_List_Prototypes.h
 *
 *  Created on: May 18, 2016
 *      Author: Ahmed
 */

#ifndef LINKED_LIST_PROTOTYPES_H_
#define LINKED_LIST_PROTOTYPES_H_

struct node{

    int val;

    struct node* next;
};

void add_node(int newval);

void display_list (void);

void free_list(void);

struct node* search (int value);

void delete_node (int value);

void arrange (void);




#endif /* LINKED_LIST_PROTOTYPES_H_ */
