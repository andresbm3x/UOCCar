#ifndef _OFFICES_H_
#define _OFFICES_H_

#define ADDRESS_LENGTH 64
#define CITY_LENGTH 32
#define COUNTRY_LENGTH 32
#define POSTAL_CODE_LENGTH 16

typedef enum
{
	OFFICE_NOERR,
	OFFICE_INVALIDADDRESS,
	OFFICE_INVALIDCITY,
	OFFICE_INVALIDCOUNTRY,
	OFFICE_INVALIDPOSTALCODE
} officeError;

typedef struct sOffice
{
	char address[ADDRESS_LENGTH];
	char city[CITY_LENGTH];
	char country[COUNTRY_LENGTH];
	char postalCode[POSTAL_CODE_LENGTH];
	struct sOffice * nextOffice;
} tOffice;


tOffice * offices_firstOffice;

// Initializes contents of an office struct
void offices_initStruct(tOffice * office);

// Gets the latest stored office.
tOffice * offices_getLastOffice();

// Register a new office
officeError offices_registerNewOffice();

// Display the list of offices
void offices_listOffices();

// Transforms the error value enumerate into a string
char * offices_errMsg(officeError err);

// Verifies the introduced information is valid
officeError offices_checkOffice(tOffice * office);

#endif