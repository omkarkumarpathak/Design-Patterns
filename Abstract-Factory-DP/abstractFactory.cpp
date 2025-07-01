#include<iostream>
using namespace std;


class IButton{

    public:
        virtual void press()=0;
};

class ITextBox{

    public:
        virtual void show()=0;

};

class MacButton: public IButton{
    public:
     void press(){
        cout<<"Mac Button Pressed";
     }
};


class WinButton: public IButton{
    public:
     void press(){
        cout<<"Window Button Pressed";
     }
};

class MacTextBox:public ITextBox{
    public:
     void show(){
        cout<<" Showing Mac TextBox Pressed";
     }
};


class WinTextBox: public ITextBox{
    public:
     void show(){
        cout<<"Showing Window TextBox Pressed";
     }
};

class IFactory{

    public:

        virtual IButton* CreateButton()=0;
        virtual ITextBox* CreateTextBox()=0;

};

class MacFactory:public IFactory{
    public:

        IButton* CreateButton(){
            return new MacButton();
        }

        ITextBox* CreateTextBox(){
            return new MacTextBox();
        }

};

class WinFactory:public IFactory{
    public:

        IButton* CreateButton(){
            return new WinButton();
        }
        ITextBox* CreateTextBox(){
            return new WinTextBox();
        }

};

class GUIAbstractFactory{
    public:
        static IFactory* CreateFactory(string osType){
            if(osType=="win"){
                return new WinFactory();
            }
            else if(osType=="mac"){
                return new MacFactory();
            }

            return new MacFactory();

        }
};
int main(){

    cout<<"Entered you machine OS"<<endl;

    string osType; cin>>osType;

    IFactory* fact= GUIAbstractFactory::CreateFactory(osType);

    IButton* button= fact->CreateButton();
    button->press();

    ITextBox* textBox=fact->CreateTextBox();
    textBox->show();

    return 0;

}