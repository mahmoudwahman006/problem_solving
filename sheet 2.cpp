#include <iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
                                                                      /* code c in sheet 2
    int x,z,c;
    int coun_neg = 0,coun_pos = 0,coun_even = 0 ,coun_ood = 0 ;
    cin>>x;
    int element[x];
    for(int i=0;i<x;i++){
        cin>>element[i];
        }

    for(int i=0;i<x;i++){

        if(element[i]<0){
            coun_neg+=1;
            z = element[i];
            c = abs(z);
            if(c%2==0){
                coun_even+=1;}
            else if (c%2!=0){
                coun_ood+=1;}}

        else if (element[i]>0){
            coun_pos+=1;
            if(element[i]%2!=0){
                coun_ood+=1;}
            else if (element[i]%2==0)
                coun_even+=1;
                }

        else if (element[i]==0)
            coun_even+=1;

    }
cout<<"Even: "<<coun_even<<endl;
cout<<"Odd: "<<coun_ood<<endl;
cout<<"Positive: "<<coun_pos<<endl;
cout<<"Negative: "<<coun_neg<<endl;
*/

                                                   /* code E sheet 2
int x,counter,m;
cin>>x;
int element[x];
for(int i=0;i<x;i++){
    cin>>element[i];}
m = element[0];
for(int i =0;i<x;i++ ){
    if(m>element[i]){
        counter++;}
    else
        m=element[i];}
cout<<m<<endl;*/
                                                      /*  code f sheet 2
int x;
cin>>x;
for(int i = 1;i<=12;i++){
    cout<<x<<" * "<<i<<" = "<<(x*i)<<endl;
}*/

                                                        /* code e sheet 2
int t;
cin>>t;
while(t>0)
{
long long n,s=1;
cin>>n;
for(int i=1;i<=n;i++)
{
   s*=i;
}
cout<<s<<endl;
t--;
}*/
/*                                                     code h  sheet 2
int i;
cin>>i;
int c=2;
int counter=0;
if((i>=2)&(i<=100000)){
for(int c=2;i>c;c++){
if(i%c==0){
    counter+=1;}
}
if(counter==0){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}
*/
int x,c;
int A[x];
int B[x];
cin>>x;
x=c;
for(int i=0;i<x;i++){
    cin>>A[i];}
if((A[0]!=0)|(A[-1]!=0)){
    for(int i=0;i<x;i++){
        B[i]=A[x-(x-c)];
        c--;
    }

}
return 0;
}
