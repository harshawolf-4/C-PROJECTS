#include<stdio.h>
#include<stdlib.h>
int main(){
	int ch , c=0 ,n500 , n200 ,n100 , amount ;
	float balance  ;
	
	do {
		printf("****************************\n");
        printf(" ->Enter your choice<- \n");
	    printf("1 View Balance \n");
	    printf("2 Deposit the amount \n");
	    printf("3 Withdraw the cash \n");
	    printf("4 exit\n");
	    scanf("%d",&ch);
	    
		switch(ch){
			
			case 1 :
				
				printf("Your balance is %.2f\n",balance);
				break ;
				
			case 2 :
				
				printf("Enter the amount you want to deposit \n");
				scanf("%d",&amount);
				
				if (amount>0){
				    balance = balance + amount ;
				    printf("The deposit is credited succesfully \n Your current balance is %.2f \n",balance );
				}
				
				else 
				    printf("Enter the valid amount\n");
			break ;    
			
			case 3 :
				
			    printf("Enter the amount to withdraw \n");
				scanf("%d",&amount);
					
				if(amount>0&&amount<=balance){
					
					printf("Amount withdrawn succesfully\n");
					balance = balance - amount;
					
					n500 = amount/500;
					amount = amount%500;
					
					n200 = amount/200;
					amount = amount%200;
					
					n100 = amount/100;
					amount = amount%100;
					
					printf("500 notes count is %d\n",n500);
					printf("200 notes count is %d\n",n200);
					printf("100 notes count is %d\n",n100);
					
					printf("Your current balance is %.2f\n",balance);
				}
				
				else if(balance==0){
					
				    printf("***NILL BALANCE***\n");
				    printf("Add amount in your account \n");
				    printf("Your current balance is %.2f\n",balance);
				}
				
				else {
					
				    printf("Unable to process your request\n");
				    printf("Enter the vaild amount\n");
				}
				    
			break ;	
			
			case 4 :
				
				printf("THANK YOU FOR VISITNG THE ATM \n");
			    exit(0)	;
			    
			break;					
		}
	
	}while(c==0);	
	return 0 ;
	
}
