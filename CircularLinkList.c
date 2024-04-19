#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int number;
    struct node *next;
};

/*Initialize nodes */

struct node *last;
struct node *one =NULL;
struct node *two =NULL;
struct node *three =NULL;

/ allocate memory

one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));


/Assign number value

one-> number = 5;
two-> number = 6;
three-> number = 7;


/ Connect nodes 

one -> next = two;
two -> next = three;
three -> next = one;

last = three;

