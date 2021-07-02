// preprocessor directives
#include <stdio.h>
// main
int main(void){
// starting messages
      printf("---Welcome to Covid-19 spreading calculator. Give the desired population number and the R number. The result will be days required for the full population infection---\n");
      for(int i=0; i<10; i++){
      printf("Loading......\n");
      }
      printf("Info: R number is the spreading index. For example: For R=1.2 an infected person spreads to 1.2 people the disease(Covid-19) in the next day \n");
      printf("Please input the population number(integer) and the R number(float)\n");
      printf("Example Input: 10000000 2. ==> population=10000 R_index=2(1 infected person infects 2 the next day)\n");
// input
      int population=0, days=1, infected=1;
      double rIndex=0;
      scanf("%d %lf", &population, &rIndex);
      printf("Day 1   ==>   1 person infected from Covid-19 pandemic\n");
// implementation
      while(infected<population){
            days++;
            infected += infected*rIndex;
            printf("Day %d   ==>   %d people infected from Covid-19 pandemic\n", days, (int)infected);
      }
}
