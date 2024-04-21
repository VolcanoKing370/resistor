#include <stdio.h>
#include <string.h>

char color1[7];
char color2[7];
char color3[7];

int pow10(int n);
int color_code(char* color);

int main() {
	printf("Enter first color: ");
	scanf("%s",&color1);
	printf("Enter second color: ");
	scanf("%s",&color2);
	printf("Enter third color: ");
	scanf("%s",&color3);
	int idx = color_code(color3);
	int value = (color_code(color1)*10 + color_code(color2))*pow10(idx);
	
	printf("%s %s %s \n", color1, color2, color3);
	printf("Your resistor is: %d ohms", value);
	return 0;
}

int pow10(int n) {
	if (n<0 || n>9) 
		return -1;
	int pow[10] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 10000000, 1000000000};
	return pow[n];
}

// This could be improved tbh like enums, regex, etc.
int color_code(char* color) {
	//black brown red orange yellow green blue violet grey white
	if (strcmp(color, "black") == 0)
		return 0;
	else if (strcmp(color, "brown") == 0)
		return 1;
	else if (strcmp(color, "red") == 0)
		return 2;
	else if (strcmp(color, "orange") == 0)
		return 3;
	else if (strcmp(color, "yellow") == 0)
		return 4;
	else if (strcmp(color, "green") == 0)
		return 5;
	else if (strcmp(color, "blue") == 0)
		return 6;
	else if (strcmp(color, "violet") == 0)
		return 7;
	else if (strcmp(color, "grey") == 0)
		return 8;
	else if (strcmp(color, "white") == 0)
		return 9;
	else 
		return -1;
}