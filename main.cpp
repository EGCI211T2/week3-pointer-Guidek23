#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp;
  int n = argc - 1;


/*
change the size to dynamic size

Allocate (new) value according to size 
delete a[]
use 
int *p= new int[n]

input all the values in those new spaces.
*/


pa = new int [n];
pb = new int [n];

for (i = 0; i < n; i++)
{
  *pa = atoi(argv[i+1]);
  pa++;
}

/* old version

cout << "How many numbers?" << endl; // get the number from the user
cin >> n;
for (i = 0; i < n; i++)
{
  cout << "Input no." << i+1 << ": ";
  cin >> *pa; 
  pa++;
}
*/

pa-=n;

//cout<<"Original: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl; //

pb = pa;
pa-= (n-1);
for (i=0; i<n/2; i++)
{
   temp = *pa;  
   *pa = *pb;  
   *pb = temp;
   pa++;  pb--;
}

pa -= (n/2);

//cout<<"Reversed: ";
for (i=0; i<n-1; i++ ,pa++){
   cout<<setw(3)<<*pa ;//<<endl;
  //cout<<pa<<endl;
}
cout<<setw(3)<<*pa<<endl;

delete []pa; //delete the n array.
return 0;
}
