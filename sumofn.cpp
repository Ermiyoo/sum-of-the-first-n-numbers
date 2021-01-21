#include<iostream>

using namespace std;

int main(){

    int n;
    int sum = 0;
    cout <<"Enter Positive number: ";
    cin>>n;

    if (n > 0){
        for (int i=0; i<=n; i++){
            sum += i;
        }
    }else {
        cout<<"Error";
    }

    cout<<"The sum of the first "<<n<<" numbers is: "<<sum;

    return 0;
}
