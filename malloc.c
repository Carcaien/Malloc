#include "structure.h"

pthread_mutex_t	mutex = PTHREAD_MUTEX_INITIALIZER;

void*           	malloc(size_t size) {
	t_blockMalloc 	*current;
	t_blockMalloc 	*last;

	pthread_mutex_lock(&mutex);
	if ((!size) || size < 0)
		return (NULL);
	//malloc
	pthread_mutex_unlock(&mutex);

	return (last->ptr);
}
