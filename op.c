#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX   10000

int main(int argc, char *argv[])
{
  if(argc != 2)
  {
    fprintf(stderr, "Usage: <filename> \n");
    exit(2);
  }
//int count(char *argv, char  )
  char filename[MAX], line[MAX];
  char lwrd[MAX];
  char *ptr = NULL;
  int maxlen;
  FILE *fp = NULL;
  int chct = 0, wct = 0, lct = 0, len = 0;

  if ((fp = fopen(argv[1], "r")) == NULL)
  {
    fprintf(stderr, "Error opening file %s\n", filename);
    exit(1);
  }

  while (fgets(line, MAX, fp) != NULL)
  {
    lct++;
    ptr = strtok(line, " \n\t");

    while (ptr != NULL)
    {
      wct++;
      len = strlen(ptr);
      chct = chct + len;

      if (len >= maxlen)
      {
        strcpy(lwrd, ptr);
        maxlen = len;
      }

      ptr = strtok(NULL, " ""\n""\t" );
    }
  }

  printf("Characters in file: %d \n", chct);
  printf("Words in file: %d \n", wct);
  printf("Lines in file: %d \n", lct);
  printf("The longest word is: %s, with number of chars as %d \n", lwrd, maxlen);

  exit(0);
}
