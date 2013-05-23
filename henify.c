
//#define zoo(x) i == x || i + 32 == x
#define zoo(x) (i | 32) == x

mymemset(buff)
char * buff;
{
  *((int*)buff) = 0;
}


henify(args)
char * args;
{
  int i;
  char buff[4];
  mymemset(buff);

  while(0 != (i = *(args++))) {
    if(!((*buff) >> 6)) {
      if(i/32 == 0) 
	*buff = i;
      else if ('h' == (i | 32))  {
	mymemset(buff); 
	*buff = i;
      }
      
    } else if (buff[2] != 0) { 
      
      if(!(i >> 6)) { 
	1[buff] = 0105 +  (1[buff] / 32 == 2 ? 0 : 32);
	*(args-3) = 1[buff];

	*buff = i;
      }
      mymemset(buff);       
    } else if (1[buff] != 0) { 

      if('n' == (i | 32)) 
	2[buff] = i;
      else 
	mymemset(buff);
      
    } else if ((*buff | 32) == 'h') {

      if('O' == (i & 223) || 'a' == (i | 32))  1[buff] = i;
      else *buff = 0;
    }
  }
}

