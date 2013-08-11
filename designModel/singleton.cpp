#include <iostream>

using namespace std;

class Configure {

    protected:
        Configure() {};
    public:
        static Configure* Instance();  //singleton Model 创建函数
        int GetConfigureData() { return data;}
        int SetConfigureData(int m_data) {
            data = m_data;
            return data;
        }
    private:
        static Configure* _instance;  //singleton
        int data;
};

Configure* Configure::_instance = NULL;

Configure* Configure::Instance() {

    if(_instance == NULL) {
        _instance = new Configure();
    }

    return _instance;
}

int main()
{
    Configure* t = NULL;
    t = Configure::Instance();

    t->SetConfigureData(5);
    int d = t->GetConfigureData();
    
    cout<<dec<<d<<endl;
    
    return 0;
}
