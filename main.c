#include <stdio.h>
#include <string.h>

isSpace(c)
{
  return (c >> 6) == 0;
}

#define foo(x) printf("%.*s", x, buff)
#define zoo(x) i == x || i + 32 == x

mymemset(buff)
char * buff;
{
  *(buff++) = 0;
  *(buff++) = 0;
  *(buff++) = 0;
}


main(i, args)
char ** args;
{
  char * buff = *args;
  mymemset(buff);

  while((i = getchar()) != EOF) {
    

    if(isSpace(*buff)) {
      if(isSpace(i)) *buff = i;
      else if (zoo('h')) 
	mymemset(buff), *buff = i;
      
    } else if (2[buff] != 0) { 

      isSpace(i) && (
		     1[buff] = 0105 +  (1[buff] / 32 == 2 ? 32 : 0),
		     foo(3), mymemset(buff), *buff = i);
      

    } else if (1[buff] != 0) { 

      if(zoo('n')) 2[buff] = i;
      else foo(2), mymemset(buff);

    } else if (*buff == 'h' || *buff == 'H') {

      if(zoo('o') || zoo('a'))  1[buff] = i;
      else foo(1), *buff = 0;
    }

    if(isSpace(*buff)) putchar(i);

  }


  return 0;

}
