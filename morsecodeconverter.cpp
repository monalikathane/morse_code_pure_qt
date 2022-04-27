#include "morsecodeconverter.h"
#include <vector>
#include <iterator>
#include <sstream>
#include <algorithm>
#include <QDebug>


QString MorseCodeConverter::CodeToText(const QString &_code) {

}

QString MorseCodeConverter::TextToCode(QString &text) {
    QString coded{ "" };
    qDebug()<<"infunction";

    text = text.toUpper();
        for(int i = 0; i< text.length(); i++)
        {
         //   qDebug()<<text.at(i);
          // if(morseCodes.contains(text.at(i)))
           {
               QChar b =text.at(i) ;
               QString morsecode = morseCodes.key(b);
           //    qDebug()<<morsecode;
               coded.append(morsecode + ' ');
           }
        }
    return coded;
}
