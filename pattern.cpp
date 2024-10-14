#include<iostream>
using namespace std;
int main()
   {
                         //pattern 1 
    /*int n ;
    cout<<"enter the value of n = ";                   
    cin>>n;                                           
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ;j++)
        {
            cout<<j;
        }
        cout<<endl;
    } 
   output:enter the value of n = 5
    12345
    12345
    12345 
    12345 */
                           //pattern 2
 /* int n ;
    cout<<"enter the value of n = ";
    cin>>n;
    for(int i=1 ; i<=n ; i++)
    {
        char ch ='A';
         for(int j=1 ; j<=n ;j++)
        {
            cout<<ch;
            ch= ch+1 ; 
        }
        cout<<endl;


    }
output: enter the value of n = 5
ABCDE
ABCDE
ABCDE
ABCDE
ABCDE */
                             //pattern 3
        
    /* int n ;
    cout<<"enter the value of n = ";
    cin>>n;
    int num = 1;
    for(int i=1 ; i<=n ; i++)
    {     
        for(int j=1 ; j<=n ;j++)
        {
            cout<<num;
           num++ ; 
        }
        cout<<endl;
      }
output: enter the value of n = 3
123
456
789 */
      
                              //pattern 4
   /*  int n ;
    cout<<"enter the value of n = ";
    cin>>n;
    char ch ='A';
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ;j++)
        { 
            cout<<ch;
            ch = ch + 1;
    }
     cout<<endl;
    }
 output:   enter the value of n = 3
ABC
DEF
GHI */
    
                          //pattern 5 
                          //Triangle pattern
  /*     int n ;
    cout<<"enter the value of n = ";
    cin>>n;
     for(int i=0 ; i<n ; i++)
    {
      for(int j=0 ; j<i+1 ;j++)
        { 
            cout<<"*";  
    }  
    cout<<endl;
    }    
output:enter the value of n = 3
*
**
*** */
                //pattern 6
  /*   int n ;
    cout<<"enter the value of n = ";
    cin>>n;
     for(int i=0 ; i<n ; i++)
    {   
        for(int j=0 ; j<i+1 ;j++)
        { 
            cout<<i+1; 
             
    }  
    cout<<endl;
    }   
output:enter the value of n = 3
1
22
333     */
                //pattern 7
  /*    int n ;
    cout<<"enter the value of n = ";
    cin>>n;
    char ch = 'A';
     for(int i= 0; i<n ; i++)
    {  
        for(int j=0 ; j<i+1 ;j++)
        {
            cout << ch;  
      }  
      ch++;
     cout<<endl;
    } 
output:enter the value of n = 3
A
BB
CCC */
              //pattern 8
     /* int n ;
    cout<<"enter the value of n = ";
    cin>>n;
     for(int i= 1; i<=n ; i++)
    {  
        for(int j=1 ; j<i+1 ;j++)
        {
            cout << j;  
      } 
       cout<<endl; 
    }  
output: enter the value of n = 3
1
12
123 */
     
             //pattern 8
             //Floyd's Triangle pattern
  /* int n ;
    cout<<"enter the value of n = ";
    cin>>n;
    int num = 1;
     for(int i= 0; i<n ; i++)
    {
        for(int j=0 ; j<i+1 ;j++) {
        cout<<num;
         num++;
    }
    cout<<endl;
   
    }
    output: enter the value of n = 3
1
23
456 */
                   //pattern 9
   /* int n ;
    cout<<"enter the value of n = ";
    cin>>n;
    char ch = 'A';  
     for(int i= 0; i<n ; i++)
    {  
        for(int j=0 ; j<i+1 ;j++)
        {
            cout << ch; 
            ch++; 
      }  
     cout<<endl;
    } 
    output: enter the value of n = 4
A
BC
DEF
GHIJ */
                   //pattern 10
                   // inverted triangle pattern
 /*     int n ;
    cout<<"enter the value of n = ";
    cin>>n;
      for(int i= 0; i<n ; i++)
    {  
       
        for(int j=0 ; j<i ;j++)
        { 
            cout<<" ";
    }        
    
        for(int j=0 ; j<n-i ;j++)
        { 
            cout<<i+1;
    }       
    cout<<endl; 
    } 
output: enter the value of n = 4
1111
 222
  33
   4  */  
                  //pattern 11
                   // pyramid pattern
  /*  int n ;
    cout<<"enter the value of n = ";
    cin>>n;
      for(int i= 0; i<n ; i++)
    {    for(int j=0 ; j<n-i-1 ;j++)   //spaces (n-i-1)
        { 
            cout<<" ";
    }   
     for(int j=1 ; j<=i+1 ;j++)   //hailpyramid
        { 
            cout<<j;
    }   
     for(int j=i ; j>0 ;j--)  //rightpyramid
        { 
            cout<<j;
    } 
    cout<<endl;  
       }    
output:enter the value of n = 3
  1
 121
12321 */ 
                      //pattern 12
                       // hollow diamond pattern
 /* int n ;
    cout<<"enter the value of n = ";
    cin>>n;
    //top part
      for(int i= 0; i<n ; i++){

         for(int j=0 ; j<n-i-1 ;j++)   //spaces (n-i-1)
        { 
            cout<<" ";
    }   
     cout<<"*";
     if(i!=0){
    for(int j=0 ; j<2*i-1 ;j++)   //for between spaces
        { 
            cout<<" ";
    }   
    cout<<"*";
      }   
      cout<<endl;
      }   
       //bottom
        for(int i= 0; i<n-1 ; i++){ 
             for(int j=0 ; j<i+1 ;j++)   //spaces (n-i-1)
        { 
            cout<<" ";
    }   
         cout<<"*";
         if(i!= n-2)  {
                         for(int j=0 ; j<2*(n-i)-5 ;j++)   
        { 
            cout<<" ";
         }  
          cout<<"*";
         } 
           
        cout<<endl; 
        }
    output:enter the value of n = 4
   *
  * *
 *   *
*     *
 *   *
  * *
   *                */
                          //pattern 13
                          //butterfly pattern
  /*int n ;
    cout<<"enter the value of n = ";
    cin>>n;
     for(int i= 1; i<=n ; i++)
    {  
        for(int j=1 ; j<=i ;j++)
        {
            cout<<"*";
      }  
       for(int j=1;j<=2*(n-i);j++){
        cout<<" ";
    }
      for(int j=1;j<=i;j++){
        cout<<"*";
    }
     cout<<endl;
    }
    
      for (int i=n;i>=1;i--){
    for (int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int j=1;j<=2*(n-i);j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   output:enter the value of n = 4
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
    } */
     return 0;
   }   