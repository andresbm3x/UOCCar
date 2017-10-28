/*
 * File:        cars.c
 * Description: Contains the functionality related to the cars management.
 */

#include <string.h>
#include <ctype.h>

#include "cars.h"
 
/*
 * Function:    cars_initStruct
 * Description: Initializes contents of a car struct
 * Arguments:   car: Upon return, the car struct ready to be filled
 * Returns:     ---
 */
void cars_initStruct(tCar * car)
{
	memset(car->plate, 0, PLATE_LENGTH);
	memset(car->brand, 0, MAX_BRAND_LENGTH);
	memset(car->model, 0, MAX_BRAND_LENGTH);
	car->kilometers = 0;
	car->type = CAR_ECONOMY;
	car->nextCar = NULL;
}


/*
 * Function: 	cars_getLastCar
 * Description: Gets the latest stored car.
 * Arguments:   ---
 * Returns: 	The pointer to the latest stored car
 */
tCar * cars_getLastCar()
{
	tCar * retValue = cars_firstCar;
	
	if (retValue == NULL)
	{
		return cars_firstCar;
	}
	
	while (retValue->nextCar != NULL)
	{
		retValue = retValue->nextCar;
	}
	
	return retValue;
}

/*
 * Function:    cars_registerNewCar
 * Description: Creates a new car struct and requests for the information
 * Arguments:   ---
 * Returns:     An enum with the error code according to the validation of the data.
 */
carError cars_registerNewCar(tCar * car)
{
	carError err;
	
	err = cars_checkCar(car);
	if (err != CAR_NOERR)
	{
		return err;
	}
	
	if (cars_firstCar == NULL)
	{
		cars_firstCar = car;
	}
	else
	{
		cars_getLastCar()->nextCar = car;
	}
	
	return CAR_NOERR;
}


/*
 * Function:    cars_checkCar
 * Description: Verifies the introduced information is valid
 * Arguments:   car: The car struct to be validated
 * Returns:     The error message
 */ 
carError cars_checkCar(tCar * car)
{	
	///
	/// EX.3.2: Validate the contents of the struct and return the correct error message.
	///
	
	//Validate the plate
	if (strlen(car->plate)==7){
		
		for (int i=0;i>4;i++){
			if (isalpha(car->plate[i])=1){
				return CAR_INVALIDPLATE;
			}
		}
		
	} else {
		return CAR_INVALIDPLATE;
	}
	
	//Validate the brand
	if ((strlen(car->brand) < 2) and (strlen(car->brand) > 32)){
		return CAR_INVALIDBRAND;
	}
	
	//Validate the model
	if ((strlen(car->model) < 2) and (strlen(car->model) > 32)){
		return CAR_INVALIDMODEL;
	}	
	/// END OF EX.3.2
	
	
	return CAR_NOERR;
}

/*
 * Function:    cars_errMsg
 * Description: Transforms the error value enumerate into a string
 * Arguments:   The error value
 * Returns:     The string to display to the user
 */ 
char * cars_errMsg(carError err)
{
	switch(err)
	{
		case CAR_INVALIDPLATE:
		    return "The Plate is invalid. It must have 4 digits followed by 3 letters.\n";
			
		case CAR_INVALIDBRAND:
			return "The Brand is invalid. It must have between 2 & 32 letters.\n";
			
		case CAR_INVALIDMODEL:
			return "The Model is invalid. It must have between 2 & 32 letters.\n";
			
		case CAR_INVALIDTYPE:
			return "The car type is invalid. It must be a number between 1 to 4.\n";
			
		default:
			return "";
	}
}