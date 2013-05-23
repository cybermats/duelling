#include <Python.h>





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


method(args)
char * args;
{
  char buff[3];
  i;
  char *p = args;
  mymemset(buff);

  while(null != (i = *p)) {
    p++;
    

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


/*
 * Function to be called from Python
 */
static PyObject* py_myFunction(PyObject* self, PyObject* args)
{
  char* input;
  PyArg_ParseTuple(args, "s", &input);
  
  return Py_BuildValue("s", input);
}

/*
 * Bind Python function names to our C functions
 */
static PyMethodDef myModule_methods[] = {
	{"myFunction", py_myFunction, METH_VARARGS},
	{NULL, NULL}
};

/*
 * Python calls this to let us initialize our module
 */
void initmyModule()
{
	(void) Py_InitModule("myModule", myModule_methods);
}
