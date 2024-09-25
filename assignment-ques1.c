#include<stdio.h>
int main(){
	int dec;
    int binary[32],x;
	   printf("Enter a number: ");
	   scanf ("%ld ",&dec);
	   printf("Octal representation: %o\n",dec);
	   printf("Hexadecimal Representation: %x\n",dec);
	   for(x=0;dec>0;x++){
		binary[x]=dec%2;
		dec=dec/2;
	   }
	   printf("Binary representation is: ");
	   for(x=x-1;x>=0;x--){
		printf("%d",binary[x]);
	   }
	return 0;
}

