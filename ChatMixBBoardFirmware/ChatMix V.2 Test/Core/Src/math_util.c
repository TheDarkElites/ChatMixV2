/*
 * util.c
 *
 *  Created on: Sep 26, 2026
 *      Author: George
 */

#include "math_util.h"

int map(int variable, int min_fm, int max_fm, int min_to, int max_to)
{
  float percentage = (variable - min_fm)/(float)(max_fm - min_fm);
  int result = percentage*(max_to - min_to) + min_to;
  return result;
}
