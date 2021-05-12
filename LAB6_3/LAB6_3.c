#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score;
	char grade;

	printf("Enter your grade: ");
	scanf("%c", &grade);

	if (grade == 'A')
	{
		printf("Enter your score: ");
		scanf("%d", &score);
		printf("%d점이면 %c를 받는군요.\n", score, grade);
	}
	return 0;
}