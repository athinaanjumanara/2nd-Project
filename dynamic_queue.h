 //                                         ANJUMANARA ATHINA - 155142

#include <bits/stdc++.h> //implementation file
#include <iostream> //header file
#include <conio.h> 


using namespace std;

struct Task{
	int arrivalTime;
    int executionTime;
    int waitingTime;
    Task *next;
    string name;
    

    Task(int arrivalTime, int executionTime, string name, int waitingTime = 0)
    {
        this->name = name;
        this->arrivalTime = arrivalTime;
        this->executionTime = executionTime;
        this->waitingTime = waitingTime;
    }
};

class dynamic_queue
{
    Task *rear, *front;

public:
    dynamic_queue()
    {
        rear = front= NULL;
      
    }
    void push(Task* node);
    Task* qfront();
    void pop();
    void qdisplay();
    bool empty();
    
};

void dynamic_queue::push(Task* node)
{
    
    if (rear == NULL)
    {
      //if queue is empty 
      //then new node is front and rear both
        front =rear = node;
        return;
    }
    
    else
    {
        rear->next = node;// Add the new node at the end of queue and change rear
        rear = node;
    }
}

//function to remove a key from given queue
void dynamic_queue::pop()

{
    //if queue is empty, return NULL
    if(front == NULL)
    return;
    
    
    //store previous front and
    //move front one node ahead
 	Task *temp = front;
  	front = front ->next;
  	
  	
  	//If front becomes NULL, then
  	// change rear also NULL
   	if (front == NULL)
          
		    rear = NULL;
            delete (temp);
        
      
 }


Task* dynamic_queue::qfront(){
    return front;
}

bool dynamic_queue::empty() {

    return front == NULL;
    
    
    
    
getch();

};












