#include <iostream>
using namespace std;
#define LIMIT 100000000

int factorial(){

    int times = 1;
    int fact;
    fact *= times;
    times++;
    if(fact<LIMIT)
        return 1;
    else{
        cout<<fact<<" "<<times-1<<endl;
        return 0;
    }
}
    
int main(){
    int i,n;
    cin>>n;
    for(i=0;i<n;i++){
        if(!factorial())
            break;
    }
    return 0;
}