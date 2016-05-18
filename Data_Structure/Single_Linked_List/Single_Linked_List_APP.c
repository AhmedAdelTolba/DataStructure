/*
 * Single_Linked_List_APP.c
 *
 *  Created on: May 18, 2016
 *      Author: Ahmed
 */
#include<stdio.h>
#include "Single_Linked_List_Prototypes.h"

int main()
    {

    add_node(150);
    add_node(500);
    add_node(10);
    add_node(50);

    arrange();
    arrange();

    display_list();

    return 0;

    }
