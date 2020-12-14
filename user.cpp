#include "user.h"

User::User() : id(0), Intensity(0), Name(""), Login("") {
}


User::~User() {}

void User::SetId(int i) {
    id = i;
}
void User::SetIntensity(int i) {
    Intensity = i;
}
void User::SetName(QString n) {
    Name = n;
}
void User::SetLogin(QString l) {
    Login = l;
}

int User::GetId() {
    return id;
}
int User::GetIntensity() {
    return Intensity;
}
QString User::GetName() {
    return Name;
}
QString User::GetLogin() {
    return Login;
}
