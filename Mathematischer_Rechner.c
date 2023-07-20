#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 double zahl_1 = 0;
 double zahl_2 = 0;
 double addition = 0;
 double subtraktion = 0;
 double division = 0;
 double multiplikation = 0;
char* string_1;
char* string_2;
int main()
{
	printf("\nRechenprogramm\n");
	printf("\nBitte gib deine erste Zahl ein: ");
	string_1 = (char*)malloc(100 * sizeof(char));

	if (string_1 == NULL)
	{
		printf("\nEs konnte kein Speicher zugewiesen werden!\n\a");
		free(string_1);
		free(string_2);
		return 1;
	}

	fgets(string_1, 100, stdin);
	string_1[strcspn(string_1, "\n")] = '\0';
	zahl_1 = atof(string_1);



	printf("\nBitte gib deine zweite Zahl ein: ");
	string_2 = (char*)malloc(100 * sizeof(char));

	if (string_2 == NULL)
	{
		printf("\nEs konnte kein Speicher zugewiesen werden\n\a");
		free(string_2);
		free(string_1);
		return 1;
	}

	fgets(string_2, 100, stdin);
	string_2[strcspn(string_2, "\n")] = '\0';
	zahl_2 = atof(string_2);

	if (zahl_1 > 0 && zahl_2 > 0) {
		addition = zahl_1 + zahl_2;
		subtraktion = zahl_1 - zahl_2;
		multiplikation = zahl_1 * zahl_2;
		division = zahl_1 / zahl_2;

		printf("\n-------------------------------------------");
		printf("\nDie Addition deiner Zahlen ist %.2f", addition);
		printf("\nDie Subtraktion deiner Zahlen ist %.2f", subtraktion);
		printf("\nDie Multiplikation deiner Zahlen ist %.2f", multiplikation);
		printf("\nDie Division deiner Zahlen ist %.2f \a", division);
		printf("\n-------------------------------------------\n\n");
		free(string_1);
		free(string_2);
		return 0;
	}
	else {
		printf("\nEs Gab ein Fehler");
		free(string_1);
		free(string_2);
		return 1;
	}

}