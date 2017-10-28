/*
 * File:        svrMain.c
 * Description: Contains the main functionality for the application
 */

#include "svrMain.h"
#include "svrMenu.h"

#include "cars.h"
#include "offices.h"
#include "helpers.h"

#include "stdio.h"

/* 
 * Function:    svrMain_displayMenu
 * Description: Displays the UOCCar Server application main menu
 * Arguments:   ---
 * Returns:     ---
 */
void svrMain_displayMenu()
{
	char option;

	option = svrMenu_mainMenu();
	
	///
	/// EX.2.1: Manage the option introduced by the user
	///
	while (option != '0'){
		
		if (option == '1') {
			svrMain_manageCars();
			option = svrMenu_mainMenu();
		} else if (option == '2') {
			svrMain_manageOffices();
			option = svrMenu_mainMenu();
		} else {
			printf("\nIts necessary to select between the 1 or 2 option.\n");
			helpers_pressAnyKey();
			option = helpers_getOption();
		}
	}
	
	// Remove following line when implementing. 
	// It has been added to avoid the "variable set but not used warning".
	//option = option;
	
	
	/// END OF EX.2.1
}


/* 
 * Function:    svrMain_manageCars
 * Description: Displays the Cars Management sub-menu
º * Arguments:   ---
 * Returns:     ---
 */
void svrMain_manageCars()
{
	char option;
	
	option = svrMenu_carsMenu();
	
	///
	/// EX.2.2: Implement the Cars Management sub-menu
	///
	
	while (option != '0'){
		
		if (option == '1'){
			svrMenu_registerNewCar();
			option=svrMenu_carsMenu();
		} else if (option=='2')  {
			svrMenu_listCars();
			option=svrMenu_carsMenu();
		} else{
			printf("\nIts necessary to select between the 1 or 2 option.\n");
			helpers_pressAnyKey();
			option=svrMenu_carsMenu();
		}
		
	}
	/// END OF EX.2.2
}


/* 
 * Function:    svrMain_manageOffices
 * Description: Displays the Offices Management sub-menu
 * Arguments:   ---
 * Returns:     ---
 */
void svrMain_manageOffices()
{
	char option;
	
	option = svrMenu_officesMenu();
	///
	/// EX.2.3: Implement the Offices management sub-menu
	///
	while (option != '0'){
		
		if (option == '1'){
			svrMenu_registerNewOffice();
		} else if (option=='2')  {
			svrMenu_listOffices();
		} else{
			printf("\nIts necessary to select between the 1 or 2 option.\n");
			helpers_pressAnyKey();
			option=svrMenu_officesMenu();
		}
		
	}

	/// END OF EX.2.3
}