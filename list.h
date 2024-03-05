#ifndef LIST_H
#define LIST_H

#define MAX_LIST 100

typedef int ListEntry;

typedef struct list {
  ListEntry entry[MAX_LIST];
  int size;
} List;

void createList(List*);
bool listEmptry(List*);
bool listFull(List*);
int listSize(List*);
void destroyList(List*);
void insertList(int, ListEntry, List*);
void deleteList(int, ListEntry*, List*);
void retrieveList(int, ListEntry*, List*);
void replaceList(int, ListEntry, List*);
void traverseList(List*, void (*)(ListEntry));

#endif