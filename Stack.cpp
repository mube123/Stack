#include<iostream>
using namespace std;
class Stack
{
	int maxSize, currSize, top;
	int* arr;
public:
	void createStack(int size)
	{
		maxSize = size;
		arr = new int[maxSize];
		currSize = 0;
		top = -1;
	}
	bool isEmpty()
	{
		if (currSize == 0)
			return 1;
		return 0;
	}
	bool isFull()
	{
		if (currSize == maxSize)
			return 1;
		return 0;
	}
	bool push(int val)
	{
		if (isFull())
		{
			cout << "Stack is Full\n";
			return 0;
		}
		else
		{
			top++;
			arr[top] = val;
			currSize++;
			return 1;
		}
	}
	
	//remove value from top
	int pop()
	{
		if (isEmpty())
		{
			cout << "Stack is Empty\n";
			return -1000;
		}
		else
		{
			int val = arr[top];
			top--;
			currSize--;
			return val;
		}
	}
	
	//display value at top
	int getTop()
	{
		if (isEmpty())
		{
			cout << "Stack is Empty\n";
			return -1000;
		}
		else
		{
			return arr[top];
		}
	}
	
	//display all value function
	void displayAll()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty\n";
        }
        else
        {
            Stack s;
            s.createStack(maxSize);
            while (currSize != 0)
            {
                int val = pop();
                cout << val << endl;
                s.push(val);
            }
            while (s.currSize != 0)
            {
                push(s.pop());
            }
        }
    }
    
    //delete a specific value from the stack
    int delete_a_specific_value()
    {
    	//checking if stack empty or not
    	int n,val,i;
		{
		if (currSize == 0)
			{
				cout<<"stack is empty";
			}
			
		else
			{
				cout<<"stack is not empty. Enter the value to be deleted";
				cin>>n;
				
			//	while(currSize!=0)
				for(i=currSize;i!=0;i--)
				{
					//getting value from top
						val = arr[top];
						top--;	
		
					if(val==n)
					{
						cout<<"\nvalue founded\n";
						
						{
            				Stack s;
            				s.createStack(maxSize);
            				while (currSize != 0)
            				{
               				 	int val = pop();
               				 	cout << val << endl;
               				 	s.push(val);
            				}
            				while (s.currSize != 0)
            				{
               					 push(s.pop());
            				}
        }
						
						break;
					}
					else
					{
						cout<<"\nvalue not founded\n";
					}
				}
			}
		}
	}


};
int main()
{
	Stack s1;
	int n;
	cout << "Enter Stack size: ";
	cin >> n;
	
	//creating a stack
	cout<<"\ncreating a stack\n";
	s1.createStack(n);
	
	//pushing/putting values in the created stack
	cout<<"\npushing/putting values in the created stack\n";
	s1.push(7);
	s1.push(8);
	s1.push(9);
	
	//displaying the value at top in the stack
	cout<<"\ndisplaying the value at top in the stack\n";
	cout << "\nTop of the Stack is: " << s1.getTop() << endl;
	
	//displaying all values in the stack
	cout<<"\ndisplaying all values in the stack\n";
	s1.displayAll();

	//poping/removing a value from top
	cout<<"\npoping/removing a value from top\n";
	s1.pop();
	
	//displaying all values in the stack
	cout<<"\ndisplaying all values in the stack\n";
	s1.displayAll();
	
	//delete a specific value from the stack
	cout<<"\ndeleting a specific value from the stack\n";
	s1.delete_a_specific_value();
	




	system("pause");
}
