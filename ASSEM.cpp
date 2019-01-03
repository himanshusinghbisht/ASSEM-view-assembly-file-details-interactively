#include<iostream>
#define endl "\n"
using namespace std;

int main(int argc,char*argv[])
{

system("clear");
cout << endl<<endl<<endl;
cout << "\t\t    _    ____ ____  _____ __  __ \n";
cout << "\t\t   / \\  / ___/ ___|| ____|  \\/  |\n";
cout << "\t\t  / _ \\ \\___ \\___ \\|  _| | |\\/| |\n";
cout << "\t\t / ___ \\ ___) |__) | |___| |  | |\n";
cout << "\t\t/_/   \\_\\____/____/|_____|_|  |_|\n";
                                 

cout << "\n\n\nWELCOME TO ASSEM\n\n \n";
cout << "ASSEM is used to view the assembly code of any object file( ex - .out ) \n\n\n";
int choice;


char ch;
do
{

cout << " 1 > display archive header information\n";
cout << " 2 > Display the contents of the overall file header\n";
cout << " 3 > Display object format specific file header contents \n";
cout << " 4 > Display object format specific contents \n";
cout << " 5 > Display the contents of the section headers\n";
cout << " 6 > Display the contents of all headers\n";
cout << " 7 > Display assembler contents of executable sections \n";
cout << " 8 > Display assembler contents of all sections \n";
cout << " 9 > Intermix source code with disassembly\n";
cout << "10 > Display the full contents of all sections requested\n";
cout << "11 > Intermix 	SC and ASSEMBLER contents of executable sections\n";
cout << "12 > Display debug information in object file\n";
cout << "13 > Display debug information using ctags style\n";
cout << "14 > Display the contents of the symbol tables\n";
cout << "15 > Display the contents of dynamic symbol table\n";
cout << "16 > Display the relocation entries in the file\n";
cout << "17 > List object formats and architectures supported\n";
cout << "\n\nENTER YOUR CHOCICE \t";
cin >> choice;

cout << endl << endl << "output - " << endl << endl << endl << endl;
switch(choice)
{

case 1:
system("objdump -a $file");
break;

case 2:
system("objdump -f $file");
break;

case 3:
system("objdump -p $file");
break;

case 4:
system("objdump -P $file");
break;

case 5:
system("objdump -h $file");
break;

case 6:
system("objdump -x $file");
break;

case 7:
system("objdump -d $file");
break;

case 8:
system("objdump -D $file");
break;

case 9:
system("objdump -S $file");
break;

case 10:
system("objdump -s $file");
break;
case 11:
system("objdump -d -s $file");
break;

case 12:
system("objdump -g $file");
  break;
case 13:
system("objdump -e $file");
break;
case 14:
system("objdump -t $file");
break;
case 15:
system("objdump -T $file");
break;
case 16:
system("objdump -r $file");
break;
case 17:
system("objdump -i  $file");
break;
}
cout << "\n\nDo you want to continue ? y/n\n";
cin >> ch;
system("clear");
}while(ch!='n');
return 0;
}
