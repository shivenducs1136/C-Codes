#include <stdio.h>
#include <stdlib.h>
 
struct node {
    int info;
    struct node* next;
};
 
struct node* last = NULL;
 
void addatlast()
{
    int data;
 
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
 
    printf("\nEnter data to be inserted : \n");
    scanf("%d", &data);
    if (last == NULL) {
        temp->info = data;
        temp->next = temp;
        last = temp;
    }
    else {
        temp->info = data;
        temp->next = last->next;
        last->next = temp;
        last = temp;
    }
}
 
void deleteAtIndex()
{
    int pos, i = 1;
    struct node *temp, *position;
    temp = last->next;
 
    if (last == NULL)
        printf("\nList is empty.\n");
 
    else {
 
        printf("\nEnter index : ");
        scanf("%d", &pos);
 
        while (i <= pos - 1) {
            temp = temp->next;
            i++;
        }
 
        position = temp->next;
        temp->next = position->next;
 
        free(position);
    }
}
 
void viewList()
{
    if (last == NULL)
        printf("\nList is empty\n");
 
    else {
        struct node* temp;
        temp = last->next;
        do {
            printf("\nData = %d", temp->info);
            temp = temp->next;
        } while (temp != last->next);
    }
}
 
int main()
{
    addatlast();
    addatlast();
    addatlast();
    deleteAtIndex();
    viewList();
 
    return 0;
}