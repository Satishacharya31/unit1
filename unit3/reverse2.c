
#include <stdio.h>
#include <string.h>

int main(void) {
	char s[1024];

	if (scanf("%1023s", s) != 1) {
		return 0;
	}

	int neg = 0;
	char *p = s;
	int len = (int)strlen(s);

	if (s[0] == '-') {
		neg = 1;
		p = s + 1;
		len -= 1;
	}

	char *start = p;
	char *end = p + len - 1;
	while (start < end) {
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}

	if (neg) putchar('-');
	printf("%s\n", p);

	return 0;
}
