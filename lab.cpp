// Online C++ compiler to run C++ program online
#include <iostream>
#include <ctime>
using namespace std;
class Program{
public:
    void solution(){
          int p = 1;
    int index1, index2;
   
    
    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(arr[i]<0 && arr[j<0]){
                int temp = abs(arr[i] * arr[j]);
            if(temp > p){
                p = temp;
                index1 = i;
                index2 = j;
            }
            }
            
            else{
            int temp = arr[i] * arr[j];
            if(temp > p){
                p = temp;
                index1 = i;
                index2 = j;
            }
            
            }
        }
    }
    cout << endl << "The largest product is " << arr[index1] << "*" << arr[index2] << " =" <<  p;      
    }
  //  void generateArray(){
//        srand(time(0));
  //      for(int i = 0; i < 10 ; i++){
//            arr[i] = rand() % 10;
 //           cout << arr[i] << " ";
 //      }
 //   }
private:
int arr[10]={-100,-20,10,2,3,4};
};
int main() {

  Program prog;
  //prog.generateArray();
  prog.solution();
    
}
