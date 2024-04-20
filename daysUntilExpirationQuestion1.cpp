#include <iostream>
#include <random>
using namespace std;
int main(){
    std::random_device rd;
    std::uniform_int_distribution<int>distribution(0, 11);
    int daysUntilExpiration=distribution(rd);
    cout<<"your subscription expires in "<<daysUntilExpiration<<" days"<<endl;
if(daysUntilExpiration <=10 && daysUntilExpiration >5){
    cout<<"Your subscription will expire soon. Renew now!"<< endl;
}
else if(daysUntilExpiration <=5 && daysUntilExpiration >1){
    cout<<"Your subscription expires in "<<daysUntilExpiration<<"\n Renew and save 10%"<<endl;
}
else if(daysUntilExpiration==1){
    cout<<"Your subscription expires within a day"<<"\n Renew and save 20%"<<endl;
}
else if(daysUntilExpiration==0){
    cout<<"Your subscription has expired"<<endl;
}
else{
cout<<"You have an active subscription"<<endl;
}
    return 0;
}