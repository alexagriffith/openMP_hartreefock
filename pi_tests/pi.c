#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

static long num_steps = 100000;
double step;
#define NUM_THREADS 3
#define  PAD  64 // assuming 64 byte L1 cache line size 
// guarantees that each element in an array is on different cache lines 
int main()
{   int i, shared_num_threads; double pi, sum[NUM_THREADS][PAD]; 
   // set the params
   // divide the steps by the threads 
   //int steps_per_thread = num_steps / NUM_THREADS;
   // get track of the start time 
   double timeStart = omp_get_wtime();
   // get the constant step value 
   step = 1.0/(double) num_steps; 
   // set the number of threads for omp 
   omp_set_num_threads(NUM_THREADS);
   // start parallelization 
   #pragma omp parallel 
   {   
      // set variables 
      int i, ID, num_threads; double x; 
      // get the ID number 
      ID = omp_get_thread_num();
      //printf("ID is (%d)\n",ID); 
      num_threads = omp_get_num_threads(); 
      // copy number of threads to check for sys override 
      if (ID==0) shared_num_threads = num_threads;
      //printf("num threads is (%d)", num_threads);
      //int ID_lowerbound = ( ID * steps_per_thread); 
      //int ID_upperbound = (ID * steps_per_thread) + (steps_per_thread - 1.0);
      for (i=ID, sum[ID][0]=0.0;i<num_steps;i=i+num_threads){ 
         x = (i+0.5)*step;
         //printf("ID is (%d)", ID); 
         //printf("x is (%f)\n",x);
         sum[ID][0] += 4.0/(1.0+x*x);
         //printf("sum is (%f)\n",sum);
       } 
   }
   for (i=0, pi=0.0; i<NUM_THREADS;i++)pi += sum[i][0] * step;
   printf("pi=%f\n",pi);
   //printf("num threads is (%d)",shared_num_threads);
   double timeFinish = omp_get_wtime();
   double totalTime = (double) timeFinish - (double) timeStart;
   printf("the finish time is (%f)\n",totalTime);
}

