#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
/*                              code watermelon
    int x;
    cin>>x;
    if(x>2){
        if(x%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;}
    else
        cout<<"NO"<<endl;
     */
/*                            code 71A way too long words
    int t,z;
    cin>>t;
    while(t>0){
        string x;
        string s,q;
        cin >>x;
         z = x.length();
         if(z>10){
            s = x.at(0);
            q = x.at(z-1);
            cout<<s<<z-2<<q<<endl;
         }
         else
            cout<<x<<endl;
         t--;

    }*/
/*                             code 231A team
    int n,counter=0;
    cin>>n;
    while(n>0){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        if(n1+n2+n3>1)
            counter++;
            n--;}
cout<<counter<<endl;*/
                            /* code theatre square   revsion

long long m,n,a,x,y;
cin>>n>>m>>a;
x = m / a ;
if(m%a!=0){
    x++;
}
y=n/a;
if(n%a!=0){
    y++;
}
cout<<x*y<<endl;*/
/*                                      code boy or girl
string x;
bool z = true;
int coun =0;
cin>>x;
if(len(x)<=100){
for(int i =0;i<len(x);i++){
if(x[i]>=97&&x[i]<=122){
    z=false;
    coun++;
}
}
if(z==false){
    if (len(x)%2==0){
    cout<<"IGNORE HIM!"<<endl;}
    else
        cout<<"CHAT WITH HER!"<<endl;
}
}*/
 /*                                      code Bit++
int n;
cin>>n;
int coun =0;
while(n>0){
    string s = "";
    cin>>s;
    if(s=="X++"||s=="++X"){
        coun++;}
    else if(s=="X--"||s=="--X"){
        coun--;}
        n--;
}
cout<<coun<<endl;*/
/*                                       A.Next Round
int n,k,coun=0;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    if(arr[i]>=arr[k-1]&&arr[i]>0)
        coun++;
}
cout<<coun<<endl;
*/
/*                                          A. Domino Piling
int m,n;
cin>>m>>n;
if(m>1&&n>1&&m<16&&n<16){
cout<<(m*n)/2<<endl;
}*/
/*                                          A. Beautiful Matrix*/
int arr[25];
int p;
for(int i=0;i<25;i++){
    cin>>arr[i];}
for(int i=0;i<25;i++){
    if(arr[i]==1){
        p = abs(12-i);}
}
while(p>4){
    p-=4;}
    cout<<p<<endl;

return 0;
}

