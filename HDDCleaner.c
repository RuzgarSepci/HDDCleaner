#include <stdio.h>
int main()
{
    int bytes, i;
    printf("HDDCleaner v1.0.0");
    printf("\n2021 (c) Ruzgar Sepci. All rights reserved.");
    printf("\n\nHow many bytes free space do you want to clean?\n>>>");
    scanf("%d", &bytes);
    FILE *cleaner = fopen("cleaner.txt", "w");
    for (i = 1; i <= bytes; i++)
    {
    	fprintf(cleaner, "!");
	}
    fclose(cleaner);
    remove("cleaner.txt");
    printf("\nProcess successfully done! Thanks for using HDDCleaner...");
    scanf("%s");
    return 0;
}
