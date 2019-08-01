#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

// instead of PAD, use synchronization to eliminate false sharing 

static long num_steps = 1000000;
double step; 
int main(void)
{ 
   // set pi as a global & double starting at 0.0  
   double pi=0.0; int shared_num_threads;  
   // get track of the start time 
   double timeStart = omp_get_wtime();
   // get the constant step value 
   step = 1.0/(double) num_steps; 
   // set the number of threads for omp 
   //omp_set_num_threads(OMP_NUM_THREADS);
   // start parallelization 
   #pragma omp parallel 
   {   
      // set variables 
      int i, ID, num_threads; double x, sum; 
      // get the ID number 
      ID = omp_get_thread_num();
      num_threads = omp_get_num_threads(); 
      //printf("number of threads (%d)",num_threads);
      // copy number of threads to check for sys override 
      if (ID==0) shared_num_threads = num_threads;
      for (i=ID, sum=0.0;i<num_steps;i=i+num_threads){ 
         x = (i+0.5)*step;
         sum += 4.0/(1.0+x*x);
      }
      // Adding critical AFTER the loop 
      #pragma omp critical 
      {
         pi += sum * step;
      }
   } 
   printf("pi %f\n",pi);
   double timeFinish = omp_get_wtime();
   double totalTime = (double) timeFinish - (double) timeStart;
   printf("the finish time is (%f)\n",totalTime);
}

