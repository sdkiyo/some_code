#include "../include/sem_api.h"


//inline int sem_simple_create(sem_t **semaphore_addr, const char *semaphore_name)
//{
//	errno = 0;
//	if ((*semaphore_addr = sem_open(semaphore_name, O_CREAT, 0777, 0)) == SEM_FAILED)
//	{
//		fprintf(stderr, "\033[31msem_open() failed. in sem_simple_create(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//	return 0;
//}

//inline int sem_simple_open(sem_t **semaphore_addr, const char *semaphore_name)
//{
//	errno = 0;
//	if ((*semaphore_addr = sem_open(semaphore_name, 0)) == -1)
//	{
//		fprintf(stderr, "\033[31msem_open() failed. in sem_simple_open(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//	return 0;
//}
