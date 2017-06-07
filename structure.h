#ifndef _STRUCT_H_
#define _STRUCT_H_

#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>

//sbrk fail
#define SBRK_ERROR 			(void*)-1

//Taille du block
#define BLOCK_SIZE 			12

typedef struct				s_blockMalloc {
  size_t     				size;     	//taille du bloc alloué
  int                  		free;     	//indicateur de disponibilité du bloc
  void*                    	ptr;      	//pointeur sur les données
  void*                  	end;  		//accès au bloc alloué
}                         	t_blockMalloc;

typedef struct	          	s_blockFree {
  t_blockMalloc          	*free;    	//Référencement à la structure s_blockMalloc
  struct s_blockFree     	*prev;    	//pointeur sur les données suivantes
  struct s_blockFree        *nxt;    	//pointeur sur les données précédente
}		         			t_blockFree;

extern pthread_mutex_t   	mutex;
extern 						*init;

void                       	free(void *ptr);
void*                    	malloc(size_t size);

#endif /*	_STRUCT_H_	*/
