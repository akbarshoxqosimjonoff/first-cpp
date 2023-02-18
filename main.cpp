#include <iostream>

using namespace std;
int main() {


//    int a;
//    cout << "a ";
//    cin >> a;
//
//    if (a > 9999 && a < 10000 && a % 2);
//
//
//    cout << a << "soni juft  son" << endl;
//} else {
//cout << "notog'ri son kiritilgan" <<
//endl;
//    }
//{




//    int a;
//    int b;
//    cout << "a ";
//    cin >> a;
//   b = (a > 0 ) ? a : 1;
//   ( a > 0) ? cout << "musbat" << endl : cout << "manfiy" << endl;
//

//    int a;
//
//    cout << "a "; cin >> a;
//    int b;
//    b = ( a > 0) ? a : 1;
//            cout << "b = " <<b<< endl ;

//1

//double maxnum;
//int a , b, c;
//cout << " a "; cin>> a;
//cout << " b "; cin>> b;
//cout << " c "; cin>> c;
//
//if ( a > b && a > c ){
// maxnum = a;
//
//}else if ( b > a && b > c ){
//    maxnum = b;
//
//}
//else {
//    maxnum = c;
//}
//cout << "maxnum  " <<maxnum;
//}



//
//

//2

//        int a,b,c;
//
//        cout<<"a = "; cin>>a;
//        cout<<"b = "; cin>>b;
//        cout<<"c = "; cin>>c;
//
//        if(a<b && b<c){
//            cout<<a<<"<"<<b<<"<"<<c<<endl;
//        }else if(a<c && c<b){
//            cout<<a<<"<"<<c<<"<"<<b<<endl;
//        }else if(b<a && a<c){
//            cout<<b<<"<"<<a<<"<"<<c<<endl;
//        }else if(b<c && c<a){
//            cout<<b<<"<"<<c<<"<"<<a<<endl;
//        }else if(c<a && a<b){
//            cout<<c<<"<"<<a<<"<"<<b<<endl;
//        }else{
//            cout<<c<<"<"<<b<<"<"<<a<<endl;
//        }
//        cout<<endl;
//
//        {
//
//        }

//3

//int a;
//cout << " the number  (( -999) - 999) = ";  cin >>a;
//if (a > 99 && a <1000){
//    cout << "number" << a << "is three digits and positive "<<endl;
//}else if ( a > - 1000 && a < -99){
//    cout << "number" << a << "is three digits and negative "<<endl;
//}else if ( a > 9 && a < 100) {
//    cout << "number" << a << "is two digits and positive "<<endl;
//}else if ( a > -100 && a < -9){
//    cout << "number" << a << "is two digits and negative "<<endl;
//}else if ( a > 0 && a < 10){
//    cout << "number" << a << "is single digits and positive "<<endl;
//}else if ( a > -10 && a < 0) {
//    cout << "number" << a << "is single digits and negative " << endl;
//}else {
//    cout << "number " << a << "is equal to the zero " << endl;
//}

//4
//int num ;
//    cout << "Enter the number (1 - 9999) = "; cin >> num;
//    if ( (num > 999 && num < 10000) && (num % 2 == 0)){
//        cout << "The"<< num <<"is four digits and even number" <<endl;
//    }else if ( (num > 999 && num < 10000) && (num % 2 == 1))  {
//    cout << "The" << num << " is four digits and odd number"<<endl;
//}else if ( (num > 99 && num < 1000) && (num % 2 == 0)) {
//cout << "The " << num <<" is four digits and odd number" <<endl;
//}else if ( (num > 99 && num < 1000) && (num % 2 == 1)) {
//        cout << "The " << num << " is three digits and even number" << endl;
//    }else if (( num > 9 &&  num < 100) && (num % 2 == 0)) {
//        cout << "The " << num <<"is two digits and even number " <<endl;
//    }else if ((num > 9 && num < 100) && (num % 2 == 1)){
//            cout << "The " << num << " is three digits and even number" << endl;
//    }else if ( (num > 0 && num < 10) && (num % 2 == 0)) {
//        cout << "The " << num << " is single digit and even number"<< endl;
//}else if ( (num > 0  && num < 10) && (num % 2 == 1)) {
//cout << "The" << num << " is single digit and odd number" << endl;
//    }else {
//        cout << "The " << num << "is equal to the zero " <<endl;
//    }

//5

//int Yil;
//cout << "Ixtiyoriy yilni kiriting : ";
//cin >> Yil;
//if (Yil % 4 == 0) {
//    if (Yil % 100 == 0) {
//        if (Yil % 400 == 0) {
//            cout << "Siz kiritgan yil kabisa yili ! " << endl;
//        }else {
//            cout << "Siz kiritgan yil kabisa yili emas ! " << endl;
//        }
//    }else{
//        cout << "Siz kiritgan yil kabisa yili ! " << endl;
//    }
//}else{
//    cout << "Siz kiritgan yil kabisa yili emas ! " << endl;
//}


//6

//int assessment ; cin>> assessment;
//    cout << "Enter the overall score = ";
//    if (assessment >= 0 && assessment <= 55) ;
//    cout << assessment << "is 2 unsatisfied score!" << endl;
//}else if{ (assessment <= 70 && assessment >= 56) {
//cout << assessment << " is 3 satisfied score!"<<endl;
//}else if{ (assessment >= 71 && assessment <= 85)
//cout << assessment << "is 4 good score!" << endl;
//}else if{ (assessment >= 86 && assessment <= 100) (
//cout << assessment << "is 5 excellent score!" << endl:
//}else
//cout << "Wrong overall score!" << endl;
//
//}

//7

//    int n, bir, yuz;
//    cout << "son kiriting : "; cin >> n;
//    bir = n % 10;
//    yuz = n / 100;
//    if(bir == yuz){
//        cout << "palindrom " <<endl;
//    }else{
//        cout << "palindrom emas"<<endl;
//    }

//8
//    int num;
//    int n1, n10, n100;
//    cout << "Enter the number = "; cin > num;
//    n1 = num % 10;
//    n10 = num / 10 % 10;
//    n100 = num / 100;
//    if (n100 < n10 && n10 < n1) {
//        cout << "The " << num << "is located as a grower!" << endl;
//    }else if (n100 > n10 &&  n10 > n1){
//        cout << "The"<< num << " is located as a lower!" << endl;
//}else{
//cout << "The" << num << " is located as a different!" << endl;

//9
//    int a, b, c;
//    cout << "Enter A = " ; cin >>a;
//    cout << "Enter B = ";cin >>b;
//    cout << "Enter C =";;cin >>c;
//    if (a == b && b == c); {
//
//        cout << "Three numbers are equal with each other!" << endl;
//        {else if (a == b || b == c || a == c) {
//        cout << "Two numbers are equal with each other!" << endl:
//    }else{
// cout << "None numbers are equal with each other!" << endl;
//        }
//  }
//

//10

//int k;
//double d;
//cout << "Mashinada qolgan zaryad miqdorini kiriting k : ";
//cin >>k;
//cout << "Mashinada borish kerak bo'lgan masofa (km) : ";
//cin>> d;
//if (k * 2.5 >= d) {
//    cout << "Mashina maznzilga yetib bora oladi ! " <<endl;
//}else{
//    cout << "Mashina maznzilga yetib bora olmaydi ! " <<endl;
//    cout << "Mashina manzilga yetib borishi uchun unga " << (d - k * 2.5) / 2.5<< endl;
//}

//11

//int k;
//double d;
//cout << "Jarima miqdorini kiriting  k : ";
//cin >> k;
//cout << "Kunni kiriting " ;
//cin >> d;
//    if (k / 10 >= d) {
//
//        cout << "10% kamroq to'lo'v qiladi ! " << endl;
//    }else {
//        cout << " 10% ortiq to'lo'v qiladi ! " << endl;
//
//    }

//12
//int a;
//cout << "Xona xaroratini kiriting  a : ";
//cin >> a;
//if ( a > 25 ){
//    cout << "Oynalar ochilsin ! "<<endl;
//
//}else {
//    cout << "Oynalar yopilsin ! "<<endl;
//}


//13
//    string action;
//    cout << "Enter the action! "; cin >> action;
//    if( action == "red" )
//        cout << "Stop the car!" << endl;
//}else if ( action =="yellow" ){
//cout << "Get ready to move!" << endl;
//}else if( action == "green" ){
//        cout << "Go! " << endl;
//}else{
//cout << "Wrong action!" < endl:

//14

//    int a, b,c;
//    cout << "Enter a" ;
//    cin >> a;
//    cout << "Enter b";
//    cin >> b;
//    cout << "Enter c";
//    cin >> c;
//    if (a > b && a > c ){
//    cout << "Max number"  << a << endl;
//}else if(b > a && b > c){
//cout << "Max number" << b << endl;
//}else
//cout << "Max number: " << c << endl;
//
//    if (a < b && a < c){
//        cout << "Min number: " << a << endl;
//}else if (b < a && b < c){
//        cout << "Min number: " << b << endl;
//}else
//cout << "Min number: " << c<<endl;

// 15
//  double IshchiningOyligi, EngKamIshXaqqi;
//  cout << "Ishchining oylik maoshini kiriting : ";
//  cin >> IshchiningOyligi;
//
//  cout << "Eng kam ish xaqqi miqdorini kiriting : ";
//  cin >> EngKamIshXaqqi;
//  if (IshchiningOyligi <= 5 * EngKamIshXaqqi){
//      cout << "Ishchining daromad solig'i : "<< IshchiningOyligi * 0.9<<endl;
//
//  }
//else if (IshchiningOyligi> 5 * EngKamIshXaqqi && IshchiningOyligi <= 10 * EngKamIshXaqqi){
//    cout << "Ishchining daromad solig'i: " << IshchiningOyligi * 16 << endl;
//
//}
//else if (IshchiningOyligi > 10 * EngKamIshXaqqi){
//    cout << "Ishchining daromad solig'i : "<<IshchiningOyligi * 0.23 <<endl;
//
//}
//else{
//    cout << "Bunday oylik maoshli ishchi mavjud emas ! "<<endl;
//}
//

//16

//    int num;
//    cout << "Enter the tel number of services = "; cin >> num;
//    if ( num == 101) {
//    cout << "Fire service!" << endl;
//    }else if (num == 102) {
//        cout << "Police service!" << endl;
//    }else if (num == 103) {
//        cout << "Emergency medical service!" << endl;
//    }else if ( num == 104) {
//        cout << "Gas assistance service!" << endl;
//    }else{
//        cout << "No such services number! " << endl;

//17

//string passwordEnd;
//string password = "Aziz20";
//
//cout << "Passwordni kiriting: ";
//cin >> passwordEnd ;
//
//if (password == passwordEnd){
//    cout << "Assalomu alaykum Azizbek, Xush kelibsiz "<<endl;
//}
//else{
//    cout<< "Siz xato passwordni kiritidingiz "<<endl;
//}


//18
//    int a, b, c;
//
//    cout << " a = "; cin >> a;
//    cout << " b = "; cin >> b;
//    cout << " c = "; cin >> c;
//
//    cout << endl;
//
//    if(a != b && b != c && c != a) cout << " natija :  0" ;
//    if(a == b && b != c && c == b && a != c && a == c && b != a) cout << " natija :  10";
//    if(a == b && b == c ) cout << " natija :  20";
//
//    cout << endl;
//    cout << endl;
//    cout << endl;

//19

//    double charge;
//    cout << "Enter the charge = "; cin >> charge;
//    if (charge <= 20) {
//            cout << "The car should be charged!" << endl;
//    }else if ( charge >= 21 && charge <= 40) {
//            cout << "There is less charge in the car!" << endl;
//}else if ( charge >= 41 && charge <= 100) {
//cout << "There is enough charge in the car!" << endl;


//20


//    int N;
//    cout << "sonni kiriting:";
//    cin >> N;
//    int r1 = N % 10;
//    int r10 = N / 10;
//
//    if (N < 100 && N > 0) {
//        if (r10 == 1) { cout << "o'n  "; }
//        if (r1 == 1) { cout << "bir  "; }
//        else if (r1 == 2) { cout << "ikki  "; }
//        else if (r1 == 3) { cout << "uch "; }
//        else if (r1 == 4) { cout << "to'rt  "; }
//        else if (r1 == 5) { cout << "besh "; }
//        else if (r1 == 6) { cout << "olti  "; }
//        else if (r1 == 7) { cout << "yetti  "; }
//        else if (r1 == 8) { cout << "sakkiz  "; }
//        else if (r1 == 9) { cout << "to'qqiz "; }
//    } else {
//    }

    return 0;
}