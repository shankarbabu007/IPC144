/* -------------------------------------------
Name: Shankar Babu Acharya
Student number:
Email: sbacharya@myseneca.ca
Section: IPC144O
Date: Dec 5, 2017
----------------------------------------------
Assignment: 1
Milestone:  3
---------------------------------------------- */

// Structure type Name declaration
struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};

// Structure type Address declaration
// Place your code from Milestone #2 here...
struct Address {
	int streetNumber;
	char streetName[41];
	int apartmentNumber;
	char postalCode[8];
	char cityName[41];
};

// Structure type Numbers declaration
// Place your code from Milestone #2 here...
struct Numbers {
	char cell[21];
	char home[21];
	char business[21];

};

// Structure type Contact declaration
// Place your code here...
struct Contacts {
	struct Name person;
	struct Address location;
	struct Numbers contact;
};


//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// ====== Milestone 4 =======

// Get and store from standard input the values for Name
void getName(struct Name *person);


// Get and store from standard input the values for Address
void getAddress(struct Address *location);


// Get and store from standard input the values for Numbers
void getNumbers(struct Numbers *contact);

