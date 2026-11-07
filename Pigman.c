#include <stdio.h>

int main(void){

char wrd[100];

printf("%s", "Type your chosen word: ");

scanf("%99s", &wrd);

if (wrd[0] == 'a' || wrd[0]== 'e'  || wrd[0] == 'u' || wrd[0] == 'i' || wrd[0] == 'o'  || wrd[0] == 'y'|| wrd[0] == 'A' || wrd[0]== 'E'  || wrd[0] == 'U' || wrd[0] == 'I' || wrd[0] == 'O'  || wrd[0] == 'Y'){
	printf("%s%s", wrd, "-hay");
} else {
	#include <string.h>
	char st = wrd[0];
	int n = (int)strlen(wrd);
	for (int i = 0; i < n - 1; i++) {
		wrd[i] = wrd[i + 1];
	}
	wrd[n - 1] = '\0';
	printf("%s-%c%s", wrd, st, "ay");
}
return 0;
}
