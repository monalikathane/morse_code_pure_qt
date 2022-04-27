#include <QCoreApplication>
#include "morsecodeconverter.h"
#include <QTextStream>
#include <QDebug>

QTextStream cout(stdout);
QTextStream cin(stdin);
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
MorseCodeConverter converter ;
QString name;
// std::string morsecode{ ".... . ._.. ._.. ___ _._.__" };
//qDebug("Enter the data to be encoded  \n");
cout<<"Enter the data to be encoded  \n"<< flush;
name = cin.readLine();

 cout <<"Enter data:\t"<<name<< flush;
 cout << "\n\n"<< flush;
 QString coded = converter.TextToCode(name);
 cout << "text:\t\t" << name << "\nmorsecoded:\t" << coded<< flush;
 cout << '\n'<< flush;
    return a.exec();
}
