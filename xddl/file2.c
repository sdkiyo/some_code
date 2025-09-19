
//		char* line = nullptr;
//		size_t byte_size = 0;
//		int lineLength = 0;
//		int8_t x = 0;
//		int line_count = 0;
//		while((lineLength = getline(&line, &byte_size, fp)) != -1)
//		{
//			if (strstr(line, "not found") != NULL)
//			{
//				line_count++;
//			}
//		}
//		printf("line_count = %d\n", line_count);
//		byte_size = 0;
//		fclose(fp);
//		free(line);
//		fp = nullptr;
//
//		char** gih = nullptr;
//		if (line_count > 0)
//		{
//			gih = malloc(sizeof(gih) * line_count);
//		}
//		int i = 0;
//
//		fp = fopen("/tmp/out_file_last.txt", "r");
//		if (fp == nullptr)
//		{
//			fprintf(stderr, "\033[31mfopen failed, errno: %s\n", strerror(errno));
//			exit(1);
//		}
//		int xyi = 0;
//		while((lineLength = getline(&line, &byte_size, fp)) != -1)
//		{
//			printf("len %d:%s", lineLength, line);
//			if (strstr(line, "not found") != NULL)
//			{
//				for (int j = 0; j < lineLength; j++)
//				{
//					if (line[j] == '\t')
//					{
//						continue;
//					}
//					if (line[j] != ' ')
//					{
//						xyi++;
//					}
//					if (line[j] == ' ')
//					{
//						break;
//					}
//				}
//				gih[i] = malloc(sizeof(**gih) * xyi+1);
//				for (int j = 0; j < lineLength; j++)
//				{
//					if (line[j] == '\t')
//					{
//						x--;
//						continue;
//					}
//					if (line[j] != ' ')
//					{
//						gih[i][j+x] = line[j];
//					}
//					if (line[j] == ' ')
//					{
//						gih[i][j+x] = '\0';
//						break;
//					}
//				}
//				printf("libName: %s\n", gih[i]);
//				i++;
//			}
//			printf("\n");
//		}
//
//		fclose(fp);
//		free(line);
//		if (line_count > 0)
//		{
//			for (int j = 0; j < line_count; j++)
//			{
//				free(gih[j]);
//			}
//			free(gih);
//		}
//
//
//		if (remove("/tmp/out_file_last.txt") == -1)
//		{
//			fprintf(stderr, "\033[31mremove failed, errno: %s\n", strerror(errno));
//		}
//		//printf("real: %s\n", gih);
//		printf("1 end\n");
