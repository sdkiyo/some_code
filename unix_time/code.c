



















//	const int year_of_start = (tp.tv_sec / 31556926) + 1970;// x = years of start
//	printf("year_of_start = %d\n", year_of_start);
//
//	const int leap_years = (year_of_start - 1969) / 4;
//	printf("leap_years = %d\n", leap_years);
//
//	const int days_of_start = tp.tv_sec / 86400;
//	printf("days_of_start = %d\n", days_of_start);
//
//	x = days_of_start - leap_years;// x = days with out leap days
//	printf("days_of_start with out leap deay = %d\n", x);
//
//	int day_in_year = x % 365;// x = days in this year
//	printf("day_in_year = %d\n", day_in_year);



//	printf("y%ld/m%ld/d%ld h%ld:m%ld:s%ld.%ld\n", (tp.tv_sec / 31536000) + 1970, tp.tv_sec, tp.tv_sec, tp.tv_sec, tp.tv_sec, tp.tv_sec, tp.tv_nsec);
//	for (long long i = 0; i < 1999999999; i++) {
//	}
//	clock_gettime(CLOCK_REALTIME, &tp);
//	printf("%ld:%ld\n", tp.tv_sec, tp.tv_nsec);
//	for (long long i = 0; i < 1999999999; i++) {
//	}
//	clock_gettime(CLOCK_REALTIME, &tp);
//	printf("%ld:%ld\n", tp.tv_sec, tp.tv_nsec);
//	for (long long i = 0; i < 1999999999; i++) {
//	}
//
//	clock_gettime(CLOCK_REALTIME, &tp);
//	printf("%ld:%ld\n", tp.tv_sec, tp.tv_nsec);

















//	const int time_zone = 3;
//	tp.tv_sec = tp.tv_sec + (time_zone * 3600);
//	int year_of_start = (int)ceil(tp.tv_sec / 31556926);// x = years of start
//	printf("year_of_start = %d\n", year_of_start);
//
//	const int leap_years = (year_of_start - 2) / 4;
//	printf("leap_years = %d\n", leap_years);
//
//
//	int isLeap = (year_of_start - 2) % 4;
//	if (isLeap == 0)
//	{
//		isLeap = 1;
//	}
//	else
//	{
//		isLeap = 0;
//	}
//	printf("leap_years = %d\n", isLeap);
//
//	const int days_of_start = (tp.tv_sec / 86400);
//	printf("days_of_start = %d\n", days_of_start);
//
//	const int day_in_year = (days_of_start - leap_years) % 365;// x = days in this year
//	printf("day_in_year = %d\n", day_in_year);
//
//	int month = 0;
//	int day = 0;
//	if (day_in_year >= 1 && day_in_year <= 31)
//	{
//		month = 1;
//		day = day_in_year;
//	}
//	if (day_in_year >= 32 && day_in_year <= 59+isLeap)
//	{
//		month = 2;
//		day = day_in_year - 31;
//	}
//	if (day_in_year >= 60+isLeap && day_in_year <= 90+isLeap)
//	{
//		month = 3;
//		day = day_in_year - 59+isLeap;
//	}
//	if (day_in_year >= 91+isLeap && day_in_year <= 120+isLeap)
//	{
//		month = 4;
//		day = day_in_year - 90+isLeap;
//	}
//	if (day_in_year >= 121+isLeap && day_in_year <= 151+isLeap)
//	{
//		month = 5;
//		day = day_in_year - 120+isLeap;
//	}
//	if (day_in_year >= 152+isLeap && day_in_year <= 181+isLeap)
//	{
//		month = 6;
//		day = day_in_year - 151+isLeap;
//	}
//	if (day_in_year >= 182+isLeap && day_in_year <= 212+isLeap)
//	{
//		month = 7;
//		day = day_in_year - 181+isLeap;
//	}
//	if (day_in_year >= 213+isLeap && day_in_year <= 243+isLeap)
//	{
//		month = 8;
//		day = day_in_year - 212+isLeap;
//	}
//	if (day_in_year >= 244+isLeap && day_in_year <= 273+isLeap)
//	{
//		month = 9;
//		day = day_in_year - 243+isLeap;
//	}
//	if (day_in_year >= 274+isLeap && day_in_year <= 304+isLeap)
//	{
//		month = 10;
//		day = day_in_year - 273+isLeap;
//	}
//	if (day_in_year >= 305+isLeap && day_in_year <= 334+isLeap)
//	{
//		month = 11;
//		day = day_in_year - 304+isLeap;
//	}
//	if (day_in_year >= 335+isLeap && day_in_year <= 365+isLeap)
//	{
//		month = 12;
//		day = day_in_year - 334+isLeap;
//	}
//	printf("%d/%d/%d\n",  year_of_start + 1970, month, day);
//
//
//	int in_day_seconds = tp.tv_sec - (days_of_start * 86400);//
//	printf("in_day_seconds = %d\n", in_day_seconds);
//
//	int in_day_hours = in_day_seconds / 3600;//
//	printf("in_day_hours = %d\n", in_day_hours);
//
//	int in_hour_minuts = (in_day_seconds - (in_day_hours * 3600)) / 60;//
//	printf("in_hours_minuts = %d\n", in_hour_minuts);
//
//	int in_minute_seconds = in_day_seconds - (in_day_hours * 3600) - (in_hour_minuts * 60);
//	printf("seconds = %d\n", in_minute_seconds);
//	
//
//	printf("\033[33m%d/%d/%d %d:%d:%d.%ld\033[0m\n",  year_of_start + 1970, month, day, in_day_hours, in_hour_minuts, in_minute_seconds, tp.tv_nsec);
//
//
//
//	printf("time = %ld\n", tp.tv_sec);
