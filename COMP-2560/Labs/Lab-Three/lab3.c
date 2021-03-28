//copy file f1 to f2 using standard I/O

#include<stdio.h>

int copyfile(const char *f1, const char *f2)
{
	FILE *inf, *outf;
	int c;

	if ((inf = fopen(f1,"r")) == NULL)
	{
		return (-1);
	}

	if ((outf = fopen(f2, "w")) == NULL)
	{
		fclose(inf);
		return (-2);
	}

    int flag1 = 0;
    int flag2 = 0;
	while ((c=getc(inf)) != EOF)
	{
        if(c == '\n'){
            printf("End of line has been found!\n");
        }
        if(c == '/' && flag1==0){
            flag1 = 1;
        }

        if(flag1 == 1){
            c=getc(inf);
            if(c == '/'){
                flag2 = 1;
            }
            ungetc(c, inf);
        }
        else{
            flag1 = 0, flag2 = 0;
        }

        if(flag2 == 1){
            printf("Double slashes found!\n");
            flag1 = 0, flag2 = 0;
        }





		putc(c, outf);
	}

	fclose(inf);
	fclose(outf);

	return (0);
}

int main(int argc, char * argv[])
{
	copyfile(argv[1], argv[2]);
}