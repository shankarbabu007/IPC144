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
#include <string.h>
#include "contacts.h"



void displayDetail(struct Contacts *detailInfo); //function prototype


int main(void)
{
	struct Contacts detailInfo = { { "", "", "" },{ 0, "", 0, "", "" },{ "", "", "" } };
	
	int i;
										// displaying title
	printf("Contact Management System\n");
	for (i = 1; i <= 25; i++) {
	printf("-");
	}
	printf("\n");


	getName(&detailInfo.person);  //passing the address of person structure to scan person's detaial

	getAddress(&detailInfo.location); //passing the address of location structure to scan location detaial

	getNumbers(&detailInfo.contact);////passing the address of contact structure to scan contact detaial

	displayDetail(&detailInfo); ////passing the address of detailInfo structure

	printf("\n");

	return 0;
}





void displayDetail(struct Contacts *detailInfo) {
	
//Output details
printf("\nContact Details\n");
printf("---------------\n");
//Name details Output
printf("Name Details\n");
printf("First name: %s\n", detailInfo->person.firstName);
printf("Middle initial(s): %s\n", detailInfo->person.middleInitial);
printf("Last name: %s\n", detailInfo->person.lastName);
//Address details Output
printf("\nAddress Details\n");
printf("Street number: %d\n", detailInfo->location.streetNumber);
printf("Street name: %s\n", detailInfo->location.streetName);
printf("Apartment: %d\n", detailInfo->location.apartmentNumber);
printf("Postal code: %s\n", detailInfo->location.postalCode);
printf("City: %s\n", detailInfo->location.cityName);

//Phone details Output
printf("\nPhone Numbers:\n");
printf("Cell phone number: %s\n", detailInfo->contact.cell);
printf("Home phone number: %s\n", detailInfo->contact.home);
printf("Business phone number: %s\n", detailInfo->contact.business);
printf("\nStructure test for contact using functions done!\n");

}
