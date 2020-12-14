#ifndef USER_H
#define USER_H

#include <QString>

class User {

    int id;
    int Intensity;
    QString Name;
    QString Login;

public:
    User();
    ~User();

    void SetId(int);
    void SetIntensity(int);
    void SetName(QString);
    void SetLogin(QString);

    int GetId();
    int GetIntensity();
    QString GetName();
    QString GetLogin();
};

#endif // USER_H
