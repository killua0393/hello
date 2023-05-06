#include<stdio.h>

#define MAX_SIZE 10

int queue[MAX_SIZE], front = -1, rear = -1;

void enqueue(int value);
int dequeue();
void display();

int main()
{
    int choice, value;

    do
    {
        printf("\n\n*** MENU ***\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter the value to be enqueued: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                value = dequeue();
                if (value != -1)
                    printf("The dequeued value is %d\n", value);
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void enqueue(int value)
{
    if ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1))
    {
        printf("Queue is full. Enqueue operation cannot be performed.\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear = (rear + 1) % MAX_SIZE;
    queue[rear] = value;

    printf("Value %d enqueued successfully.\n", value);
}

int dequeue()
{
    int value;

    if (front == -1)
    {
        printf("Queue is empty. Dequeue operation cannot be performed.\n");
        return -1;
    }

    value = queue[front];

    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX_SIZE;

    return value;
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty. There are no elements to display.\n");
        return;
    }

    printf("The elements of the queue are: ");

    for (i = front; i != rear; i = (i + 1) % MAX_SIZE)
        printf("%d ", queue[i]);

    printf("%d\n", queue[rear]);
}
