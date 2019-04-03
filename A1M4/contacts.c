/* -------------------------------------------
Name: Shankar Babu Acharya
Student number: 121850176
Email: sbacharya@myseneca.ca
Section: IPC144O
Date: Dec 5, 2017
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "contacts.h"


void getName(struct Name *person) {
	// name information: first, middle and last name input

	char answer = 'y';
	printf("Please enter the contact's first name: ");
	scanf(" %30s", person->firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf("%c", &answer);

	while (scanf("%c", &answer) == 1 && answer == 'y') {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6s", person->middleInitial);
	}

	printf("Please enter the contact's last name: ");
	scanf(" %35s", person->lastName);


}

void getAddress(struct Address *location) {
	// Address information: street number, street name, appartment number, postal code and city name input
	char answer = 'y';
	printf("Please enter the contact's street number: ");
	scanf("%d", &location->streetNumber);

	printf("Please enter the contact's street name: ");
	scanf(" %40s", location->streetName);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf("%c", &answer);
	while (scanf("%c", &answer) == 1 && answer == 'y') {
		printf("Please enter the contact's apartment number: ");
		scanf("%d", &location->apartmentNumber);
	}

	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]", location->postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %40s", location->cityName);

}


void getNumbers(struct Numbers *contact) {
	// Number information: cell number, home number, and business number input

	char answer = 'y';
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &answer);
	if ((answer == 'y') || (answer == 'Y')) {
		printf("Please enter the contact's cell phone number: ");
		scanf(" %20s", contact->cell);
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &answer);
	if ((answer == 'y') || (answer == 'Y')) {
		printf("Please enter the contact's home phone number: ");
		scanf(" %20s", contact->home);
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &answer);
	if ((answer == 'y') || (answer == 'Y')) {
		printf("Please enter the contact's business phone number: ");
		scanf(" %20s", contact->business);
	}
}