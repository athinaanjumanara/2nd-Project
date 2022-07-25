 //                                      ANJUMANARA ATHINA - 155142

#include<iostream> // required for input output operation
#include <string> //Required for string
#include <cstdlib> //declares a set of general-purpose functions
#include <iomanip>
#include <cmath> // to perform mathematical operations
#include <conio.h> //used to include some functions

#include "dynamic_queue.h"

using namespace std;



int main()
{
    dynamic_queue taskQ;
    taskQ.push(new Task(0, 3, "T1"));
    taskQ.push(new Task(1, 5, "T2"));
    taskQ.push(new Task(3, 2, "T3"));
    taskQ.push(new Task(6, 4, "T4"));
    taskQ.push(new Task(10, 6, "T5"));
    taskQ.push(new Task(14, 1, "T6"));
    

    int completiontime = 0;
    int totalCompletionTime = 0;


    while (!taskQ.empty())
    
    {
        Task* _task = taskQ.qfront();

        Task task = Task(_task->arrivalTime, _task->executionTime, _task->name);
       

        int waitingTime = completiontime - task.arrivalTime;
        

        cout << "\n\n Printing started for Task: " << task.name ;
        
        cout << "\n Printing finished for Task: " << task.name << endl;
        
        cout << "\n Execution Time for printing: " << task.executionTime << " units" ; 
        cout << "\n Waiting time for printing: " << waitingTime << " units" ;
        
        
        totalCompletionTime += waitingTime;
        completiontime += task.executionTime;


        cout <<"\n CompletionTime: " << completiontime << " units" << endl;
        cout <<"\n __________________________________________________" << endl ;

        taskQ.pop();
        
    }

	cout << "\n          ************************************************" << endl;
    cout << "\n                    Average waiting time for Printing = " << (totalCompletionTime * 1.00) / 6 << endl; 
    cout << "\n                    Total Completion time =" << totalCompletionTime << endl;
    
    
    return 0;
    
    
    
    getch();
}















