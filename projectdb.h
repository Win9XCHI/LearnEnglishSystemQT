#ifndef PROJECTDB_H
#define PROJECTDB_H

#include <QtSql>
#include <QDebug>
#include "db.h"
#include "user.h"

class ProjectDB : public DB {

public:
    ProjectDB(QString);
    ProjectDB();
    virtual ~ProjectDB() {}

    User GetUser();
};

#endif // PROJECTBD_H
