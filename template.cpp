#include<bits/stdc++.h>
using namespace std;
template<typename T>
void input(T a[],int n){
for(int i=0;i<n;i++)cin>>a[i];
}
template<typename T>
void sort(T a[],int n){
int k=-1;
for(int i=0;i<n;i++){
int c=INT_MAX;
for(int j=i+1;j<n;j++){
if(a[j]<c){
c=a[j];
k=j;
}
}
if(c<a[i]) swap(a[i],a[k]);
}
}
template<typename T>
void print(T a[],int n){
for(int i=0;i<n;i++) cout<<a[i]<<" ";
cout<<endl;
}
signed main(){
int n; cin>>n;
int a[10];
float b[10];
input<int>(a,n);
sort<int>(a,n);
print<int>(a,n);
input<float>(b,n);
sort<float>(b,n);
print<float>(b,n);

}
