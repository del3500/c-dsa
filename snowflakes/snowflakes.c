#include <stdio.h>

int identical_right(int snow1[], int snow2[], int start) {
  int offset, snow2_index;
  for (offset = 0; offset < 6; offset++) {
    snow2_index = start + offset;
    if (snow2_index >= 6) {
      snow2_index = snow2_index - 6;
    }
    if (snow1[offset] != snow2[snow2_index]) {
      return 0;
    }
  }
  return 1;
}

int identical_left(int snow1[], int snow2[], int start) {
  int offset, snow2_index;
  for (offset = 0; offset < 6; offset++) {
    snow2_index = start - offset;
    if (snow2_index <= -1) {
      snow2_index = snow2_index + 6;
    }
    if (snow1[offset] != snow2[snow2_index]) {
      return 0;
    }
  }
  return 1;
}

int are_identical(int snow1[], int snow2[]) {
  int start;
  for (start = 0; start < 6; start++) {
    if (identical_right(snow1, snow2, start)) {
      return 1;
    }
    if (identical_left(snow1, snow2, start)) {
      return 1;
    }
  }
  return 0;
}

int main(void) {
  int snow1[] = {1,2,3,4,5,6};
  int snow2[] = {5,4,3,2,1,6};
  printf("%d", are_identical(snow1, snow2));
}
