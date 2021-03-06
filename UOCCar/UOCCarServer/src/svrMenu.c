/*
 * File:        svrMenu.c
 * Description: Contains the user interface functionality for the UOCCar Server application
 * 				Basically, it implements the different menus that will be displayed on the screen
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "svrMenu.h"
#include "helpers.h"
#include "operations.h"
#include "cars.h"
#include "offices.h"


/* 
 * Function:    svrMenu_mainMenu
 * Description: Displays the UOCCar Server application main menu with the available operations
 * Arguments:   ---
 * Returns:     The option the user selected.
 */
char svrMenu_mainMenu()
{
	int version;
	char option;
	
	helpers_clearScreen();
	
	version = ops_getVersion();
	
	printf("\nWelcome to the UOCCar Server application!\n");
	printf("\n------------------------------------\n\n");
	printf("Library version: %d\n\n", version);
	
	printf("Please, select a menu option:\n\n");
	printf("1. Manage Cars \n");
    printf("2. Manage Offices \n");
	printf("\n");
	printf("0. Exit\n\n");
	
	option = helpers_getOption();
	
	return option;
}


/* 
 * Function:    svrMenu_carsMenu
 * Description: Displays the Cars Management sub-menu with the available operations
 * Arguments:   ---
 * Returns:     The option the user selected.
 */
char svrMenu_carsMenu()
{
	char option;
	
	///
	/// EX.2.2: Implement the Cars Management sub-menu
	///
	helpers_clearScreen();
	
	printf("\nCars Management\n");
	printf("\n---------------\n");
	printf("\nPlease, select a menu option:\n");
	printf("\n1. Register new car");
	printf("\n2. Display the list of cars\n");
	printf("\n");
	printf("0. Exit\n\n");
	
	
	/// END OF EX.2.2
	
	option = helpers_getOption();
	
	return option;
}

/* 
 * Function:    svrMenu_officesMenu
 * Description: Displays the Offices Management sub-menu with the available operations
 * Arguments:   ---
 * Returns:     The option the user selected.
 */
char svrMenu_officesMenu()
{
	char option;
	
	///
	/// EX.2.3: Implement the Offices Management sub-menu
	///
	helpers_clearScreen();
	
	printf("\nOffices Management\n");
	printf("\n---------------\n");
	printf("\nPlease, select a menu option:\n");
	printf("\n1. Register new office");
	printf("\n2. Display the list of offices\n");
	printf("\n");
	printf("0. Exit\n\n");
	
	/// END OF EX.2.3
	
	option = helpers_getOption();
	
	return option;
}


/*
 * Function:    svrMenu_registerNewCar
 * Description: Creates a new car struct and requests for the information
 * Arguments:   ---
 * Returns:     ---
 */
void svrMenu_registerNewCar()
{
	tCar * newCar = NULL;
	carError err = CAR_NOERR;
	char * errMsg;
		
	helpers_clearScreen();

	///
	/// EX.3.1: Fill the fields of the struct with the proper information.
	///
	//Allocation of the memory to the new car
	newCar = malloc(sizeof(tCar));
	cars_initStruct(newCar);
	
	printf("\nRegister a new car\n");
	printf("\n------------------\n");
	printf("\nPlate ID:			");
	helpers_scanText(newCar->plate,PLATE_LENGTH);
	printf("\nBrand:				");
	helpers_scanText(newCar->brand,MAX_BRAND_LENGTH);
	printf("\nModel:				");
	helpers_scanText(newCar->model,MAX_BRAND_LENGTH);
	printf("\nCar Type:\n");
	printf("\n	1 - ECONOMY\n");
	printf("\n	2 - SEDAN\n");
	printf("\n	3 - VAGON\n");
	printf("\n	4 - SPORT\n");
	printf("\n");
	int option;
	int	optionInformed=0;
	helpers_scanInt(&option);
	
	while (optionInformed != 1){
		
		switch (option){
			case 1:
				newCar->type=CAR_ECONOMY;
				optionInformed=1;
			break;
			case 2:
				newCar->type=CAR_SEDAN;
				optionInformed=1;
			break;
			case 3:
				newCar->type=CAR_VAGON;
				optionInformed=1;
			break;
			case 4:
				newCar->type=CAR_SPORT;
				optionInformed=1;
			break;
			default:
				printf("\nIts necesary to choose one of the available options:\n");
				helpers_scanInt(&option);
			break;
		}
		
	}	
	/// END OF EX.3.1
	
	err = cars_registerNewCar(newCar);
	
	// Display the result on screen.
	if (err == CAR_NOERR)
	{
		helpers_clearScreen();
		printf("\nCar successfully registered\n\n");
		printf("\n---------------------------\n\n");
	}
	else
	{
		// Some error ocurred. Display the error.
		free(newCar);
		printf("\n\n");
		errMsg = cars_errMsg(err);
		printf("\n%s\n", errMsg);
	}
	
	helpers_pressAnyKey();
}

/*
 * Function:    svrMenu_listCars
 * Description: Display the list of available cars. 
 * Arguments:   ---
 * Returns:     ---
 */
void svrMenu_listCars()
{
	///
	/// EX.4.1. Implement de functionality to display the list of cars.
	///	
	helpers_clearScreen();
	
	tCar * car;
	int position=1;
	car = cars_firstCar;
	
	
	printf("\nList of registered cars\n");
	printf("\n------------------\n");
	printf("\n");
	
	while (car) {
		char * carTypeName;
		
		carTypeName = malloc(7 * sizeof(char));
		
		switch (car->type) {
			case CAR_ECONOMY:
			strcpy(carTypeName, "ECONOMY");
			break;
			case CAR_SEDAN:
			strcpy(carTypeName, "SEDAN");
			break;
			case CAR_VAGON:
			strcpy(carTypeName, "VAGON");
			break;
			case CAR_SPORT:
			strcpy(carTypeName, "SPORT");
			break;
		}
		
		printf("%03d - %s - %s - %s (%s)\n",position,car->plate, car->brand, car->model, carTypeName);
		position++;
		car = car->nextCar;
		
	}
	
	helpers_pressAnyKey();
	
	/// END OF EX.4.1.
}


/*
 * Function:    svrMenu_registerNewOffice
 * Description: Creates a new office struct and requests for the information
 * Arguments:   ---
 * Returns:     ---
 */
void svrMenu_registerNewOffice()
{
	tOffice * newOffice = NULL;
	officeError err = OFFICE_NOERR;
	char * errMsg;
	
	helpers_clearScreen();
	
	///
	/// EX.5.2: Implement the office registering functionality
	///
	newOffice = malloc(sizeof(tOffice));
	offices_initStruct(newOffice);
	
	printf("\nRegister a new office\n");
	printf("\n------------------\n");
	printf("\nAddress ID:		");
	helpers_scanText(newOffice->address,ADDRESS_LENGTH);
	printf("\nCity:			");
	helpers_scanText(newOffice->city,CITY_LENGTH);
	printf("\nCountry:			");
	helpers_scanText(newOffice->country,COUNTRY_LENGTH);
	printf("\nPostal Code:		");
	helpers_scanText(newOffice->postalCode,POSTAL_CODE_LENGTH);
	
	/// END OF EX.5.2
	err = offices_registerNewOffice(newOffice);
	
	// Display the result on screen.
	if (err == OFFICE_NOERR)
	{
		helpers_clearScreen();
		printf("\nOffice successfully registered\n\n");
		printf("\n---------------------------\n\n");
	}
	else
	{
		// Some error ocurred. Display the error.
		free(newOffice);
		printf("\n\n");
		errMsg = offices_errMsg(err);
		printf("\n%s\n", errMsg);
	}
	
	helpers_pressAnyKey();
}

/*
 * Function:    svrMenu_listOffices
 * Description: Display the list of available offices. 
 * Arguments:   ---
 * Returns:     ---
 */
void svrMenu_listOffices()
{
	///
	/// EX.5.3: Implement the office listing functionality
	///
	helpers_clearScreen();
	
	tOffice * office;
	int position=1;
	office = offices_firstOffice;
	
	
	printf("\nList of registered Offices\n");
	printf("\n------------------\n");
	printf("\n");
	
	while (office) {
		
		printf("%03d - %s\n",position,office->address);
		printf("	   %s\n",office->city);
		printf("	   %s - %s\n\n",office->postalCode, office->country);
		
		position++;
		office = office->nextOffice;
		
	}
	
	helpers_pressAnyKey();
	/// END OF EX.5.3
	
}

