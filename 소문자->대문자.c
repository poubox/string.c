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

// ctype.h 함수를 이용한 변환
#include <stdio.h>
#include <ctype.h>
// 알파벳 소문자 -> 대문자
int main()
{
	char ch;

	while ((ch = getchar()) != '\n') {
		if (islower(ch))
			ch = toupper(ch);
		else if (isupper(ch))
			ch = tolower(ch);
		putchar(ch);
	}
}
