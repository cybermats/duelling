#include <stdio.h>
#include <string.h>

isSpace(c)
{
  return (c < 'A' || c > 'z');
}

#define foo(x) printf("%.*s", x, *buff)
#define bar(x) memset(*buff, 0, x)

main(int i, char**buff)
{
  bar(3);

  while((i = getchar()) != EOF) {

    if(isSpace(**buff)) { // Space
      if(isSpace(i))
	**buff = i;
      else if(i == 'h' || i == 'H') 
	bar(3), **buff = i;
      
    } else if(2[*buff] != 0) { // HEN

      isSpace(i) && (
	1[*buff] = 1[*buff] < 'Z' ? 'E' : 'e',
	foo(3),
	bar(3),
	**buff = i);
      

    } else if(1[*buff] != 0) { // HA, HO

      if(i == 'n' || i == 'N')
	2[*buff] = i;
      else 
	foo(2),
	  bar(3);

      

    } else if(**buff == 'h' || **buff == 'H') { // H

      if(i == 'o' || i == 'a' || i == 'O' || i == 'A') 
	1[*buff] = i;
      else 
	foo(1),
	  **buff = 0;
      

    }

    if(isSpace(**buff))
      putchar(i);

    /*
    switch(state) {
    case NIL:
      if(isSpace(i))
	newState = SPACE;
      break;
    case SPACE:
      if(i == 'h' || i == 'H') {
	newState = H;
	buf[0] = i;
      }
      else if (isSpace(i))
	newState = SPACE;
      break;
    case H:
      if(i == 'o' || i == 'O') {
	newState = HO;
	buf[1] = i;
      }
      else if(i == 'a' || i == 'A') {
	newState = HA;
	buf[1] = i;
      }
      else 
	putchar(buf[0]);
      break;
     
    case HA:
      if(i == 'n' || i == 'N') {
	newState = HEN;
	buf[2] = i;
      }
      else
	printf("%.*s", 2, buf);
      break;
    case HO:
      if(i == 'n')
	newState = HEN;
      else
	printf("%.*s", 2, buf);
      break;
    case HEN:
      if(isSpace(i)) {
	buf[1] = buf[1] < 'Z' ? 'E' : 'e';
	printf("%.*s", 3, buf);
	newState = SPACE;
      }
      break;
    }

    if(newState == NIL || newState == SPACE )
      putchar(i);

    state = newState;
    */
  }


  return 0;

}
