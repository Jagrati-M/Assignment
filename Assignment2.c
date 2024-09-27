#include<stdio.h>
int main()
{
	char s;
	int c; 
	printf("SelectYour Account:\n");
	printf("Type A for Account 1\n");
	printf("Type B for Account 2\n");
	printf("Type C for Account 3\n");
	scanf("%c",&s);
	switch(s){
		case'A':
			printf("Select what you want to do:\n");
			printf("Type 1 to Check Balance \n");
			printf("Type 2 to Deposit Money \n");
			printf("Type 3 to Withdraw Money \n");
			scanf("%d",&c);
			if(c==1){
				printf("Rs.30,00,000");
			}
			else if(c==2){
			   	int d;
				printf("Type the amount you want to deposit:");
				scanf("%d",&d);
				printf("Your Balance:Rs.%d",3000000+d);
			}
			else if(c==3){
				int w;
				printf("Type the amount you want to withdraw ");
				scanf("%d",&w);
				printf("Your Balance:Rs.%d",3000000-w);
			}
			else{
				("Does not Exist.");
			}
		break;
		case'B':
			printf("Select what you want to do:\n");
			printf("Type 1 to Check Balance \n");
			printf("Type 2 to Deposit Money \n");
			printf("Type 3 to Withdraw Money \n");
			scanf("%d",&c);
			if(c==1){
				printf("Rs.20,00,000");
			}
			else if(c==2){
			   	int d;
				printf("Type the amount you want to deposit:\n");
				scanf("%d",&d);
				printf("Your Balance:Rs.%d",2000000+d);
			}
			else if(c==3){
				int w;
				printf("Type the amount you want to withdraw: \n");
				scanf("%d",&w);
				printf("Your Balance:Rs.%d",2000000-w);
			}
			else{
				("Does not Exist.");
			}
		break;	
		case'C':
			printf("Select what you want to do:\n");
			printf("Type 1 to Check Balance \n");
			printf("Type 2 to Deposit Money \n");
			printf("Type 3 to Withdraw Money \n");
			scanf("%d",&c);
			if(c==1){
				printf("Rs.45,00,000");
			}
			else if(c==2){
			   	int d;
				printf("Type the amount you want to deposit:\n");
				scanf("%d",&d);
				printf("Your Balance:Rs.%d",4500000 + d);
			}
			else if(c==3){
				int w;
				printf("Type the amount you want to withdraw \n");
				scanf("%d",&w);
				printf("Your Balance:Rs.%d",4500000-w);
			}
			else{
				("Does not Exist.");
			}
		break;
		default:
		printf("Account does not Exist");		
	}
	return 0;
}

