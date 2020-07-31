#include<iostream>
#include<stdlib.h>
#include<windows.h>


using namespace std;

void shutdown(){
    system("cls");
    cout<<"Shutting Down...."<<endl;
    system("C:\\Windows\\System32\\shutdown /s");
    

}

void restart(){
    system("cls");
    cout<<"Restarting in 30s......"<<endl;
    system("C:\\Windows\\System32\\shutdown /r");
   
    
}

void logoff(){
    system("cls");
    system("C:\\Windows\\System32\\shutdown /l");
   

    
}

void manual_shutdown(){
    system("cls");
    system("C:\\Windows\\System32\\shutdown /i");
    


}

void abort_shutdown(){
    system("cls");
    system("C:\\Windows\\System32\\shutdown /a");
    


}

void ipconfig(){
    system("cls");
    system("C:\\Windows\\System32\\IPCONFIG");
    system("pause");
  
  

    
}

void tasklist(){
    system("cls");
    system("C:\\Windows\\System32\\tasklist");
    system("pause");
    


}

void system_info(){
    system("cls");
    system("C:\\Windows\\System32\\SYSTEMINFO");
    system("pause");
   


}






void Menu(){
    system("color 1F");
    cout<<"                            \xB2\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ||SYSTEM CONTROL|| \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \xB2\xB2"<<endl;
    cout<<"\n \t\t\t    _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ "<<endl;
    cout<<" \t\t\t   |                                                             |  "<<endl;

    cout<<"\n \t\t\t   |                         ENTER CHOICE\t\t\t | "<<endl;
    cout<<"\n \t\t\t   |                         1. SHUTDOWN\t\t\t | "<<endl;
    cout<<"\n \t\t\t   |                         2. LOG OFF\t\t\t\t | "<<endl;
    cout<<"\n \t\t\t   |                         3. RESTART\t\t\t\t | "<<endl;
    cout<<"\n \t\t\t   |                         4. MANUAL SHUTDOWN\t\t\t | "<<endl;
    cout<<"\n \t\t\t   |                         5. ABORT SHUTDOWN\t\t\t | "<<endl;
    cout<<"\n \t\t\t   |                         6. IPCONFIG: IP configuration\t | "<<endl;
    cout<<"\n \t\t\t   |                         7. TASKLIST\t\t\t | "<<endl;
    cout<<"\n \t\t\t   |                         8. SYSTEMINFO: System Information\t | "<<endl;
   
    cout<<"\n \t\t\t   |                         9. EXIT\t\t\t\t | "<<endl;
    cout<<"\n \t\t\t   | _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ | "<<endl;

    int choice;
   
    cout<<"\n\t\t\t\t               Enter Your Choice: "<<endl;
    cout<<"\t\t\t\t\t\t->    ";
    cin>>choice;
    
    switch(choice){
        case 1:
                shutdown();
                break;
        case 2:
                logoff();
                break;
        case 3:
                restart();
                break;
        case 4:
                manual_shutdown();
                break;
        case 5:
                abort_shutdown();
                break;
        case 6:
                ipconfig();
                break;

        case 7:
                tasklist();
                break;

        case 8:
                system_info();
                break;

       

        case 9:
                exit(0);
                break;
        default:
                system("cls");
                cout<<"Wrong Input !!"<<endl;
                cout<<"Exiting in 3s...."<<endl;
                Sleep(3000);
                exit(0);
                


        
        
    }
}

int main(){

    Menu();
    
    return 0;
}









    
    
    
    
    
    
    
    
    
    
    
   
   
   
