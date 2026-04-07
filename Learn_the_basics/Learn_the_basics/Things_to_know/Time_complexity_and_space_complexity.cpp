#include<iostream>

/*
3 Rule - IMP
- Tc, always worst case scenerio (Best case, Avg case, Worst case)
- avoid constants
- avoid lower values
*/
int main(){
    for (int i = 0; i < N; i++)
    {
        std::cout<< "hello"<<std::endl;
    }
    
    //Loop will run N times = O(N)
    //Loop perform 3 actions each iteration = O(3xN + 1(int i ,initlization){ignored}) = O(3N)
    //Time Complexity = O(3N)
    //If O(3N^20+N^3+9) = avoid constants = (3N^20+N^3) = avoid lower values = O(3N^20)
}
//Big Oh - O() - worst case[uper bond]
//Theta - Avg complexity
//omega - best case complexity

/*
    Exercise 1
    for(int i=0; i<N;i++){
        for(int j=0; j<N;j++){
            //some code
        }
    }
Time complexity - 
    My attempt - O(1+ 2N +)
    Solution - thinking -> i=0 , j{0,1,2,3,.....N}  => N +
                           i=1 , j{0,1,2,3,.....N}  => N +
                           i=2 , j{0,1,2,3,.....N}  => N +
                           .                        .
                           .                        .
                           .                        .
                           .                        .
                           i=N-1(i<N) , j{0,1,2,3,.....N}  => N 

                           evrytime it is running for N times
                           for N times (i=0 to N-1)
                           thus, NxN = O(N^2) , ignore the i++ and j++ since they will be lower values
    
    Exercise 2
    for(int i=0; i<N;i++){
        for(int j=0; j<=i;j++){
            //some code
        }
    }
    Time complexity - 
    My attempt - thinking -> i=0 , j{0}  => 1
                             i=1 , j{0,1}  => 2
                             i=2 , j{0,1,2,3}  => 3
                             .                    .
                             .                      .
                             .                        .
                             .                          .
                             i=N-1(i<N) , j{0,1,2,3,.....N-1}  => N 

                             same as above O(N^2)
    Solution - thinking -> correct from above
                           
                           (1+2+3+4+5+6+......N) = sum of N natural numbers => N(N+1)/2 => N^2/2 +N/2(TC original) -> using rule -> O(N^2/2).

*/

/*
SPACE COMPLEXITY
-> memory space
-> Big oh

Comprised of two spaces -> Auxillary Space(space taken to solve the problem) , Input Space(space taken to store input)

Ex:- a b (variables) -> c = a + b -> c(Auxillary space) => SC -> O(3) {3 variables used}
    if int arr[N] -> SC => O(N)
*/

