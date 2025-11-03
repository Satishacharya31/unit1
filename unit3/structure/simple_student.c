#include <stdio.h>

#define N 5

typedef struct { int rollNo; char name[50]; float marks; } Student;

int main(void) {
	Student s[N];
	for (int i = 0; i < N; ++i) {
		/* Input: roll name marks (name without spaces) */
		if (scanf("%d %49s %f", &s[i].rollNo, s[i].name, &s[i].marks) != 3) return 0;
	}
	int idx = 0;
	for (int i = 1; i < N; ++i) if (s[i].marks > s[idx].marks) idx = i;
	printf("Top student: %d %s %.2f\n", s[idx].rollNo, s[idx].name, s[idx].marks);
	return 0;
}

