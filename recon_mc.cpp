#include<iostream>
#include<vector>
#include<math.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

// Function heads

double line();
void tov_euler();
void f_t_tau();


main(){
  
  // File I/O

  FILE *FRES = fopen("results_test.out", "w");
  FILE *MRR  = fopen("mrr_tov.out", "r");

  if (MRR == NULL) exit(0);

  while (1){
    if (fscanf(MRR, " % % % % % % ", &R, &M) == EOF) break;

    

  }











  return 0;
}







