#include <stdio.h>
#include <string.h>

typedef enum {
  NIL = 0,
  SPACE,
  H,
  HA,
  HO,
  HEN,
} STATE;

int isSpace(int c)
{
  return (c < 'A' || c > 'z');
}

int main()
{
  char buf[3];
  int i;
  
  memset(buf, 0, 3);

  while((i = getchar()) != EOF) {

    if(isSpace(buf[0])) { // Space
      if(isSpace(i))
	buf[0] = i;
      else if(i == 'h' || i == 'H') {
	memset(buf, 0, 3);
	buf[0] = i;
      }

    } else if(buf[2] != 0) { // HEN

      if(isSpace(i)) {
	buf[1] = buf[1] < 'Z' ? 'E' : 'e';
	printf("%.*s", 3, buf);
	memset(buf, 0, 3);
	buf[0] = i;
      }

    } else if(buf[1] != 0) { // HA, HO

      if(i == 'n' || i == 'N')
	buf[2] = i;
      else {
	printf("%.*s", 2, buf);
	memset(buf, 0, 3);
      }

    } else if(buf[0] == 'h' || buf[0] == 'H') { // H

      if(i == 'o' || i == 'a' || i == 'O' || i == 'A') {
	buf[1] = i;
      } else {
	printf("%.*s", 1, buf);
	buf[0] = 0;
      }

    }

    if(isSpace(buf[0]))
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
