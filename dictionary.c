#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//define the linked list
typedef struct node 
{
	struct node* next;
	char * word;
} Node;

//iterate over the list
void printList(Node * head) {
    Node * current = head;

    while (current != NULL) {
        printf("%s\n", current->word);
        current = current->next;
    }
}


void addWord(Node * head, char * word) {
    Node * current = head;
    while (current->next != NULL) {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = malloc(sizeof(Node));
    current->next->word = word;
    current->next->next = NULL;
}

int main(){

    //creating the fisrt node of the list
    Node * head = NULL;
    head = malloc(sizeof(Node));
    if (head == NULL) {
        return 1;
    }

    head->word = "hello";
    head->next = NULL;

    

    addWord(head,"hi");

    printList(head);

    return 0;
}
