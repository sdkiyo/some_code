
//void foo(const char *const name)
//{
//	pid_t pid = fork();
//	if (pid == -1)
//	{
//		printf("it's -ERROR\n");
//		exit(1);
//	}
//	else if (pid == 0)
//	{
//		printf("it's 123\n");
//		execl(name, "program_1", nullptr);
//		exit(0);
//	}
//	else
//	{
//		int rv = 0;
//		waitpid(-1, &rv, 0);
//		printf("it's default\n");
//	}
//}
