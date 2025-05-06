//==================Beta Version===============
//Kien thuc yeu cau 
//      Kien thuc chinh
//      ===Class Object 
//      ===Con Tro
//      ===Struct
//      Cac kien thuc phu
//      //Cac ham    bool       void    float   va cach goi ham
//      //String  Char  va bang ma ACSII     https://cdn-blog.28tech.com.vn/media/c%20tutorial/c%E1%BA%A5u%20tr%C3%BAc%20%C4%91i%E1%BB%81u%20khi%E1%BB%83n/asciii.png
//      //Vong lap (break va continue)
//      //Stringstream
//      //cin.clear     cin.ignore      cin.fail
//      //dia chi cua bien trong c++
//===============================================
#include<bits/stdc++.h>
using namespace std;



bool Check_GPA( float gpa){
    if ( gpa >10 || gpa <0){
        return false;
    }
    return true;
}

bool Check_Guide( string help){
    int Size = help.length();
    if ( Size != 5){
        return false;
    }
    
        string tmp = help;
        char r1 = tmp[1];
        char r2 = tmp[2];
        char r3 = tmp[3];
        char r4 = tmp[4];
        if (r1 >= 65 && r1 <=90){
            tmp[1] += 32;
        }
        if ( r2 >=65 && r2 <=90){
            tmp[2] += 32;
        }
        if ( r3 >=65 && r3 <=90){
            tmp[3] += 32;
        }
        if (r4 >=65 && r4 <=90){
            tmp[4] +=32;
        }
        if (tmp[0] == 47 && tmp[1] == 104 && tmp[2] == 101 && tmp[3] == 108 && tmp[4] == 112){
            
            return true;
        }else {
            return false;
        }
    
}

void Guide( ){
    int choice2;
    while(1){
    cout << "===================Guide==================\n";
    cout << "What Troble Do U Have?\n";
    cout << "1 Issue With Enter Name\n";
    cout << "2 Issue With Enter Date\n";
    cout << "3 Issue With Enter GPA\n";
    cout << "4 Exit Guide\n";
    cout << "What Ur Choice\n";
    cout << "==========================================\n";
    cin >> choice2;
    if (cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>:: max() , '\n'); 
        cout << "Enter Ur Choice Again!\n";
        continue;
    }
    if( choice2 == 1){
        cout << "----------------Explanation---------------\n";
        cout << "--Name Can't Contain Numbers Or Special Characters\n";
        cout << "-- Example : Nguyen Van A   Is Correct\n";
        cout << "If Enter Like Pham Van B21  Contains A Number, So It's Incorrect \n";
        cout << "If Enter As Nguyễn Thị H    Contains Special Characters, So It's Incorrect\n";
        cout << "------------------------------------------\n";
    }
    if ( choice2 == 2){
        cout << "----------------Explanation---------------\n";
        cout << "--Date Of Birth Format:\n";
        cout << "DD/MM/YY         OR      DDMMYY\n";
        cout << "--For Example :\n";
        cout << "24/12/2003         This Is Correct\n";
        cout << "2/1/2001           This Is Correct\n";
        cout << "342003 OR  4122004   Are Correct\n";
        cout << "------------------------------------------\n";
    }
    if ( choice2 == 3){
        cout << "----------------Explanation---------------\n";
        cout << "--GPA Should Be Between From 0 To 10\n";
        cout << "--For Example : 2.6 OR 7.8     Are Correct\n";
        cout << "If U Emter >10 Or <0 , U 'll Be Asked To Re-enter\n";
        cout <<"-------------------------------------------\n";
    }
    if ( choice2 == 4){
        cout << "Exit Giude\n";
        break;
    }
    if ( choice2 >=  5){
        cout << "Invalid Choice . PLS Try Again!\n";
    }
        }
    
}

void Standardised_Time_V2( string &time ){
    int Size = time.size();
    if ( Size == 6){
        time = "0" + time;
        time.insert(2, "0");
        time.insert(2 , "/");
        time.insert(5 , "/");
    }
    if (Size == 7){
        int choice1 ;
        time.insert(0 , "0");
        time.insert(2 , "/");
        time.insert(5 , "/");
        cout << "Which This One Or That One :\n";
        cout << "1 " <<time << endl;
        string tmp1 = time;
        time.erase(5 , 1);
        time.erase(2 , 1);
        time.erase(0 , 1);
        time.insert(2 , "0");
        time.insert(2 , "/");
        time.insert(5 , "/");
        cout << "2 " <<time << endl;
        string tmp2 = time;
        cout << "Enter Ur Select\n";
        
        while( 1){
        cin >> choice1;
            if (cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>:: max() , '\n');
                cout << "Enter Ur Select Again!\n";
                continue;
            }
            if ( choice1 == 1){
                    time = tmp1;
                    cin.ignore();
                    break;
                } else if ( choice1 == 2 ){
                    time = tmp2;
                    cin.ignore();
                    break;
                }else {
                    cout << "Enter Ur Select Again!\n";
                }
            }
        }
        if ( Size == 8 ){
            time.insert(2 , "/");
            time.insert(5 , "/");
        } 
}

void Standardised_Time( string &ClearAS30){
    char r1 = ClearAS30[1];
    char r2 = ClearAS30[4];
    if( r1 == 47 ){
        ClearAS30 = "0"+ClearAS30;
    }
    if( r2 == 47 ){
        ClearAS30.insert(3 , "0");
    }
}


bool CheckDate( string KeCuuRoiTriThuc ){
    if ( KeCuuRoiTriThuc.size() != 10){
        return 0;
    }
    char r0 = KeCuuRoiTriThuc[0];
    char r1 = KeCuuRoiTriThuc[1];
    char r2 = KeCuuRoiTriThuc[2];
    char r3 = KeCuuRoiTriThuc[3];
    char r4 = KeCuuRoiTriThuc[4];
    char r5 = KeCuuRoiTriThuc[5];
    char r6 = KeCuuRoiTriThuc[6];
    char r7 = KeCuuRoiTriThuc[7];
    char r8 = KeCuuRoiTriThuc[8];
    char r9 = KeCuuRoiTriThuc[9];
    if ( r2 != 47 || r5 != 47){
        return false;
    }
    
   
    if ( r0 < 48 && r0 > 57){
        return false;
    }
    if (r1< 48 && r1 > 57 ){
        return false;
    }
    if ( r3 < 48 && r3 > 57){
        return false;
    }
    if ( r4 < 48 && r4 > 57){
        return false;
    }
    if (r6 < 48 && r6 > 57){
        return false;
    }
    if ( r7 < 48 && r7 > 57){
        return false;
    }
    if ( r8 < 48 && r8 > 57){
        return false;
    }
    if ( r9 < 48 && r9 > 57){
        return false;
    }
    string Sunday ;
    string Monkey;
    string Yeah;
    Sunday = KeCuuRoiTriThuc.substr(0 , 2);
    Monkey = KeCuuRoiTriThuc.substr(3 , 2);
    Yeah = KeCuuRoiTriThuc.substr(6 , 4);
    int Day = stoi(Sunday);
    int Month = stoi(Monkey);
    int Year = stoi(Yeah);
    if ( Month >12 || Month == 0 || Year >2025 || Year < 1900 || Day >32 || Day < 0){
        return false;
    }
    if ( Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10 || Month == 12){
        if (Day >31 ){
            return 0;
        }
    }
    if ( Month == 4 || Month == 6 || Month == 9 || Month == 11){
        if ( Day >30 ){
            return false;
        }
    }
    if ( Month == 2){
        if ( Year % 4 == 0 || Year % 40 == 0 || Year % 400 == 0){
           if ( Day == 29 ){
            return true;
            }
           
         }else {
            if ( Day == 28 ){
            return true;
            }
            if ( Day == 29 ){
            return false;
         }
        }
        if ( Day > 29 || Day < 0){
            return false;
        }
       
    }
    return true;
}




bool CheckName( string a){
    stringstream Jingcha(a);
    string Jingcon;
    while( Jingcha >> Jingcon){
        for ( char Ktran : Jingcon){
            if (Ktran < 65 || (Ktran > 90 && Ktran < 97) || Ktran > 122){
                return false;
            }
        }
    }
    return true;
}


class StudentsManager {
    private :
    struct Student{
    string ID;
    string Name;
    string Birth;
    float GPA;
    Student( string i , string n , string b , float g ) : ID(i) , Name(n) , Birth(b) , GPA(g){}//y la nhap thong tin hoc sinh
    };
    struct Location{
    Student* STUDENTS;
    Location* NEXXXT;
    Location* PREVV;
    Location(Student* s ) : STUDENTS(s) , NEXXXT(nullptr) , PREVV(nullptr){}//con tro chi vao struct student || con tro next va prev o vi tri k xac dinh
    };
    Location* FT;
    Location* FN;
    public :
    StudentsManager() : FT(nullptr) , FN(nullptr){} //FT va Fn deu khong chi vao bat ky cho nao
    void Add_Students( string i , string n , string b , float g){
        Student* NewS = new Student(i,n,b,g);
        Location* NewL = new Location(NewS);
        if ( FT == nullptr){
            FT = FN = NewL;
        }else{
            FN->NEXXXT = NewL;
            NewL->PREVV = FN;
            FN = NewL;
        }
        cout << "Add Successful\n";
    }
    void Display(){
        cout << "=============Show Students List===========\n";
        if ( FT == nullptr){
            cout << "This List Is Empty\n";
        }
        Location* Cu = FT;
        while(Cu != nullptr){
            cout << endl;
            cout << "Student's ID : " << Cu->STUDENTS->ID << endl;
            cout << "Student's Name : " << Cu->STUDENTS->Name << endl;
            cout << "Student's Birth : " << Cu->STUDENTS->Birth << endl;
            cout << "Student's GPA : " << Cu->STUDENTS->GPA << endl;
            Cu = Cu->NEXXXT;
        }
        cout << "==========================================\n";
    }
    void Search( string id){
        
        if ( FT == nullptr){
            cout << "This List Is Empty\n";
        }
        Location* Cu = FT;
        while ( Cu != nullptr){
            if ( Cu->STUDENTS->ID == id){
                cout << "Student Found\n";
                cout << "Student's Name : " << Cu->STUDENTS->Name << endl;
                cout << "Student's ID : " << Cu->STUDENTS->ID << endl;
                cout << "Student's Birth : " << Cu->STUDENTS->Birth << endl;
                cout << "Student's GPA : " << Cu->STUDENTS->GPA << endl;
                return;
            }
            Cu = Cu->NEXXXT;
        }
        cout << "Couldn't Find Student\n";
        cout << "==========================================\n";
    }
    void Highest(){
        cout << "=========The Highest GPA's Students=======\n";
        if (FT == nullptr ){
            cout << "List Is Empty\n";
            return;
        }
        Location* MaxGPA = FT;
        Location* Cu = FT;
        while ( Cu!= nullptr ){
            if ( Cu->STUDENTS->GPA > MaxGPA->STUDENTS->GPA){
                MaxGPA =  Cu;
            }
            Cu = Cu->NEXXXT;
        }
        cout << "Max GPA In Data Is : " << MaxGPA->STUDENTS->GPA << endl;
        cout << "Belong To Student\n";
        cout << " -->Student's Name : " << MaxGPA->STUDENTS->Name << endl;
        cout << " -->Student's ID : " << MaxGPA->STUDENTS->ID << endl;
        cout << " -->Student's Birth : " << MaxGPA->STUDENTS->Birth << endl;
        cout << " -->Student's GPA : " << MaxGPA->STUDENTS->GPA << endl;
        cout << "=========================================\n";
    }
    
    void Lowest(){
        cout << "=========The Lowest GPA's Students========\n";
        if ( FT == nullptr){
            cout << "List Is Empty\n";
            return;
        }
        Location* Cu = FT;
        Location* MinGPA = FT;
        while ( Cu != nullptr){
            if ( Cu->STUDENTS->GPA < MinGPA->STUDENTS->GPA){
                MinGPA = Cu;
            }
            Cu = Cu->NEXXXT;
        }
        cout << "Lowest GPA In Data Is : " << MinGPA->STUDENTS->GPA << endl;
        cout << "Belong To Student :\n";
        cout << "-->Student's Name : " << MinGPA->STUDENTS->Name << endl;
        cout << "-->Student's ID : " << MinGPA->STUDENTS->ID << endl;
        cout << "-->Student's Birth : " << MinGPA->STUDENTS->Birth << endl;
        cout << "-->Student's GPA : " << MinGPA->STUDENTS->GPA << endl;
        cout << "=========================================\n";
    }
};


int main(){
    StudentsManager gg;
    int choice;
    string I , N , B ;
    float G;
    string test;
    string test1;
    do {
    cout << "__________MANAGE STUDENTS________________\n";
    cout << "1  Add Student\n";
    cout << "2  Show Students List\n";
    cout << "3  Find Student (According ID Students)\n";
    cout << "4  The Highest GPA's Students\n";
    cout << "5  The Lowest GPA's Students\n";
    cout << "6  Exit Program\n";
    cout << "Enter Ur Choice\n";
    cout << "_________________________________________\n";
    while (1) {
    getline(cin, test1);  

    stringstream SS1(test1);
    if (SS1 >> choice && SS1.eof()) {
        break;  
    } else {
        cout << "Enter Ur Choice Again!\n";  
    }
}
    if ( choice == 1){
        cout << "================Add Student ===============\n";
            
            
            while(true){
            cout << "Enter Ur ID        /help For More Information\n ";
            getline(cin , I );
            if ( Check_Guide(I)){
                Guide();
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max() , '\n');
                cout << "================Add Student ===============\n";
                }else {
                    break;
                }
            }
            cout << "Enter Ur Name      /help For More Information\n";
            while(1){
                
                getline(cin , N);
                if ( Check_Guide(N) == true ){
                    Guide();
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max() , '\n');
                }
                if ( CheckName(N) == 0){
                    cout << "Enter Ur Name Again!       /help For More Information\n";
                } else {
                    break;
                }
            }

            cout << "Enter Ur Birth     /help For More Information\n";  
            while ( 1){
                 
                 getline(cin , B);
                 if ( Check_Guide(B) == true){
                    Guide();
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>:: max() , '\n');
                 }
                 char r1 = B[2];
                 if ( r1 == 47 ){
                    Standardised_Time(B);
                 }else{
                    Standardised_Time_V2(B);
                 }
                 if ( CheckDate(B) == 0){
                    cout << "Enter Ur Birth Again!      /help For More Information\n";
                 }else{
                    break;
                 }
            }


            cout << "Enter Ur GPA       /help For More Information\n";
            while(1){
                getline( cin , test);
                stringstream SS(test);
                if ( Check_Guide(test)){
                    Guide();
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>:: max() , '\n');
                }
                if(SS.fail() || !(SS >> G)){
                    cout << "Enter Ur GPA Again!        /help For More Information\n";
                    
                    continue; 
                }
                if( Check_GPA(G) == 1){
                    break;
                }else{
                    cout << "Enter Ur GPA Again!        /help For More Information\n";
                }
            }
            
            gg.Add_Students(  I , N ,  B , G);
            cout << "==========================================\n";


    } else if ( choice == 2){
        gg.Display();
    } else if ( choice == 3){
        cout << "==============Find Student================\n";
        cout << "ID Wanna Find\n";
        cin.ignore();
        getline(cin , I);
        gg.Search(I);
    }else if ( choice == 4){
        gg.Highest();
    }else if ( choice == 5){
        gg.Lowest();
    }else if ( choice == 6){
        cout << "=============Members Of Team===============\n";
        cout << "-->Chu Dinh Huy(Leader) - 24110233\n";
        cout << "-->Ma Duc Duy(Member) - 24110220\n";
        cout << "-->Pham Quang Huy(Member) - 24110237\n";
        cout << "-->Nguyen Huy Anh(Member) - 24110203\n";
        cout << "===========================================\n";
        break;//1260
    } else if ( choice >=7){
        cout << "INVALID CHOICE. PLS TRY AGAIN!\n";
    }
    } while ( choice != 6);
    return 0;
}































































































































































































































































































































































































































































































































































































































































































































































//khong ai ngo toi o dong nay co cai nay dau nhi :D
//hmm tong hop moi thu ma nguoi viet code trai qua ti nhe
//coi nhu la quang cao ti vay
//Cu->NEXXXT = 2057;
//Cu->PREVV = 521;



























































































































































































































































































































































































































































































































































































































































































































































































































// Big Secret XD
//https://docs.google.com/document/d/1ELy34_QQeGP8mqGZKbYyTzuG7CWcDbkcUJdYdAJx35o/edit?tab=t.0
























































































































































































































//so dep ghe ._-