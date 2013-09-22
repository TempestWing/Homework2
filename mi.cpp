#include <iostream> 
using namespace std; 
int Mi(int x, int y){
	if(y==1) 
     return x;  
    if(x>1&&y>1) 
	 return (Mi(x,y-1)*x);
}
int main() 
{
	int a,b; 
    cin>>a>>b; 
    cout<<Mi(a,b)<<endl;
	system("pause");
    return 0;
}