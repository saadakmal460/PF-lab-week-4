#include <iostream>
using namespace std;



void ifPass(int marks);


main(){

 int marks;

 while(true){


        cout << "Enter marks: " ;
        cin >> marks;

  
	ifPass(marks);
                       }


}



void ifPass(int marks){
 
    if (marks > 50 ){
          
       cout << "You have passed your PF quiz" <<endl ;
}

    if ( marks == 50 ){
        
         cout << "Marks are 50 " <<endl;
}

        if ( marks < 50 ) {
                cout <<"You have failed the quiz of PF" <<endl;

}
}