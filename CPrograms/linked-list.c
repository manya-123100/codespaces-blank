#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *next;
};
struct queue
{
    struct node *front;
    struct node *rear;
};

struct queue *q;

/* hoisting  */

void create_queue(struct queue *);
struct queue *insert(struct queue *, int);
struct queue *delete_element(struct queue *);
struct queue *display(struct queue *);
int peek(struct queue *);

//gobal scope


int main()
{
    // function scope

    int val , option;
    q = (struct queue *)malloc(sizeof(struct queue));
    create_queue(q);

    do
{
    printf("\n\n------Options------");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter an option: ");
        scanf("%d", &option);
        switch(option);

        

}
}


