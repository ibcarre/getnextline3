#include "get_next_line.h"

int main()
{
	int fd = open("./text", O_RDONLY);
	char *s = get_next_line(fd);
	printf("%s  asdasd\n", s);
	free(s);
	s = get_next_line(fd);
	printf("%s\n", s);
	free(s);
	s = get_next_line(fd);
	printf("%s\n", s);
	free(s);
}
