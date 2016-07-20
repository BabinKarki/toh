//Name: Babin Karki
//Date: July 20
//Reference:Youtube(Recursion Algorithm|Tower Of Hanoi - step by step guide)
  //         - Data and Structure Book(3.3)
#include<stdio.h>
 int towers(int, char, char, char);
 int main()
 {
 	int n;
 	printf("Enter the number of disks:\t");
 	scanf("%d",&n);
 	towers(n, 'A', 'B', 'C');
 }
 int towers(int n, char initialpeg, char finalpeg, char auxpeg)
 {
 	if(n==1){
 		printf("\n%s%c%s%c","mov disk 1 from first peg ",initialpeg," to peg",finalpeg);
		 return 0;
		 //mov disk 1 from A to B
	 }
	 	 towers (n-1,initialpeg, auxpeg, finalpeg);
	 //moves n-1 disk from initial to initialpeg to final peg using auxpeg
	 printf("\n%s%d%s%c%s%c","move disk ",n," from peg",initialpeg," to peg",finalpeg);
	 //moves n-1 disk from B to C using A
	 towers(n-1, auxpeg, finalpeg, initialpeg);
 }	
