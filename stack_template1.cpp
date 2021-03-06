#include <iostream>//for I/O operations
using namespace std;
template<class T>//Template class where T is the data type
#define MAX 10//Size of the stack is MAX i.e 10
class stack{
 
    int n;//tells the size of the stack
    int top;//Used for iterating over the stack
    T array[MAX];//Stack using array implementation with size MAX i.e 10
    
	public:
    stack()//constructor
    {
        n=10;
        top=-1;
        
    }
   void push(T a)
    {
        
		
	if(top==MAX-1)//this condition signifies that stack is full
        cout<<"Stack overflow"<<endl;
        
		else
        {
            top=top+1;
            array[top]=a;
            
        }
    }
    
    void pop()
    {
        if(top==-1)//condition for empty stack
        cout<<"Stack underflow"<<endl;
        
		else
        top=top-1;
    }
    
    void pull()//Gives the top-most element in the stack
    {
        cout<<array[top];
    }
    
    void display()
    {
        int j;
        for(j=0;j<=top;j++)
        {
            cout<<array[j]<<" ";
        }
    }
    
 T stack_operations()
{
    while(1)
{
		
	cout<<"Enter the choice:1.push 2.pop  3.pull  4.display "<<endl;
	int j;
	cin>>j;
	switch(j)
	{
		case 1:
			cout<<"Enter the value to push";
			T a;
			cin>>a;
			push(a);
			break;
			
		case 2:
			pop();
			break;
			
		case 3:
			pull();
			break;
		
		case 4:
			display();
			break;
			
		default:exit(0);
	  }  
   }
 }
};





int main()

{
    stack <int> obj1;
    stack <float> obj2;
    
	
	while(1)
    {
    	cout<<"Enter the choice: 1.Integer array  2.Float array"<<endl;
    	int i;
    	cin>>i;
    	switch(i)
    	{
    		case 1:
    			obj1.stack_operations();
    			
    		case 2:
    			obj2.stack_operations();
    			
    		default:exit(0);
		}
    }
}

