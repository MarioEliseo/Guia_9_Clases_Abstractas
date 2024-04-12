#include <iostream>
#include "OSWindows.h"
#include "OSLinux.h"
#include "OSOSx.h"
using namespace std;

int main()
{
    int opc = 0;

    do{
        system("cls");
        cout << "**********************\n";
        cout << "* MENU DE OPCIONES *\n";
        cout << "**********************\n";
        cout << "1.WINDOWS\n";
        cout << "2.LINUX\n";
        cout << "3.OSX\n";
        cout << "4.SALIR\n";
        cout <<  "DIGITE UNA OPCION: ";
        cin >> opc;
        switch (opc){
        case 1:{
            //Creampos una skin tipo windows
            cout << "\n";
            OSWindows _win;
            _win.PintarWindow();
            cout << "\n";
            break;
        }
        case 2:{
            //Creampos una skin tipo Linux
            cout << "\n";
            OSLinux _lin;
            _lin.PintarLinux();
            cout << "\n";
            break;
        }
        case 3:{
            //Creampos una skin tipo Osx
            cout << "\n";
            OSOSx _os;
            _os.PintarOsx();
            cout << "\n";
            break;
        }
        case 4:
            cout << "\n";
            cout << "Saliendo del programa\n";
            break;
        default:
            cout << "\n";
            cout << "Error, opcion no definida\n";
            break;
        }
        system("pause");
    }while (opc!=4);
    return 0;
}
 /*   //Creampos una skin tipo windows
    OSWindows _win;
    _win.PintarWindow();

    cout << "\n";
    cout << "\n";
    //Creampos una skin tipo Linux
    OSLinux _lin;
    _lin.PintarLinux();

    cout << "\n";
    cout << "\n";
    //Creampos una skin tipo Osx
    OSOSx _os;
    _os.PintarOsx();
    return 0;
}*/
