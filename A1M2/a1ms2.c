/* -------------------------------------------
Name: Shankar Babu Acharya
Student number: 
Email: 
Section: IPC144O
Date: Nov 7, 2017
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>
#include "contacts.h"


int main(void)
{
	struct Name person = { "", "", "" }; //name initializer
	struct Address location = { 0, "", 0, "", "" };  //address initializer
	struct Numbers contact = { "", "", "" };  //contact initializer

	char answer = 'y';
	int i;


	printf("Contact Management System\n");
	for (i = 1; i <= 25; i++) {
		printf("-");
	}
	printf("\n");
													// name information: first, middle and last name input

	printf("Please enter the contact's first name: ");
	scanf(" %30s", person.firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf("%c", &answer);

	while (scanf("%c", &answer) == 1 && answer == 'y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6s", person.middleInitial);
	}

	printf("Please enter the contact's last name: ");
	scanf(" %35s", person.lastName);

											// Address information: street number, street name, appartment number, postal code and city name input										
	printf("Please enter the contact's street number: ");
	scanf("%d", &location.streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %40s", location.streetName);

	printf("Do you want to enter an appartment number? (y or n): ");
	scanf("%c", &answer);
	while (scanf("%c", &answer) == 1 && answer == 'y') {
		printf("Please enter the contact's appartment number: ");
		scanf("%d", &location.apartmentNumber);
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]", location.postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %40s", location.cityName);


											// Number information: cell number, home number, and business number input	

	
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &answer);
	if ((answer == 'y') || (answer == 'Y')) {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %20s", contact.cell);
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &answer);
	if ((answer == 'y') || (answer == 'Y')) {
		printf("Please enter the contact's home phone number: ");
		scanf(" %20s", contact.home);
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &answer);
	if ((answer == 'y') || (answer == 'Y')) {
		printf("Please enter the contact's business phone number: ");
		scanf(" %20s", contact.business);
	}


											//Output details
	printf("\nContact Details\n");
	printf("---------------\n");
											//Name details Output
	printf("Name Details\n");
	printf("First name: %s\n", person.firstName);
	printf("Middleinitial(s): %s\n", person.middleInitial);
	printf("Last name: %s\n", person.lastName);
											//Address details Output
	printf("\nAddress Details\n");
	printf("Street number: %d\n", location.streetNumber);
	printf("Street name: %s\n", location.streetName);
	printf("Apartment: %d\n", location.apartmentNumber);
	printf("Postal code: %s\n", location.postalCode);
	printf("City: %s\n", location.cityName);

										//Phone details Output
	printf("\nPhone Numbers:\n");
	printf("Cell phone number: %s\n", contact.cell);
	printf("Home phone number: %s\n", contact.home);
	printf("Business phone number: %s\n", contact.business);
	printf("\nStructure test for Name, Address, and Numbers Done!\n");
	return 0;
}

/*  SAMPLE OUTPUT:

Contact Management System
-------------------------
Please enter the contact's first name: Tom
Do you want to enter a middle initial(s)? (y or n): y
Please enter the contact's middle initial(s): Wong
Please enter the contact's last name: Song
Please enter the contact's street number: 20
Please enter the contact's street name: Keele
Do you want to enter an appartment number? (y or n): y
Please enter the contact's appartment number: 40
Please enter the contact's postal code: A8A 4J4
Please enter the contact's city: Toronto
Do you want to enter a cell phone number? (y or n): Y
Please enter the contact's cell phone number: 905-111-6666
Do you want to enter a home phone number? (y or n): Y
Please enter the contact's home phone number: 705-222-7777
Do you want to enter a business phone number? (y or n): Y
Please enter the contact's business phone number: 416-333-8888
Contact Details
---------------
Name Details
First name: Tom
Middle initial(s): Wong
Last name: Song
Address Details
Street number: 20
Street name: Keele
Apartment: 40
Postal code: A8A 4J4
City: Toronto
Phone Numbers:
Cell phone number: 905-111-6666
Home phone number: 705-222-7777
Business phone number: 416-333-8888
Structure test for Name, Address, and Numbers Done!
*/


