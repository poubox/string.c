#include <stdio.h>
// 특정 문자 필터링
int main()
{
	char ch;

	while ((ch = getchar()) != '\n') {
		if (ch == 's' || ch == 'S')
			ch = 'a';
		putchar(ch);
	}
}
