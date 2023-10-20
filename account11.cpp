#include<iostream>
#include"account11.h"
using namespace std;
int main(){


Account act1;
act1.deposite(12000);
act1.display();


Account act2(202,"sham","pune","Sgmail",5000);
act2.display();
act2.deposite(4000);

act1.moneytransfer(1000,act2);
act1.display();
act2.display();


Account *ptr=new Account(102,"Ramu","pune","AA",3000);
ptr->display();






	

    return 0;
}