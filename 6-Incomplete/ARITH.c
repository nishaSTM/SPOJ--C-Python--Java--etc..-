#include<string.h>
#include<stdio.h>

void multiply(char *str){

	char *a;
        char *b;

        a = strtok(str,"+-*");
        b = strtok(NULL,"+-*");

	printf("%s * %s",a,b);

}

void subtract(char *str){

	char *a;
        char *b;

        a = strtok(str,"+-*");
        b = strtok(NULL,"+-*");

	printf("%s - %s",a,b);

}

void add(char *str){

	char *a;
	char *b;
	
	a = strtok(str,"+-*");
        b = strtok(NULL,"+-*");

	printf("%s + %s",a,b);

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

