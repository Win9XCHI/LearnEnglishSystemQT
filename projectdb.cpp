#include "projectdb.h"

ProjectDB::ProjectDB(QString str) : DB(str) {
}

ProjectDB::ProjectDB() : DB() {
}


User ProjectDB::GetUser() {
    QSqlRecord rec = query.record();
    User object;

    query.next();
    object.SetId(query.value(rec.indexOf("ID")).toString().toInt());
    object.SetIntensity(query.value(rec.indexOf("Intensity")).toString().toInt());
    object.SetName(query.value(rec.indexOf("Name")).toString());
    object.SetLogin(query.value(rec.indexOf("Login")).toString());

    return object;
}
