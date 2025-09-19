#pragma once
#ifndef _SHM_API_SEM_API_H_
#define _SHM_API_SEM_API_H_

#include "shm_includes.h"

int sem_simple_create(sem_t **semaphore_addr, const char *semaphore_name);

int sem_simple_open(sem_t **semaphore_addr, const char *semaphore_name);

#endif
