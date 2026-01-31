#include <stdio.h>
#define MAX_NAME_LENGTH 100

int main()
{
	char filename[MAX_NAME_LENGTH];
	FILE *fp;
	char c;
	int characters = 0, lines = 0, startorend = 0, words = 0, spaces = 0;

//	fp = fopen("file.txt", "r");
	printf("Enter file name: ");
	scanf("%s", filename);
	fp = fopen(filename, "r");

	if (fp == NULL) {
		printf("Could not open file %s",
				filename);
		return 0;
	}

//	for (c = getc(fp); c != EOF; c = getc(fp)) {
	while ((c = getc(fp)) != EOF) {
		if (c != ' ' || c != '\n') {
			characters = characters + 1;
		}
		if (c == '\n') {
			lines = lines + 1;
		}
		if (c == ' ') {
			spaces = spaces + 1;
		}
		if (c == ' ' || c == '\n') {
			startorend = 0;
		}
		else {
			if (!startorend) {
				words = words + 1;
				startorend = 1;
			}
		}
	}

	fclose(fp);

	printf("\"%s\"\n%d characters\n%d lines\n%d spaces\n%d words\n", filename, characters, lines, spaces, words);

	return 0;
}
