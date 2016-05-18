/*
 * Single_Linked_List_Functions.c
 *
 *  Created on: May 18, 2016
 *      Author: Ahmed
 */
#include<stdio.h>
#include<stdlib.h>
#include "Single_Linked_List_Prototypes.h"

static struct node* head = NULL;

void rearrange(struct node* first)
    {

    struct node* second = first->next;

    if (first == head)
	{

	first->next = second->next;

	head = second;

	second->next = first;
	}
    else
	{

	struct node* end = second->next;
	struct node* start = head;

	while ((start->next) != first)
	    {
	    start = start->next;
	    }

	start->next = second;

	first->next = end;

	second->next = first;

	}

    }

struct node* get_end_list(void)
    {

    struct node* temp = head;

    while (temp->next)
	{
	temp = temp->next;
	}

    return temp;
    }

void add_node(int newval)
    {

    struct node* temp;

    temp = (struct node*) malloc(sizeof(struct node));

    temp->val = newval;

    temp->next = NULL;

    if (head)
	{

	get_end_list()->next = temp;
	}
    else
	{
	head = temp;
	}

    }

void display_list(void)
    {
    struct node* temp = head;

    while (temp)
	{

	printf("\n%d", temp->val);

	temp = temp->next;

	}

    }

void free_list(void)
    {

    struct node* temp;

    struct node* nodetoberemoved = head;

    head = NULL;

    while (nodetoberemoved)
	{

	temp = nodetoberemoved->next;

	free(nodetoberemoved);

	nodetoberemoved = temp;

	}

    }

struct node* search(int value)
    {

    struct node* temp = head;

    struct node* retpointer = NULL;

    while (temp && (!retpointer))
	{

	if (temp->val == value)
	    {
	    retpointer = temp;
	    }
	else
	    {

	    }

	temp = temp->next;

	}

    return retpointer;

    }

void delete_node(int value)
    {

    struct node* temp = search(value);

    if (temp)
	{

	if (temp == head)
	    {

	    head = temp->next;

	    free(temp);
	    }
	else
	    {

	    struct node* traverse = head;

	    while (traverse->next != temp)
		{

		traverse = traverse->next;

		}

	    temp = traverse->next;

	    traverse->next = traverse->next->next;

	    free(temp);
	    }

	}
    else
	{

	printf("value doesn't exist to be removed\n");

	}

    }

void arrange(void)
    {

    struct node* temp = head;


    do
	{
	if (temp->next)
	    {

	    if ((temp->val) > (temp->next->val))
		{
		rearrange(temp);
		}
	    else
		{
		temp = temp->next;

		}
	    }
	else
	    {
	    temp = temp->next;

	    }

	} while (temp);

    }
