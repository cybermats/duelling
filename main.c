#include <stdio.h>
#include <string.h>

isSpace(c)
{
  return (c < 'A' || c > 'z');
}

#define foo(x) printf("%.*s", x, *buff)
#define bar(x) memset(*buff, 0, x)
#define zoo(x) i == x || i + 32 == x
#define auto if(isSpace(i))
#define do if(isSpace(**buff))
#define unless else if


main(i, buff)
char ** buff;
{
  bar(3);

  while((i = getchar()) != EOF) {

    do {
      auto **buff = i;
      unless (zoo('h')) 
	bar(3), **buff = i;
      
    } unless (2[*buff] != 0) { 

      isSpace(i) && (
		     1[*buff] = 0105 +  (1[*buff] / 32 == 2 ? 32 : 0),
	foo(3), bar(3), **buff = i);
      

    } unless (1[*buff] != 0) { 

      if(zoo('n')) 2[*buff] = i;
      else foo(2), bar(3);

    } unless (**buff == 'h' || **buff == 'H') {

      if(zoo('o') || zoo('a'))  1[*buff] = i;
      else foo(1), **buff = 0;
    }

    do putchar(i);

  }


  return 0;

}
