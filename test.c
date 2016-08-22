# include "stdio.h"
#include "string.h"
main()
{
FILE *f1;
char *s,*s2,c;
int n=0;
s=(char *)malloc(sizeof(char));
s2=(char *)malloc(sizeof(char));
//c=(char *)malloc(sizeof(char));
//c1=(char *)malloc(sizeof(char));
//c2=(char *)malloc(sizeof(char));
int i;
printf("\nNhap vao 1 sau ky tu\n");
/* Nhap vao 1 sau ki tu
*/
//fflush(stdin);
gets(s);
printf("\nSau vua nhap vao la \n%s \n",s);
puts(s);
/*Mo file de ghi du lieu tu sau ki tu*/

f1=fopen("text","w");
if (f1==NULL)
	printf ("\nCannot open file\n");
else
	printf("\nFile has been opened\n");
fputs(s,f1);
//free(s);
fclose(f1);

/*Mo file de doc du lieu*/
f1=fopen("text","r");
if (f1==NULL)
	printf ("\nCannot open file\n");
else
	printf("\nFile has been opened\n");

#if(1)
while(!feof(f1))
{
	#if(0)
	fscanf(f1,"%s", s);
	if(s != NULL)
		printf("\n%s", s);
	#else
	if ((c=fgetc(f1))!=EOF)
		n++;
	printf("\nGia tri cua n la %d\n",n);
	#endif

}
//fseek( f1, 0, SEEK_SET );
rewind (f1);
printf("\nSo ky tu la %d\n",n);
//free(s);
//s=(char *)malloc(sizeof(char)*n+1);
fgets(s2,n+1,f1);
puts(s2);
#else
fgets(s2,2,f1);
puts(s2);
#endif

//printf("\n%s\n",c2);
return 0;
	}
