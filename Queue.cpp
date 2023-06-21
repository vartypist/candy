#include "Queue.h"

void InitialiserQueue(etQueue* queue) {
    queue->top = 0;
    queue->next = 0;
    queue->size = QUEUE_SIZE;
}

int AddQueue(etQueue* queue, Action action) {
    if (queue->next >= queue->size) {
        return 0;
    }
    queue->actions[queue->next] = action;
    queue->next++;
    return 1;
}

int GetQueue(etQueue* queue, Action& action) {
    if (queue->top == queue->next) {
        return 0;
    }


    action = queue->actions[queue->top];
    queue->top++;
    return 1;
}
