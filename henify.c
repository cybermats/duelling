
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
      else if (104 == (i | 32))  {
	*((int*)buff)=0;
	*buff = i;
      }
      
    } else if (buff[2] != 0) { 
      
      if(!(i >> 6)) { 
	1[buff] = 0105 +  (1[buff] / 32 == 2 ? 0 : 32);
	*(args-3) = 1[buff];

	*buff = i;
      }
      *((int*)buff)=0;

    } else if (1[buff] != 0) { 

      if('n' == (i | 32)) 
	2[buff] = i;
      else 
	*((int*)buff)=0;
    } else if ((*buff | 32) == 104) {

      if( 0117 == (i & 223) || 97 == (i | 32))  1[buff] = i;
      else *buff = 0;
    }
  }
}

