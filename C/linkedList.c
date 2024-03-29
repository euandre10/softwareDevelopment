#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int data;
    char string[50];
};

struct Node listValues(int data, const char *text);
void printList(struct Node list);

void main() {
    
    struct Node myList1 = listValues(100, "Hello world");
    struct Node myList2 = listValues(1000, "World");
    printList(myList1);
}

struct Node listValues(int data, const char *text) {
    struct Node newList;
    newList.data = data;
    strcpy(newList.string, text);
    return newList;
}

void printList(struct Node list) {
    struct Node *pointer = &list;
    printf("%d ", pointer->data);
    printf("%s ", pointer->string);
}