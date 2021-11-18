#include <stdio.h>

int f(int ch)
{
	/**/ if ('a' <= ch && ch <= 'z') return ch - ('a' - 'A');
	else if ('A' <= ch && ch <= 'Z') return ch + ('a' - 'A');
	else if ('0' <= ch && ch <= '9') return '*'             ;
	else                             return ch              ;
}
int main(void) {
	char s[256];
	for (int i = 0;; ++i) {
		if (i < sizeof s - 1) {
			const int ch = getchar();
			if (ch == '\n' || ch == EOF) {
				s[i] = '\0'; //Null•¶Žš
				break;
			}
			else
				s[i] = f(ch);
		}
		else {
			s[i] = '\0'; //Null•¶Žš
			break;
		}
	}
	printf("%s", s);
	return 0;

}
