#include "structure.h"

pthread_mutex_t	mutex;

void            free(void *ptr) {
  pthread_mutex_lock(&mutex);
  pthread_mutex_unlock(&mutex);
}
