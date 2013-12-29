#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int swapC(char *s,int a,int b){
        char temp;
        temp = s[a];
        s[a] = s[b];
        s[b] = temp;
        //printf("\n%s",s);
return 1;
}

int reverseString(char *s){

        int length;

        length = strlen(s);

        int counter_head=0,counter_tail=length-1;

while(counter_head<counter_tail){
        swapC(s,counter_head,counter_tail);
        counter_head++;
        counter_tail--;
        }
return 1;
}

void multiply(char *str){

	char *a;
        char *b;

        a = strtok(str,"+-*");
        b = strtok(NULL,"+-*");

	printf("%s * %s\n",a,b);

}

void subtract(char *str){

	char *a;
        char *b;

        a = strtok(str,"+-*");
        b = strtok(NULL,"+-*");

	printf("%s - %s\n",a,b);

}

void add(char *str){

	char *a;
	char *b;

	a = strtok(str,"+-*");
        b = strtok(NULL,"+-*");

	long unsigned int lengtha,lengthb;

	lengtha = strlen(a);

	lengthb = strlen(b);

	char c[lengtha+2];

	int carry=0;

	printf("%s + %s\n",a,b);

	printf("a: %lu ; b: %lu",lengtha,lengthb);

	int counter = 0;

	if(lengtha>=lengthb){

		while(counter<lengthb){
			
			printf("\n%c %c",a[lengtha-1-counter],b[lengthb-1-counter]);
		
			carry = carry + a[lengtha-1-counter] + b[lengthb-1-counter] - '0' - '0';

			printf(" = %i",carry);

			c[counter] = '0' + (carry % 10);
			
			carry = (carry / 10);

			counter++;
		}

		while(counter<lengtha){
			carry = carry + a[lengtha-1-counter] - '0';
			
			printf(" = %i",carry);
			
			c[counter] = '0' + (carry % 10) ;
			
			carry = carry / 10;

			counter++;
		}
	
		if(carry){
		c[counter] = carry+'0';	
			
		c[counter+1] = '\0';
		}
		else
		c[counter] = '\0';

		reverseString(c);

		printf("\nCARRY : %s\n",c);
	}

	else{
	
	        while(counter<lengtha){
                	counter++;
		}

                while(counter<lengthb){
                	counter++;
		}
	
	}	
}

int main(){
	
	int t;
	char str[1002]="1234+5678";
	char *a;
	char *b;
	
	scanf("%d",&t);

	while(t>0){

		scanf("%s",str);

		printf("str = %s\n",str);

		if(strchr(str,'+')!=NULL)
			add(str);
		else if(strchr(str,'-')!=NULL)
			subtract(str);
		else if(strchr(str,'*')!=NULL)
			multiply(str);	
	t--;
	}

return 0;
}

