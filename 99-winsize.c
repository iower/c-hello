#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

int main() {
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);

	printf("Width (columns): %d\n", w.ws_col);
	printf("Height (rows): %d\n", w.ws_row);
	return 0;
}
