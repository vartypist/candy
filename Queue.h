#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_SIZE 20 // Taille maximale de la file

struct Action {
    char name[20];
    int x1;
    int y1;
    int x2;
    int y2;
};

struct etQueue {
    Action actions[QUEUE_SIZE];
    int top;
    int next;
    int size;
};

// Prototypes des fonctions de la queue
void InitialiserQueue(etQueue* queue);
int AddQueue(etQueue* queue, Action action);
int GetQueue(etQueue* queue, Action& action);

#endif // QUEUE_H
