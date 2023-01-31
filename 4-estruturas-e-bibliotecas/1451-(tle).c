#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node {
    char *text;
    struct node *next;
};

struct node *createNode(struct node * next);


int main() {
    char text[100001] = {""};

    while(scanf("%s", text) != EOF) {
        struct node *linkedList, *head, *tail;
        char aux[100001] = {""};
        int size = strlen(text), i=0, index=0;

        linkedList = createNode(NULL);
        linkedList->next = createNode(NULL);
        head = linkedList;
        tail = linkedList->next;
        for(; i<size; i++) {
            if(text[i] == '[') {
                strncpy(linkedList->text, aux, index);
                head = createNode(head);
                linkedList = head;

                strcpy(aux, "");
                index = 0;
                continue;

            }else if(text[i] == ']') {
                strncpy(linkedList->text, aux, index);
                tail->next = createNode(NULL);
                tail = tail->next;
                linkedList = tail;

                strcpy(aux, "");
                index = 0;
                continue;
            }

            aux[index] = text[i];
            index++;
        }

        strncpy(linkedList->text, aux, index);
        while(head) {
            printf("%s", head->text);
            head = head->next;
        }
    }

    return 0;
}


struct node *createNode(struct node * next) {
    struct node *newNode;

    newNode = (struct node *) malloc(sizeof(struct node *));
    newNode->text = (char *) malloc(sizeof(char) * 100001);
    newNode->next = next;

    return newNode;
}