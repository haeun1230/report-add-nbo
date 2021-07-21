#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
#include<netinet/in.h> 

int num(char *filename){
	FILE *fp;
	uint32_t result;
	fp = fopen(filename,"rb");
	fread(&result, sizeof(uint32_t),1,fp);
	fclose(fp);
	return htonl(result);
}

int main(int argc, char **argv)
{
	uint32_t a = num(argv[1]);
	uint32_t b = num(argv[2]);
	uint32_t c = a + b;
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n",a,a,b,b,c,c);
}
