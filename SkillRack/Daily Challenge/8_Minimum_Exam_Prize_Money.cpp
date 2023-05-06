/*The students of a class has to write two exams in Science and Maths. For the students passing the exam either a ball or a pen must be given as a prize based on the following conditions.
- If a ball is given for passing Science exam then a pen is given for passing Maths exam.<br>
- If a pen is given for passing Science exam then a ball is given for passing Maths exam.<br>

The price of a ball B and the price of a pen P is passed as input to the program. The number of students N taking the test is also passed as the input to the program. The program must print the minimum amount A required to buy the prizes for the student



Example Input/Output 1:
Input
5 10
6
1 0
1 1
1 0
0 1
1 1
1 0

Output:
55
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,p,sum1=0,sum2=0,min;
    cin>>b>>p;
    cin>>n;
    int sci[100],math[100];
    for(int i=0;i<n;i++){
        cin>>sci[i];
        cin>>math[i];

        sum1+=sci[i]*b;
        sum1+=math[i]*p;

        sum2 += sci[i]*p;
        sum2 += math[i]*b;
    }

    if(sum1>=sum2){
        min = sum2;
    }
    else{
        min = sum1;
    }
    cout<<min;
    return 0;
}