
henify(a)
char * a;
{
  char b[4];
  *((int*)b)=0;

  while(0 != *a) {
    if(!((*b) >> 6)) {
      if(*a/32 == 0) 
	*b = *a;
      else if (104 == (*a | 32))  {
	*((int*)b)=0;
	*b = *a;
      }
      
    } else if (b[2] != 0) { 
      
      if(!(*a >> 6)) { 
	1[b] = 0105 +  (1[b] / 32 == 2 ? 0 : 32);
	*(a-2) = 1[b];

	*b = *a;
      }
      *((int*)b)=0;

    } else if (1[b] != 0) { 

      if(0116 == (*a & 223)) 
	2[b] = *a;
      else 
	*((int*)b)=0;
    } else if ((*b | 32) == 104) {

      if( 0117 == (*a & 223) || 97 == (*a | 32))  1[b] = *a;
      else *b = 0;
    }
    a++;
  }
}

