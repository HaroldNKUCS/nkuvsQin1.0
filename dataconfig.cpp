#include "dataconfig.h"
#include <QDebug>
dataConfig::dataConfig(QObject *parent) : QObject(parent)
{

     int array1[4][4] = {{1, 1, 1, 1},
                        {1, 1, 0, 1},
                        {1, 0, 0, 0},
                        {1, 1, 0, 1} } ;

     QVector< QVector<int>> v;
     for(int i = 0 ; i < 4;i++)
     {
         QVector<int>v1;
         for(int j = 0 ; j < 4;j++)
         {

            v1.push_back(array1[i][j]);
         }
         v.push_back(v1);
     }

     mData.insert(1,v);





     //测试数据
//    for( QMap<int, QVector< QVector<int> > >::iterator it = mData.begin();it != mData.end();it++ )
//    {
//         for(QVector< QVector<int> >::iterator it2 = (*it).begin(); it2!= (*it).end();it2++)
//         {
//            for(QVector<int>::iterator it3 = (*it2).begin(); it3 != (*it2).end(); it3++ )
//            {
//                qDebug() << *it3 ;
//            }
//         }
//         qDebug() << endl;
//    }


}
