#include <mysql.h>
#include <iostream>
#include <stdio.h>
#include <cstring>
#include "CwbMysql.h"
#include "Msg.h"

int main()
{
    CwbMysql temp;
    LogMsg CurLog;
    CurLog.Id=0;
    memcpy(&CurLog.PassWord,"0",sizeof("0"));
    printf("%d",temp.CwbSqlQuery(CurLog));
    return 0;
}