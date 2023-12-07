#include <iostream>

using namespace std;

void llojetevariablave();
void forLoop();
void piramid();
void fibonacii();



    void llojetevariablave() {
         int numer = 42;
         float numberFloat = 3.34;
         char karakter = 'a';
         cout << "numeri: " << numer <<endl;
         cout << "Float: " << numberFloat<<endl;
         cout << "Karakter: " << karakter<<endl;
    }

        void forLoop() {

         int n;
         cout<<"Enter Positive Intiger:" <<endl;
         cin>> n;

         int sum = 0;

         for(int i = 1; i <= n; i++) {
            sum += i;
         }

         cout<<"Pergjgije:"<<sum<<endl;
        }

        void piramid() {

        int rows;

        cout<<"Put Rows:";
        cin>>rows;


        for(int i = 1; i <= rows; i++){
            for(int j = 1; j<= rows - 1; j++ ){
                cout<<"  ";
            }

            for(int k = 1; k<= 2 * i - 1; k++){
                cout<<" *";
            }
        }
            cout<<endl;
        }


        void fibonacii(){
        int n;
        cout<<"Enter n: ";
        cin>>n;


        int first = 0, second = 1, next;
        cout<<"Fibonacci series: "<< first<<" "<< second<<' ';

        for(int i = 3; i <= n; i++){
            next = first + second;
            cout<<next<<"";

            first = second;
            second = next;
        }
        }
int main() {

        //llojetevariablave();
        //forLoop();
        //piramid();
        //fibonacii();
        return 0;
}
