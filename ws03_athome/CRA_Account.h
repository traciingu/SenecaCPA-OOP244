#ifndef _CRA_H_
#define _CRA_H_


namespace sict
{
    const int max_name_length = 41;
    const int min_sin = 100000000;
    const int max_sin = 999999999;
    const int max_yrs = 4;

    class CRA_Account {
    private:
        char famName[max_name_length];
        char acctName[max_name_length];
        int sinNum;
        int taxReturnYrs[max_yrs] = { 0 };
        float yearlyBalance[max_yrs];

    public:
        void set(const char* familyName, const char* givenName, int sin);
        void set(int year, double balance);
        bool isEmpty() const;
        void display() const;
    };


};



#endif