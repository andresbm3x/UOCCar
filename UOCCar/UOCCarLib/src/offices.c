/*
 * File:        offices.c
 * Description: Contains the functionality related to the offices management.
 */

#include <string.h>

#include "offices.h"
 
/*
 * Function:    offices_initStruct
 * Description: Initializes contents of an office struct
 * Arguments:   office: Upon return, the office struct ready to be filled
 * Returns:     ---
 */
void offices_initStruct(tOffice * office)
{
	///
	/// EX.5.1. Initialize all properties of an office struct to 0
	///
	
	
	///
	/// END OF EX.5.1.
	///
}


/*
 * Function: 	offices_getLastOffice
 * Description: Gets the latest stored office.
 * Arguments:   ---
 * Returns: 	The pointer to the latest stored office
 */
tOffice * offices_getLastOffice()
{
	tOffice * retValue = offices_firstOffice;
	
	///
	/// EX.5.1. Initialize all properties of an office struct to 0
	///	
	
	
	
	/// END OF EX.5.1.
	
	return retValue;
}

/*
 * Function:    offices_registerNewOffice
 * Description: Creates a new office struct and requests for the information
 * Arguments:   ---
 * Returns:     An enum with the error code according to the validation of the data.
 */
officeError offices_registerNewOffice(tOffice * office)
{
	///
	/// EX.5.1. Validate the contents of the struct, and add it to the list if everything is correct.
	///         Return the error code in case of any error in the data.
	///	
	
	
		
	
	/// END OF EX.5.1.
		
	return OFFICE_NOERR;
}

/*
 * Function:    offices_checkOffice
 * Description: Verifies the introduced information is valid
 * Arguments:   office: The office struct to be validated
 * Returns:     The error message
 */ 
officeError offices_checkOffice(tOffice * office)
{	
	///
	/// EX.5.1: Validate the contents of the struct and return the correct error message.
	///
	
	

	
	/// END OF EX.5.1
		
	return OFFICE_NOERR;
}

/*
 * Function:    offices_errMsg
 * Description: Transforms the error value enumerate into a string
 * Arguments:   The error value
 * Returns:     The string to display to the user
 */ 
char * offices_errMsg(officeError err)
{
	switch(err)
	{
		case OFFICE_INVALIDADDRESS:
		    return "The Address is invalid. It must have between 2 & 64 characters.\n";
			
		case OFFICE_INVALIDCITY:
			return "The City is invalid. It must have between 2 & 32 characters.\n";
			
		case OFFICE_INVALIDCOUNTRY:
			return "The Country is invalid. It must have between 2 & 32 characters.\n";
			
		case OFFICE_INVALIDPOSTALCODE:
			return "The Postal Code is invalid. It must have between 2 & 16 characters.\n";
			
		default:
			return "";
	}
}