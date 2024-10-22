#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* create_node(int data) {
    struct node* new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void append_node(struct node** head, int data) {
    struct node* new_node = create_node(data);
    if (*head == NULL) {
        *head = new_node;  
    }
    else {
        struct node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next; 
        }
        temp->next = new_node; 
    }
}

void print_list(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void free_list(struct node* head) {
    struct node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);  
    }
}

int main() {
    struct node* head = NULL; 

    append_node(&head, 10);
    append_node(&head, 20);
    append_node(&head, 30);

    printf("Linked List: ");
    print_list(head);

    free_list(head);

    return 0;
}
