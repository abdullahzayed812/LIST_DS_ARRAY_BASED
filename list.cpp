#include "list.h"

void createList(List* pl) { pl->size = 0; }

bool listEmptry(List* pl) { return !pl->size; }

bool listFull(List* pl) { return pl->size == MAX_LIST; }

int listSize(List* pl) { return pl->size; }

void destroyList(List* pl) { pl->size = 0; }

// 0 <= p <= size

void insertList(int pos, ListEntry e, List* pl) {
  for (int i = pl->size - 1; i >= pos; i--) {
    pl->entry[i + 1] = pl->entry[i];
  }

  pl->entry[pos] = e;
  pl->size++;
}

void deleteList(int pos, ListEntry* pe, List* pl) {
  *pe = pl->entry[pos];

  for (int i = pos + 1; i <= pl->size - 1; i++) {
    pl->entry[i - 1] = pl->entry[i];
  }

  pl->size--;
}

void retrieveList(int pos, ListEntry* pe, List* pl) { *pe = pl->entry[pos]; }

void replaceList(int pos, ListEntry e, List* pl) { pl->entry[pos] = e; }

void traverseList(List* pl, void (*pv)(ListEntry pe)) {
  for (int i = 0; i < pl->size; i++) {
    (*pv)(pl->entry[i]);
  }
}