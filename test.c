# include "stdio.h"
#include "string.h"
main()
{
FILE *f1;
char *s;
s=(char *)malloc(sizeof(char));
//c=(char *)malloc(sizeof(char));
//c1=(char *)malloc(sizeof(char));
//c2=(char *)malloc(sizeof(char));
int i;
printf("\nNhap vao 1 sau ky tu\n");

gets(s);
printf("\nSau vua nhap vao la \n%s \n",s);
puts(s);


f1=fopen("text","w");
if (f1==NULL)
	printf ("\nCannot open file\n");
else
	printf("\nFile has been opened\n");

fputs(s,f1);
free(s);
fclose(f1);


f1=fopen("text","r");
if (f1==NULL)
	printf ("\nCannot open file\n");
else
	printf("\nFile has been opened\n");
//fgets(c,5,f2);
//puts(c);
printf("\nDebug\n");
#if(0)
while(!feof(f1))
{
	fscanf(f1,"%s", s);
	if(s != NULL)
		printf("\n%s", s);
}
#else
fgets(s,20,f1);
puts(s);
#endif

//printf("\n%s\n",c2);
return 0;
	}