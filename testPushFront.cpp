#include <iostream> 
#include <deque> 
using namespace std; 

void d ();
   
int main() 
{ 
     void d ();
} 

void d ()
{
	deque<int> mydeque; 
    mydeque.push_front(3); 
    mydeque.push_front(2); 
    mydeque.push_front(1); 
    //Deque becomes 1, 2, 3 
  
    mydeque.pop_front(); 
    //Deque becomes 2, 3 
   
    for (auto it = mydeque.begin(); it != mydeque.end(); ++it) {
    	
    	 cout << ' ' << *it; 
	}
       
}
