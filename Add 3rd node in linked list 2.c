#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
 int data;
 struct node *link;
};

int main()
{

 struct node *head = malloc(sizeof(struct node));
 head->data = 13;
 head->link = NULL;

 struct node *current = malloc(sizeof(struct node));
 current->data = 93;
 current->link = NULL;

 head->link=current;

 current = malloc(sizeof(struct node));
 current->data = 1;
 current->link = NULL;

 head->link->link = current;

getch();

}
