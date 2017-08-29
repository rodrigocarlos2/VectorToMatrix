

#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, j, matrix[2][3], vector[6];

  for(i=0;i<2;i++)
    for(j=0;j<3;j++){
      printf("Write the value[%d][%d]", i, j);
   	  scanf("%d", &matrix[i][j]);
    }

  for(i=0;i<2;i++) {
    for(j=0;j<3;j++)
      vector[i*3 + j] = matrix[i][j];
  }

  for(j=0;j<6;j++) {
    printf(" Value[%d]: %d", j, vector[j]);
  }

  printf("\n");

  printf("Write the I of matrix:");
  scanf("%d", &i);

  printf("Write the J of matrix:");
  scanf("%d", &j);

  printf("The result is: %d \n", vector[i*3+j]);

  return 0;
}

