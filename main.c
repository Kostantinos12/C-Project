#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
    char username[30];
	char password[30];
	char departure[30];
	char destination[30];
	int checkDeparture = 0;
	int dateofdeparture;
	int dateofreturn;
	char name[30];
	char surname[30];
	int age;
  	char option[30];
  	int creditcardnumber;
  	int baggages = 5;
  	float totalamount;
  	float amount;
  	
    
	    do{

	    do {
	        printf( "Enter your username\n" );
	        scanf("%s", username);
	        
	        printf( "Enter your password\n" );
	        scanf("%s", password);
	        
	        system( "cls" );
	    } while( strcmp(username,"unlucky") != 0 && strcmp(password,"123a") != 0 );
	    
	    do {
	    
		    printf( "Departure from:\n" );
	        scanf("%s", &departure);
	    
		} while( departure == 'A' && departure == 'M' && departure == 'R' );
	   
        do {
        
            printf( "Arrival to:\n" );
            scanf("%s", &destination);
        
		} while( (departure=='A' || destination=='M') && (departure=='A' || destination=='R') && (departure=='M' || destination=='A') && (departure=='R' || destination=='A') );
	    
	    do {
	    	do{
	    	    printf( "Enter date of departure\n" );
	    	    scanf( "%d", &dateofdeparture );
	    	    
	 	    }while( dateofdeparture<1  || dateofdeparture>=31  );
	 	    
	 	    do{
			 
	 	        printf( "Enter date of return\n" );
	 	        scanf("%d", &dateofreturn);
	 	    
			}while( dateofreturn<=1 || dateofreturn >31 );
			
			system("cls");
		
		} while( dateofdeparture > dateofreturn );
		
		printf( "Enter name\n" );
		scanf("%s", name);
		
		printf( "Enter surname\n" );
		scanf("%s", surname);
		
		printf( "Enter age\n" );
		scanf( "%d", &age);
		
		system("cls");
	
		printf( "Airport of departure: %s\n", departure );
		printf( "Airport of destination: %s\n", destination );
		printf( "Date of departure: %d\n", dateofdeparture );
		printf( "Date of return: %d\n", dateofreturn );
		printf( "Name: %s\nSurname: %s\nAge: %d\n", name, surname, age );
		
		printf( "Do you agree with the data ?\n" );
		scanf( "%s", option);
	
	}while(strcmp(option,"yes")!=0);
	
	system("cls");
	
	if( strcmp(destination,"M") == 0 )
	{
	    if( age >= 18 )
		{
		    amount= 120 +140.38;
		}
		else if( age<18 )
		{
			amount= 75.50 + 110.45;
		}
	}
	else if( strcmp(destination,"R") == 0 )
	{	
		if( age>=18 )
		{
		    amount= 135.45 +135;
		}
		else if( age<18 )
		{
			amount= 90 + 95;
		}
	}
	
	totalamount = amount + (15*baggages); 
	
	printf( "Enter credit card number\n" );
	scanf("%d", &creditcardnumber);
	
	system("cls");
	
	printf("Congratulations for your ticket! Here is your ticket:\n\n                ******************Demoup Airlanes********************\n\n                Name:%s    Surname:%s      Age:%d\n\n", name, surname, age);
	printf("                Departure Date:%d/12/2015\n                From:%s   To:%s    No. of Baggages:%d\n\n", dateofdeparture, departure, destination, baggages);
	printf("                Return Date:%d/12/2015   \n                From:%s   To:%s    No. of Baggages:%d\n\n", dateofreturn, destination, departure, baggages);
	printf("                Total amount: %.2f\n", totalamount);
	printf("                *****************************************************");
	
	return 0;
}
