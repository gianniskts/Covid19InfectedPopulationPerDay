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
      printf("Example Input: 10000000 1.78 ==> population=10000 R_index=1.78(1 infected person infects 1.78 the next day)\n");
// input
      int population=0, days=1, infected=1;
      double rIndex=0;
      scanf("%d %lf", &population, &rIndex);
      printf("Day 1   ==>   1 person is infected from Covid-19 pandemic\n");
// implementation
      double sumInfected=0; // for percentage purposes
      while(infected<population){
            days++;
            infected += infected*rIndex;
            sumInfected+=infected;
            printf("Day %d   ==>   %d people are infected from Covid-19 pandemic started from 1 infected person------ percentage is %.3lf%% of new cases\n", days, (int)infected-1, (1-(infected)/sumInfected)*100);
      }
            printf("\nFinally,  %d days are needed for %d of population to be infected from 1 infected person with Covid-19 disease with an R-index of %.2lf.\nFurthermore, the infection growth is logarithmic.\n
\n", days, population, rIndex);
	return 0;
}
