#include <stdio.h>
// 사용자가 설정하는 알파벳 찍기(홍정모)
int main()
{
	char first_char;

	char last_char;

	int num_row;

	int r;

	int c;

	printf("Enter a first character : ");

	scanf(" %c", &first_char);

	printf("Enter a last character : ");

	scanf(" %c", &last_char);

	num_row = last_char - first_char + 1;

	for (r = 0; r < num_row; r++)

	{

		for (c = first_char + r; c <= last_char; c++)

			printf("%c ", c);

		printf("\n");

	}
}
