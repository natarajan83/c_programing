#include <stdio.h>
int main()
{
   FILE *fptr = fopen("sample.txt","w");
   fputs("Phytec Embedded\n",fptr);
   fputs("C programming\n",fptr);
   fputs("Rugged Board\n",fptr);
   fclose(fptr);
   fptr = fopen("sample.txt","r");
   char string[30];
   while(fgets(string,30,fptr)!=NULL)
   {
      printf("%s",string);
   }
   fclose(fptr);
   return 0;
}
