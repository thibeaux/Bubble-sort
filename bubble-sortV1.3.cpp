#include<iostream>
#include <vector>
#include <windows.h>
using namespace std;



int main()

{
    int Count = 0;
	vector<int> arr ;
    int myint =0;
	size_t len =sizeof(arr)/sizeof(arr[0]);//Possible solution (add +1 to len)

	int count=0;

	//input

	cout << "Please enter your number and type *done* when finished" << endl;

	do {
    Count++;
    std::cin >> myint;
    arr.push_back (myint);
  } while (myint);



	//output
    cout<<"\nArray is this size "<<Count-1<<endl;
	cout << "Initial array: " << endl;

	for (int i = 0; i <Count-1; i++)

	{

		cout << arr[i] << endl;

	}

	cout << "*******************************" << endl;


	//getchar();

	//bubble sort

	bool ordered = false;

	int stop = 0, i=0;

	while(ordered == false)

	{

		//counts how many times it it scans the numbers and prints Count #1 to section each sweep

		i++;

		cout << "Count #" << i << endl;



		for (int j = 0; j <Count-1; j++)

		{

			if (arr[j] > arr[j + 1])

			{

				//arr[j+1] is the next block in line from arr[j] it is how we shift the blocks of data round

				//we assign both numbers for example arr[j]=5 and arr[j+1] = 2 to the temperary buffer variables so we can hard assign them and swap them ass shown below

				//arr[j] was =5, now it is =2 becuase temp2 =2 and arr[j+1] = 5 becuase temp =5 it was =2

				//stop++ basically just keeps track if the statemnt made any shifts, if all is in order there are no shifts needed.

				int temp = arr[j];

				int temp2 = arr[j + 1];

				arr[j] = temp2;

				arr[j + 1] = temp;

				stop++;

			}

			//prints the array of numbers after being sorted

			cout << arr[j] << endl;

		}

		//a short hand way of writing an if statement to see if and shifts were made

		(stop== 0) ? ordered = true : stop = 0;

	}

	cout<<"*******************************************************************"<<endl;
	//I had to add this part in because my final output would be -1 for every integer.EX:  if I type 5,3,2,1,4... it would output 0,1,2,3,4; So this seems to work
	//Correcting the output
	for(int i =0;i<Count-1;i++)
    {
        cout<<arr[i]+1<<endl;
    }


    return 0;

}
