#include <stdio.h>
// 알파벳 소문자 -> 대문자
int main()
{
	char ch;

	while ((ch = getchar()) != '\n') {
		if (ch >= 'a' && ch <= 'z')
			ch -= 32;
		putchar(ch);
	}
}
