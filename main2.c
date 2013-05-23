#include <stdio.h>
#include <string.h>

isSpace(c)
{
  return (c >> 6) == 0;
}

#define zoo(x) i == x || i + 32 == x

mymemset(buff)
char * buff;
{
  *((int*)buff) = 0;
}


method(args)
char * args;
{
  char buff[4];
  i;
  char *p = args;
  mymemset(buff);

  while(0 != (i = *(p++))) {
    if(isSpace(*buff)) {
      if(isSpace(i)) 
	*buff = i;
      else if (zoo('h'))  {
	mymemset(buff); 
	*buff = i;
      }
      
    } else if (2[buff] != 0) { 
      
      if(isSpace(i)) { 
	1[buff] = 0105 +  (1[buff] / 32 == 2 ? 0 : 32);
	*(p-3) = 1[buff];
	mymemset(buff); 
	*buff = i;
      }
      
    } else if (1[buff] != 0) { 

      if(zoo('n')) 
	2[buff] = i;
      else 
	mymemset(buff);
      
    } else if (*buff == 'h' || *buff == 'H') {

      if(zoo('o') || zoo('a'))  1[buff] = i;
      else *buff = 0;
    }
  }
}


int main(int argc, char** argv)
{
  if(argc < 2)
    return -1;
  method(argv[1]);
  printf("%s\n", argv[1]);
}
