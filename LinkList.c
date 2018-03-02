#include <stdlib.h>
#include <stdio.h>
typedef struct LinkQueueNode
{
  int data;
  struct LinkQueueNode  *next;
}LinkQueueNode;
typedef struct  LinkQueue
{
  LinkQueueNode *record;
  LinkQueueNode *head;
  LinkQueueNode  *tail;
}LinkQueue;
LinkQueue* InitLinkqueue()
{
	LinkQueue* lq = (LinkQueue*)malloc(sizeof(LinkQueue));
        lq->record = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
	lq->record->data = 0;
	lq->record->next = NULL;
	lq->head = lq->record;
	lq->tail = lq->record;
	return lq;
}
void IntoLinkQueue(LinkQueue *lq, int d)
{
   LinkQueueNode *t = (LinkQueueNode*)malloc(sizeof(LinkQueueNode));
   t->data = d;
   t->next =   lq->tail->next;
   lq->tail->next = t;
   lq->tail = t;
   return;
}
void TraverseLinkQueue(LinkQueue *lq)
{
  LinkQueueNode *t = lq->head->next;
  while(t != NULL)
  {
	printf("%d",t->data);
	t = t->next;
  }
  return;
}
//test code

//int main()
//{
//  LinkQueue *lq = InitLinkqueue(lq);
////  printf("%d",lq->record->data);
//  IntoLinkQueue(lq,1);
//  IntoLinkQueue(lq,2);
// // IntoLinkQueue(lq,3);
// // IntoLinkQueue(lq,4);
//  TraverseLinkQueue(lq);
//  return 0;
//}
