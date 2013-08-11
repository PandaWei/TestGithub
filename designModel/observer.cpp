#include <iostream>

using namespace std;

const int OBS_MAXNUM = 20;

class OfficeDoc;

class DocExplorer {
    public:
        DocExplorer(OfficeDoc *doc);
        virtual void update(OfficeDoc *doc);
};

class OfficeDoc {
    private:
        DocExplorer* myObs[OBS_MAXNUM];
        int index;
    
    public:
        OfficeDoc() {
            cout<<"Init the OfficDoc..."<<endl;
            index = 0;
        }
        
        void attach(DocExplorer *o) {
            if(index >= OBS_MAXNUM || o == NULL) return;
            for(int loop = 0; loop < index; loop++)
                if(myObs[loop] == o) return;
            myObs[index] = o;
            index++;
            cout<<"Attach DocExplorer..."<<endl;
        }

        void detach() {
            for(int loop = 0; loop < OBS_MAXNUM; loop++)
            {
                if(myObs[loop] != NULL) {
                    myObs[loop] = NULL;
                    index--;
                    cout<<"Detach DocExplorer..."<<hex<<myObs[loop]<<endl;
                }
            }
        }

    private:
        //通知所有的观察者
        void notifyObs() {
            for(int loop = 0; loop < index; loop++) 
            {
                myObs[loop]->update(this);
                cout<<"Notify DocExplorer ...:"<<hex<<this<<endl;
            }
        }
};

DocExplorer::DocExplorer(OfficeDoc *doc) {
    cout<<"New DocExplorer ...:"<<hex<<this<<endl;
    doc->attach(this);
}

void DocExplorer::update(OfficeDoc *doc) {

}

int main() {
    OfficeDoc* doc_p = NULL;
    doc_p = new OfficeDoc();
    
    DocExplorer* DE_p[5];
    for(int i = 0; i < 5; i++ )
    {
        DE_p[i] = new DocExplorer(doc_p);
        cout<<"New DE_p[i] ...:"<<hex<<delete<<endl;
    }
  
    for(int i = 0; i < 5; i++)
    {
        cout<<DE_p<<hex<<i<<":"<<hex<<"DE_p[i]"<<endl;
    } 
    
    doc_p->detach(); 
   
    for(int i = 0; i < 5; i++ )
    {
        delete DE_p[i];
        cout<<"Delete DE_p[i]...:"<<hex<<delete<<endl;
    }
  
    return 0;
}
