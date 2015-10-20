#include <stdio.h>
#include <string.h>

void lowercase(char arr[]) {
  int len = strlen(arr);

  for (int k=0; k<len; k=k+1) {
    if ((arr[k] >= 65) && (arr[k] <= 90)) {
      arr[k] = arr[k] + 32;
    }
  }
}
