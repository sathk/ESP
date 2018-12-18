//-----------------------------------------------------------------------------
// ass3.c
//
// Card
// This program should be a lighter version of the popular game 'Solitaire'
//
// Group: Group 20977, study assistant Philip Loibl
//
// Authors: George-Bogdan Demian  01211080
//          Sathearo Kim          01430376
//-----------------------------------------------------------------------------
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defines for error messages.
#define ERR_USAGE "[ERR] Usage: ./ass3 [file-name]\n"
#define ERR_FILE "[ERR] Invalid file!\n"
#define ERR_COMMAND "[INFO] Invalid command!\n"
#define ERR_MOVE "[INFO] Invalid move command!\n"

typedef struct _Card_
{
  char card_colour;
  int card_value;
} Card;

int main(int argc, char const *argv[])
{
  FILE *fp;
  fp = fopen("config.txt", "r");
  if (fp == NULL)
  {
    printf("%s", ERR_FILE);
  }
  return 1;

  fclose(fp);
  return 0;
}