
//int shm_write(const void *addr, const char *msg, const uint32_t shm_min_size)
//{
//	errno = 0;
//
//	int len = 0;
//	len = strlen(msg);
//	len = len<=shm_min_size ? len : shm_min_size;
//
//	void *addr = mmap(nullptr, shm_min_size+1, PROT_WRITE|PROT_READ, MAP_SHARED, *shm_descriptor, 0);
//	if (addr == MAP_FAILED)
//	{
//		fprintf(stderr, "\033[31mmmap() failed. in shm_write(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//
//#ifdef this_DEBUG
//	fprintf(stderr, "len = %d : shm_desc = %d : addr = %d\nGet from old shared memory: %s\n", len, shm_descriptor, (char*)addr, (char*)addr);
//#endif
//
//	memcpy(addr, msg, len);
//
//#ifdef this_DEBUG
//	printf("\033[2m\033[33mshm writed.\033[0m\nGet from new shared memory: %s\n", (char*)addr);
//#endif
//	munmap(addr, shm_min_size);
//	return 0;
//}

//int shm_read(const int *shm_descriptor, char *msg, const uint32_t shm_min_size)
//{
//	errno = 0;
//	void *addr = mmap(nullptr, shm_min_size+1, PROT_READ, MAP_SHARED, *shm_descriptor, 0);
//	if (addr == MAP_FAILED)
//	{
//		fprintf(stderr, "\033[31mmmap() failed. in shm_read(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//#ifdef this_DEBUG
//	printf("Get from shared memory: %s\n", (char*)addr);
//#endif
//
//	msg = malloc(sizeof(char) * strlen((char*)addr));
//	for (uint16_t i = 0; i < strlen((char*)addr); i++)
//	{
//		msg[i] = (char*)addr[i];
//	}
//	munmap(addr, shm_min_size);
//	return 0;
//}

//inline int shm_print(const int *shm_descriptor, const uint32_t shm_min_size)
//{
//	errno = 0;
//	void *addr = mmap(nullptr, shm_min_size+1, PROT_READ, MAP_SHARED, *shm_descriptor, 0);
//	if (addr == MAP_FAILED)
//	{
//		fprintf(stderr, "\033[31mmmap() failed. in shm_print(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//	printf("Get from shared memory: %s\n", (char*)addr);
//	munmap(addr, shm_min_size);
//	return 0;
//}
//
//
//
//
//
//
//	off_t a = 1234567;
//	shm_write(&ch, &mem_size, sizeof(off_t));
//	off_t old_mem_size = 0;
//	memcpy(&old_mem_size, *addr, sizeof(old_mem_size));
//	if (old_mem_size > *mem_size) {
//		if (ftruncate(*shm_descriptor, old_mem_size) == -1)
//		{
//			fprintf(stderr, "\033[31mftruncate() failed. in shm_write(). errno: %s\033[0m\n", strerror(errno));
//			return -1;
//		}
//		if ((ch->addr = mremap(ch->addr, *mem_size, data_size, 0, nullptr)) == MAP_FAILED)
//		{
//			fprintf(stderr, "\033[31mremap() failed. in shm_write(). errno: %s\033[0m\n", strerror(errno));
//			return -1;
//		}
//	}
//	printf("get mem size: %d\n", x);
//
//
//typedef struct SharedMemoryInstance {
//	char shared_memory_name[SHM_CHANNEL_NAME_LEN];
//	char info_shared_memory_name[SHM_CHANNEL_NAME_LEN+INFO_SUFFIX_LEN];
//	sem_t *semaphore_addr;
//	off_t shared_memory_size;
//	void *in_process_addr;
//	void *info_in_process_addr;
//	int shared_memory_file_descriptor;
//	int info_shared_memory_file_descriptor;
//} SharedMemoryObjectInfo;
//
//sharedMemoryInstance instance;
//channel.name = "hello";
//channel.semaphore_addr = 1;
//channel.info_shared_memory_file_descriptor = 0;
//
//shm_write(&channel.shared_memory_file_descriptor);
//shn_unlink(info_shared_memory_name);
//
//int shmInstanceOpen(instance, READ|WRITE|ALL);



//typedef struct shm_channel {
//	char shm_name[SHM_CHANNEL_NAME_LEN];
//	char info_shm_name[SHM_CHANNEL_NAME_LEN+INFO_SUFFIX_LEN];
//	sem_t *sem_addr;
//	off_t shm_size;
//	void *addr;
//	void *info_addr;
//	int shm_fd;
//	int info_shm_fd;
//} shm_channel;










//int shm_simple_open(struct SharedMemoryInfo *shmInfo)
//{
//	if (strlen(shmInfo->shmName) > 8) {
//		fprintf(stderr, "\033[33mThe name length for shared memory exceeds the allowed value, this may lead to undefined behavior.\033[0m\n");
//	}
//
//	errno = 0;
//	if ((shmInfo->pSemaphore = sem_open(shmInfo->shmName, O_CREAT, 0777, 1)) == SEM_FAILED)
//	{
//		fprintf(stderr, "\033[31msem_open() failed. in sem_simple_create(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//
//	//char buff[strlen(ch->shm_name)+INFO_SUFFIX_LEN];
//	//char buff[(sizeof(ch->shm_name) / sizeof(*ch->shm_name)) + INFO_SUFFIX_LEN];
//	strcpy(shmInfo->shmInfoName, shmInfo->shmName);
//	strcat(shmInfo->shmInfoName, SHM_INFO_SUFFIX);
//	//ch->info_shm_name = buff;
//
//	sem_wait(shmInfo->pSemaphore);
//
//	if ((shmInfo->shmInfoFileDescriptor = shm_open(shmInfo->shmInfoName, O_CREAT|O_RDWR, 0777)) == -1)
//	{
//		fprintf(stderr, "\033[31mshm_open() failed. in shm_simple_open(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//
//	if (ftruncate(shmInfo->shmInfoFileDescriptor, SHM_INFO_BASE_SIZE) == -1)
//	{
//		fprintf(stderr, "\033[31mftruncate() failed. in shm_simple_open(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//
//	if ((shmInfo->pMappedShmInfoAddr = mmap(nullptr, SHM_INFO_BASE_SIZE, PROT_WRITE|PROT_READ, MAP_SHARED, shmInfo->shmInfoFileDescriptor, 0)) == MAP_FAILED)
//	{
//		fprintf(stderr, "\033[31mmmap() failed. in shm_open(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//
//	off_t old_mem_size = 0;
//	memcpy(&old_mem_size, shmInfo->pMappedShmInfoAddr, SHM_INFO_BASE_SIZE);
//#ifdef this_DEBUG
//	printf("get from info shm: \033[36m%ld\033[0m\n", old_mem_size);
//#endif
//
//	if (old_mem_size == 0)
//	{
//		memcpy(shmInfo->pMappedShmInfoAddr, &shmInfo->shmByteSize, SHM_INFO_BASE_SIZE);
//	}
//	else if (old_mem_size < shmInfo->shmByteSize)
//	{
//		memcpy(shmInfo->pMappedShmInfoAddr, &shmInfo->shmByteSize, SHM_INFO_BASE_SIZE);
//	}
//	else
//	{
//		shmInfo->shmByteSize = old_mem_size;
//	}
//#ifdef this_DEBUG
//	printf("shm_size = \033[36m%ld\033[0m, old_size = \033[36m%ld\033[0m\n", shmInfo->shmByteSize, old_mem_size);
//#endif
//
//	if ((shmInfo->shmFileDescriptor = shm_open(shmInfo->shmName, O_CREAT|O_RDWR, 0777)) == -1)
//	{
//		fprintf(stderr, "\033[31mshm_open() failed. in shm_simple_open(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//
//	if (ftruncate(shmInfo->shmFileDescriptor, shmInfo->shmByteSize) == -1)
//	{
//		fprintf(stderr, "\033[31mftruncate() failed. in shm_simple_open(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//
//	if ((shmInfo->pMappedShmAddr = mmap(nullptr, shmInfo->shmByteSize, PROT_WRITE|PROT_READ, MAP_SHARED, shmInfo->shmFileDescriptor, 0)) == MAP_FAILED)
//	{
//		fprintf(stderr, "\033[31mmmap() failed. in shm_open(). errno: %s\033[0m\n", strerror(errno));
//		return -1;
//	}
//
//	sem_post(shmInfo->pSemaphore);
//	return 0;
//}















//int shm_simple_open(struct SharedMemoryInfo *shmInfo)
//{
//	if (strlen(shmInfo->shmName) > 8) {
//		fprintf(stderr, "\033[33mThe name length for shared memory exceeds the allowed value, this may lead to undefined behavior.\033[0m\n");
//	}
//
//	shmInfo->pSemaphore = sem_open(shmInfo->shmName, O_CREAT, 0777, 1)
//
//	strcpy(shmInfo->shmInfoName, shmInfo->shmName);
//	strcat(shmInfo->shmInfoName, SHM_INFO_SUFFIX);
//
//	sem_wait(shmInfo->pSemaphore);
//
//	shmInfo->shmInfoFileDescriptor = shm_open(shmInfo->shmInfoName, O_CREAT|O_RDWR, 0777)
//	ftruncate(shmInfo->shmInfoFileDescriptor, SHM_INFO_BASE_SIZE)
//	shmInfo->pMappedShmInfoAddr = mmap(nullptr, SHM_INFO_BASE_SIZE, PROT_WRITE|PROT_READ, MAP_SHARED, shmInfo->shmInfoFileDescriptor, 0)
//
//	off_t old_mem_size = 0;
//	memcpy(&old_mem_size, shmInfo->pMappedShmInfoAddr, SHM_INFO_BASE_SIZE);
//
//	if (old_mem_size == 0)
//	{
//		memcpy(shmInfo->pMappedShmInfoAddr, &shmInfo->shmByteSize, SHM_INFO_BASE_SIZE);
//	}
//	else if (old_mem_size < shmInfo->shmByteSize)
//	{
//		memcpy(shmInfo->pMappedShmInfoAddr, &shmInfo->shmByteSize, SHM_INFO_BASE_SIZE);
//	}
//	else
//	{
//		shmInfo->shmByteSize = old_mem_size;
//	}
//
//	shmInfo->shmFileDescriptor = shm_open(shmInfo->shmName, O_CREAT|O_RDWR, 0777)
//	ftruncate(shmInfo->shmFileDescriptor, shmInfo->shmByteSize)
//	shmInfo->pMappedShmAddr = mmap(nullptr, shmInfo->shmByteSize, PROT_WRITE|PROT_READ, MAP_SHARED, shmInfo->shmFileDescriptor, 0)
//
//	sem_post(shmInfo->pSemaphore);
//	return 0;
//}



















//#define SHM_CHANNEL_SUFFIX ".ch"
//#define SHM_CHANNEL_BASE_SIZE 128

//#define _shm_this_DEBUG


//#define red "\033[31m"
//#define reset_color "\033[0m"
//
//#ifdef _shm_this_DEBUG
//#define check_return_value(return_value, msg){	\
//	if (return_value == -1)			\
//	{					\
//		fprintf(stderr, red"%s() line %d \'" msg "\' errno: %s%s", __func__, __LINE__, strerror(errno), reset_color"\n");\
//		return -1;			\
//	}					\
//}
//#else
//#define check_return_value(return_value, msg){}
//#endif

//#ifdef _shm_this_DEBUG
//#define check_mmap_return_value(return_value, msg){\
//	if (return_value == MAP_FAILED)\
//	{\
//		fprintf(stderr, red"%s() line %d \'" msg "\' errno: %s%s", __func__, __LINE__, strerror(errno), reset_color"\n");\
//		return -1;\
//	}\
//}
//#else
//#define check_mmap_return_value(return_value, msg){}
//#endif

//#ifdef _shm_this_DEBUG
//#define check_sem_return_value(return_value, msg){\
//	if (return_value == SEM_FAILED)\
//	{\
//		fprintf(stderr, red"%s() line %d \'" msg "\' errno: %s%s", __func__, __LINE__, strerror(errno), reset_color"\n");\
//		return -1;\
//	}\
//}
//#else
//#define check_sem_return_value(return_value, msg){}
//#endif

//#ifdef _shm_this_DEBUG
//#define print_debug(str, data){\
//	fprintf(stderr, str, data);}
//#else
//#define print_debug(str, data){}
//#endif
