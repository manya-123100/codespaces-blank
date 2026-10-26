
#include <stdio.h>
#define MAX 10

int queue[MAX];
int front = -1, rear = -1;
int peek(void);
int delete_element(void);


void insert(void)
{
    int val;

    printf("Enter the element you want to insert:\n");
    scanf("%d", &val);

    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = val;
        printf("Inserted %d into the queue.\n", val);
        
    }else if (rear == MAX - 1)
    {
        printf("The queue is full.\n");
        
    }else {
        rear++;
        queue[rear] = val;
        printf("Inserted %d into the queue.\n", val);
    }

    
}

void print(void){
    for(int i = front; i <= rear; i++){
        printf("%d ", queue[i]);
    }
}

int main(void)
{
    int option;

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

        printf("The option you entered is: %d\n", option);

        if(option == 1){
            insert();
            print();
        }
        
        if(option == 2){
            int val = delete_element();
            if(val != -1){
                printf("Deleted element: %d\n", val);
            }
        }
        if(option == 3){
            int val = peek();
            if(val != -1){
                printf("The front element of the queue is: %d\n", val);
            }
        }
        if(option == 4){
            print();
        }
    } while (option != 5);

    return 0;
}

int peek(void)
{
    if (front == -1 || front >rear)
    {
        printf("The queue is empty.\n");
        return -1;
    }
    else
    {
        return queue[front];
    }
}
