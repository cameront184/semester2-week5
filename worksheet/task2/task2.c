/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: cameron Taylor
 * ID: 20198232
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	int value;
	
	printf("Enter a hexadecimal:");

	// if input contains invalid hex digit

	for (int i=0;hex[i] != '\0'; i++ ) {           // keep looping till the end of the string is reached
		if (hex[i]>='0' && hex[i]<='9') {
			value = hex[i] - '0';                 // check if the character is between 0 and 9
		}
		else if (hex[i]>= 'A' && hex[i]<= 'F'){   // checking uppercase hex digits
			value = hex[i] - 'A' + 10;
		}
		else if (hex[i]>= 'a' && hex[i]<= 'f'){   // checking lowercase hex digits
			value = hex[i] - 'a' + 10;
		}
		else {
			printf("Error: Invalid Hexadecimal\n");  //handiling any char that arent 0-9 A-F or a-f
			return 0;
		}
		decimal = decimal * 16 + value;
	}

	printf("decimal:%ld\n", decimal);    // print the decimal result
	
	return 0;

}