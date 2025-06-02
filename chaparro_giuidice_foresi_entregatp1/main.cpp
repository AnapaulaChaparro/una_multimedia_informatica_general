#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int main() {

    bool menu = true;
    int opcion, intento;
    int clave = 222;
    int vidas = 3;


    //MENU

    while (menu) {
        cout << R"( 
          ██╗   ██╗ █████╗ ██╗     ██╗     ███████╗    ██████╗ ███████╗    ██████╗ ███████╗██╗   ██╗███████╗███████╗
          ██║   ██║██╔══██╗██║     ██║     ██╔════╝    ██╔══██╗██╔════╝    ██╔══██╗██╔════╝╚██╗ ██╔╝██╔════╝██╔════╝
          ██║   ██║███████║██║     ██║     █████╗      ██║  ██║█████╗      ██████╔╝█████╗   ╚████╔╝ █████╗  ███████╗
          ╚██╗ ██╔╝██╔══██║██║     ██║     ██╔══╝      ██║  ██║██╔══╝      ██╔══██╗██╔══╝    ╚██╔╝  ██╔══╝  ╚════██║
           ╚████╔╝ ██║  ██║███████╗███████╗███████╗    ██████╔╝███████╗    ██║  ██║███████╗   ██║   ███████╗███████║
            ╚═══╝  ╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝    ╚═════╝ ╚══════╝    ╚═╝  ╚═╝╚══════╝   ╚═╝   ╚══════╝╚══════╝
            )";
        cout << "\n1. Iniciar Aventura\n"
             << "2. Créditos\n"
             << "3. Tutorial\n"
             << "4. Salir\n"
             << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {

            case 1: {

                bool continuar = true;
                system("clear");
                cout << "En el legendario Valle de los Reyes, donde los faraones descansan entre cámaras ocultas y jeroglíficos olvidados,\n"
                     << "un antiguo secreto ha salido a la luz. Documentos descubiertos en una excavación clandestina revelan la existencia de una cripta sellada hace más de tres mil años.\n"
                     << "Allí, según la leyenda, se esconde el Corazón de Ra, una reliquia sagrada capaz de otorgar poder absoluto sobre la vida y la muerte. Muchos han intentado encontrarla.\n"
                     <<R"(
                                            
                         ░░░░░░░░░             ░░░░░░░░                         
                       ░░░░░░░░░░░░          ░░░░░░░░░░░░                       
                     ░░░░ΩΩΩΩΩΩΩΩΩΩ░░      ░░ΩΩΩΩΩΩΩΩΩΩ░░░                      
                    ░░░ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ░░  ░░ΩΩΩΩΩΩΩΩΩΩΩΩΩ░░░                     
                   ░░░░ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ░░ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ░░░░                    
                   ░░░░ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ░░░░                    
                   ░░░░ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ░░░░                    
                    ░░░░ΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣ░░░░                     
                     ░░░░ΣΣΣΣΣΣΣΣΣΣΣΣΣ222ΣΣΣΣΣΣΣΣΣΣΣΣΣ░░░░                      
                      ░░░░ΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣ░░░░                       
                       ░░░░░ΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣ░░░░░                        
                         ░░░░µµµµµµµµµµµµµµµµµµµµ░░░░░                          
                          ░░░░µµµµµµµµµµµµµµµµµµ░░░░                            
                            ░░░µµµµµµµµµµµµµµµµµ░░░                             
                             ░░░░µµµµµµµµµµµµµ░░░░                              
                               ░░░░░ßßßßßßßß░░░░░                               
                                ░░░░░░ßßßß░░░░░                                 
                                  ░░░░░ßß░░░░                                   
                                    ░░░░░░░░                                    
                                      ░░░░                                      
                                       ░░  

                     )"
                     << "\nNinguno volvió. Ahora, vos decidís adentrarte en las catacumbas perdidas. Pasadizos oscuros, trampas mortales y acertijos antiguos te esperan. \n"
                     << "¿Serás capaz de encontrar el tesoro y salir con vida?\n"
                     << "Presiona Enter para continuar...\n";
                cin.ignore(); cin.get();
                system("clear");

                cout<< "\nLa entrada a las catacumbas está cubierta de arena y raíces secas, y las columnas de piedra se alzan contra el cielo oscuro.\n"
                    <<R"(                                                  
                                                                      
                                                        XXXXXXXXX   XXXX                          
                                                       XX▓▓▓▓▓▓▓▓XXXX▓▓▓XXX                       
                                                     XX▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓XXX                    
                                                   XX▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓XX                  
                                                  XXXX▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓XXXXXX              
                                                XX▓▓▓▓X▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓XX▓▓XXX            
                                              XXX▓▓▓▓XX▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓X▓▓▓▓XX           
                                             XX▓▓▓▓▓▓▓XX▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓X▓▓▓▓▓XX          
                                           XX▓▓▓▓▓▓▓▓▓▓X▓▓▓▓▓▓▓XXXXXXXXXXX▓▓▓▓▓▓▓▓▓▓▓▓▓X          
                                         XX▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓XX▐▓▓▓▓▓▓▓▌XXX▓▓▓▓▓▓▓▓▓▓▓X          
                                         X▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓XX▐▓▓▓▓▓▓▓▓▓▓▓▌X▓▓▓▓▓▓▓▓▓▓▓XX         
                                       XX▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓XX▐▓▓▓▓▒▒▒▒▒▒▒▒▌XXXX▓▓▓▓▓▓▓▓▓X         
                                      XX▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓XX▐▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▌XX▓▓▓▓▓▓▓▓XXX       
                          XXXXXXXXXXX X▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓XX▐▓▓▓▓▒▒░░░░░░░░░░░░▌XX▓▓▓▓▓▓▓▓XX       
                      XXXXX▓▓▓▓▓▓▓▓▓XXXX▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓X▐▓▓▓▒▒▒░░░░░░░░░░░░░░▌XX▓▓▓▓▓▓▓▓X       
                     XX▓▓X▓XX▓▓▓▓▓▓▓▓▓▓XXX▓▓▓▓▓▓▓▓▓▓▓▓▓▓XX▐▓▓▒▒▒░░░░░░░░░░░░░░░░▌XX▓▓▓▓▓▓▓▓X      
                    XX▓▓▓▓▓▓▓XX▓▓▓▓▓▓▓▓▓▓XXX▓▓▓▓▓▓▓▓▓▓▓▓X▐▓▓▒▒░░░░░░░░░░░░░░░░░░░▌XX▓▓▓▓▓▓▓XX     
                   X▓▓▓▓▓▓▓▓▓▓▓XX▓▓▓▓▓▓▓▓▓▓XXX▓▓▓▓▓▓▓▓XX▐▓▓▒▒▒░░░░░░░░░░░░░░░░░░░░░▌XX▓▓▓▓▓▓XX    
                  XX▓▓▓▓▓▓▓▓▓▓▓▓XX▓▓▓▓▓▓▓▓▓▓▓XX▓▓▓▓▓▓▓X▐▓▓▓▒▒░░░░░░░░░░░░░░░░░░░░░░░▌X▓▓▓▓▓▓▓XX   
                  XX▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓XXX▓▓▓▓XX▐▓▓▒▒▒░░░░░░░░░░░░░░░░░░░░░░░▌X▓▓▓▓▓▓▓▓XX  
                  ._."._."._."._."._."._."._."._X"._."._."._."._."._."._."._."._."._.X._."._."._."
                    )"

                  << "\nCada sala está llena de trampas y misterios, y en lo más profundo del lugar, el espíritu del faraón espera junto a su tesoro escondido.\n"
                  << "\nPresioná Enter para ingresar en las catacumbas...\n";
                  cin.ignore(); cin.get();
                  system("clear");

                //PRIMER JUEGO!
                int intento, clave = 222;

                cout << "\nUna cerradura dorada con jeroglificos bloquea el camino...\n"
                     <<R"(                                          
                                          ░░░░░░░                 
                                        ░░░     ░░░               
                                       ░░         ░░              
                                      ░░           ░░             
                                     ░░             ░░            
                                    ░░░             ░░░           
                                    ░░               ░░           
                                   ░░░               ░░░          
                                  ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒         
                                 ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒        
                                 ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒        
                                 ▒▒▓▓▓▄▄▄▓▓▓▄▄▄▓▓▓▄▄▄▓▓▓▒▒        
                                 ▒▒▓▓▐ΦΦΦ▌▓▐ΩΩΩ▌▓▐ΣΣΣ▌▓▓▒▒        
                                 ▒▒▓▓▐ΦΦΦ▌▓▐ΩΩΩ▌▓▐ΣΣΣ▌▓▓▒▒        
                                 ▒▒▓▓▐ΦΦΦ▌▓▐ΩΩΩ▌▓▐ΣΣΣ▌▓▓▒▒        
                                 ▒▒▓▓▓▀▀▀▓▓▓▀▀▀▓▓▓▀▀▀▓▓▓▒▒        
                                  ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒         
                                   ▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒          
                                    ▒▒▒▓▓▓▓▓▓▓▓▓▓▓▓▓▒▒▒           
                                      ▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒             
                      )"
                     << "\nIngresá el código secreto (entre 111 y 333)\n"
                     << "Pista: La respuesta esta en el medio...: ";

                while (vidas > 0) {
                    cin >> intento;
                    if (intento == clave) {
                        cout << "\nCorrecto. Un pasadizo se abre lentamente...\n";
                        cin.ignore(); cin.get();
                        system("clear");
                        break;
                    } else {
                        vidas--;
                        if (vidas > 0) {
                            cout << "Incorrecto. Te queda/n " << vidas << " intento/s. Intentá nuevamente: ";
                        } else {
                          cout <<R"(

                                    █████▒▄▄▄       ██▓     ██▓     ▒█████  
                                  ▓██   ▒▒████▄    ▓██▒    ▓██▒    ▒██▒  ██▒
                                  ▒████ ░▒██  ▀█▄  ▒██░    ▒██░    ▒██░  ██▒
                                  ░▓█▒  ░░██▄▄▄▄██ ▒██░    ▒██░    ▒██   ██░
                                  ░▒█░    ▓█   ▓██▒░██████▒░██████▒░ ████▓▒░
                                   ▒ ░    ▒▒   ▓▒█░░ ▒░▓  ░░ ▒░▓  ░░ ▒░▒░▒░ 
                                   ░       ▒   ▒▒ ░░ ░ ▒  ░░ ░ ▒  ░  ░ ▒ ▒░ 
                                   ░ ░     ░   ▒     ░ ░     ░ ░   ░ ░ ░ ▒  
                                                ░  ░    ░  ░    ░  ░    ░ ░    
                                          

                                 )"
                                << "\nPediste. El templo te rechaza...\n";

                            continuar = false;
                            cin.ignore(); cin.get();
                            system("clear");
                        }
                    }
                }

                if (!continuar) break;

                //SEGUNDO JUEGO!!
                string palabras[3] = {"anubis", "nilo", "escarabajo"};
                string pistas[3] = {"Dios chacal de los muertos.", "Rio sagrado de Egipto.", "Insecto sagrado del antiguo Egipto."};
                srand(time(0));
                int indice = rand() % 3;
                string palabra = palabras[indice];
                string pista = pistas[indice];
                string desordenada = palabra;

                for (int i = 0; i < desordenada.size(); i++) {
                    int j = rand() % desordenada.size();
                    char temp = desordenada[i];
                    desordenada[i] = desordenada[j];
                    desordenada[j] = temp;
                }

                cout << "\nHas encontrado una inscripción desordenada...\n"
                     <<R"(                                                              
                                                                                            
                          __________________________________________         
                          |_xx_|____x____|____|__xx|____|____|____|__|        
                          |__xx___░░░░░|____░░░░░░░___|___░░░░░░|____|        
                           ___xx_░░x__░░___░░░░___x░____░░______░____         
                          |____x░░x_|__░_|____░_░░░░x___░__x_|__xx|__|        
                          |__|_░░░░░░░░░░___|_░░░░░░xx|_░░_|x__xx____|        
                           ___░░xx_____░░_____░____░░____░░_xxxx_░___         
                          |__░░xx___|___░|____░░__░░░___|_░░_|x__░|__|        
                          |__░_x__|____|░░__|_░░░░░___|____░░░░░░░___|        
                          |____|____|____|____|____|____|____|x___|__|        
                          )";

                cout << "\nPalabra: " << desordenada << endl;
                cout << "Escribe 'pista' para obtener una pista o 'salir' para rendirte.\n";
                string respuesta;
                while (true) {
                    cout << "\nTu respuesta: ";
                    cin >> respuesta;
                    if (respuesta == palabra) {
                        cout << "Correcto. El sello mágico se disuelve...\n";
                        cin.ignore(); cin.get();
                        system("clear");
                        break;
                    } else if (respuesta == "pista") {
                        cout << "Pista: " << pista << endl;
                    } else if (respuesta == "salir" || respuesta == "SALIR") {
                        continuar = false;
                        system("clear");
                        break;
                    } else {

                      vidas--;

                       if (vidas > 0) {
                            cout << "Respuesta incorrecta. Intenta otra vez.\n"
                            << "Te queda/n " << vidas << " intento/s";
                        } else {
                          cout <<R"(

                                    █████▒▄▄▄       ██▓     ██▓     ▒█████  
                                  ▓██   ▒▒████▄    ▓██▒    ▓██▒    ▒██▒  ██▒
                                  ▒████ ░▒██  ▀█▄  ▒██░    ▒██░    ▒██░  ██▒
                                  ░▓█▒  ░░██▄▄▄▄██ ▒██░    ▒██░    ▒██   ██░
                                  ░▒█░    ▓█   ▓██▒░██████▒░██████▒░ ████▓▒░
                                   ▒ ░    ▒▒   ▓▒█░░ ▒░▓  ░░ ▒░▓  ░░ ▒░▒░▒░ 
                                   ░       ▒   ▒▒ ░░ ░ ▒  ░░ ░ ▒  ░  ░ ▒ ▒░ 
                                   ░ ░     ░   ▒     ░ ░     ░ ░   ░ ░ ░ ▒  
                                                ░  ░    ░  ░    ░  ░    ░ ░    
                                 )"

                            << "\nPerdiste. El templo te rechaza...\n";
                            continuar = false;
                            cin.ignore(); cin.get();
                            system("clear");
                            break;
                        }
                    }
                }
                if (!continuar) break;

                //TERCER JUEGO!!!
                string rta;
                cout << "\nUna esfinge se interpone en tu camino y te interroga:\n";
                cout << "\nCamino sin moverme, tengo boca pero no hablo. ¿Qué soy?\n";
                getline(cin, rta);
                if (!(rta == "rio" || rta == "un rio" || rta == "el rio"|| rta == "RIO" || rta == "UN RIO" || rta == "EL RIO")) {

                    cout << "\nIncorrecto. La esfinge desaparece, pero te lanza una maldición...\n";

                    --vidas;

                    cin.ignore(); cin.get();
                    system("clear");
                    break;

                } else {
                    cout << "\nCorrecto. La sabiduría fue tu aliada.\n";
                    cin.ignore(); cin.get();
                    system("clear");
                }

              





   //PELEA FINAL
  cout << "\nLlegás a la Cámara Final. Un guardian protector emerge de las sombras.\n"
    << R"(
     |\____/|
    (\|----|/)
     \ 0  0 /
      |    |
   ___/\../\____
  /     --       \
 /  \         /   \
|    \___/___/(   |
\   /|  }{   | \  )
 \  ||__}{__|  |  |
  \  |;;;;;;;\  \ / \_______
   \ /;;;;;;;;| [,,[|======'
     |;;;;;;/ |     /
     ||;;|\   |
     ||;;/|   /
     \_|:||__|
      \ ;||  /
      |= || =|
      |= /\ =|
      /_/  \_\
      )"
  << "\nTe preparás con temor\n";

  cin.ignore().get();
  system ("clear");

  cout<< "\nPor suerte, mientras mirabas a los lados con nerviosismo, encontraste una espada para defenderte.\n"
  << R"(
                           /\
                          // \
                          || |
                          || |
                          || |
                          || |
                          || |
                          || |
                       __ || | __
                      /___||_|___\
                           ww
                           MM
                          _MM_
                         (&<>&)
                          ~~~~      
                          )"
  << "\nPresioná Enter para agarrarla...\n";

  cin.ignore().get();
  system ("clear");
   
  cout << "De repente, aparecen convenientemente unas personas dispuestas a ayudarte." 
       << " Podés desconfiar y no reclutarlas, pero tené en cuenta que pueden aparecer más enemigos de las tinieblas" << endl;

  float ataqueHumano = 0.6f;
  float saludHumanoMaxima = 250.0f;
  float cantidadDanioHumano = 200.0f;

  float saludHumanoActual = saludHumanoMaxima;

  float ataqueEnemigo = 0.4f; 
  float saludEnemigoMaxima = 50.0f;
  float cantidadDanioEnemigo = 40.0f;
  float saludEnemigoActual = saludEnemigoMaxima;

  int cantidadHumanos;
  int cantidadEnemigos;

  random_device random;
  default_random_engine semilla(random());
  uniform_real_distribution<float> ataque(0.0f, 1.0f);
  float resultadoAtaque;


  char turno = 'H';


  cout << "Ingresá la cantidad de aliados que reclutás: ";
  cin >> cantidadHumanos;


  cout << "Ingresá la cantidad de enemigos: ";
  cin >> cantidadEnemigos;

  int cantidadHumanosInicial = cantidadHumanos;
  int cantidadEnemigosInicial = cantidadEnemigos;

  cin.ignore().get();
  system ("clear");
  
  cout << "\nComienza la pelea contra las sombras...\n";

  
  cout << "El enemigo lanza el primer ataque"
  <<R"(
                                            ,--,  ,.-.
               ,                   \,       '-,-`,'-.' | ._
              /|           \    ,   |\         }  )/  / `-,',
              [ ,          |\  /|   | |        /  \|  |/`  ,`
              | |       ,.`  `,` `, | |  _,...(   (      .',
              \  \  __ ,-` `  ,  , `/ |,'      Y     (   /_L\
               \  \_\,``,   ` , ,  /  |         )         _,/
                \  '  `  ,_ _`_,-,<._.<        /         /
                 ', `>.,`  `  `   ,., |_      |         /
                   \/`  `,   `   ,`  | /__,.-`    _,   `\
               -,-..\  _  \  `  /  ,  / `._) _,-\`       \
                \_,,.) /\    ` /  / ) (-,, ``    ,        |
               ,` )  | \_\       '-`  |  `(               \
              /  /```(   , --, ,' \   |`<`    ,            |
             /  /_,--`\   <\  V /> ,` )<_/)  | \      _____)
       ,-, ,`   `   (_,\ \    |   /) / __/  /   `----`
      (-, \           ) \ ('_.-._)/ /,`    /
      | /  `          `/ \\ V   V, /`     /
   ,--\(        ,     <_/`\\     ||      /
  (   ,``-     \/|         \-A.A-`|     /
 ,>,_ )_,..(    )\          -,,_-`  _--`
(_ \|`   _,/_  /  \_            ,--`
 \( `   <.,../`     `-.._   _,-`
        )";

  cout << "No sabés como, pero lo esquivaste. Ahora te toca a vos..." 
       << "\nPresiona Enter para atacar!" ;

  cin.ignore().get();
  system ("clear");

  cout << "Blandiste tu espada torpemente, pero en un golpe de suerte, lograste dañar a todos" << endl;
  cout << "La pelea sigue entre espadazos y trampas..." << endl;
  
  while ((cantidadHumanos > 0) && (cantidadEnemigos > 0))
  {
    
    resultadoAtaque = ataque(semilla);


  
    if (turno == 'H')
    {
      if (resultadoAtaque <= ataqueHumano)
      {        saludEnemigoActual = saludEnemigoActual - cantidadDanioHumano;
  
        if (saludEnemigoActual <= 0)
        {
  
          cantidadEnemigos--;


          saludEnemigoActual = saludEnemigoMaxima;
        }
      }
      turno = 'E'; 
    }
    else if (turno == 'E')
    {
      if (resultadoAtaque <= ataqueEnemigo)
      {
 
        saludHumanoActual -= cantidadDanioEnemigo;

        if (saludHumanoActual <= 0)
        {
          cantidadEnemigos--;

          saludHumanoActual = saludEnemigoMaxima;
        }
      }
      turno = 'H'; 
    }
  }

    cout << "Se esta terminando la pelea...\n"
         << "Después de una pelea dificíl contra las sombras y lo desconocido"
         << "Se da el último golpe que lo define todo" 
         << "Te golpearon en la cara, no podes ver nada" 
         << "Hasta que te recuperás y ves que..." << endl;


  if (cantidadEnemigos > 0)
  {
    cout << "Tus aliados y vos lo lograron, derrotaron al enemigo!"
         << "Ahora el único problema es como van a dividir el corazón." 
         << "Pero eso es otra historia..." ;
    cout << "Quedaron " << cantidadHumanos << " humanos vivos" << endl;
  }
  else
  {
    cout << "Perdiste, nadie sobrevivió." << endl;
    cout << "Al final, no eran tan bueno aliados" << endl;



   cout << "Quedaron " << cantidadEnemigos << " enemigos de pie" << endl;
  }

  cout << cantidadHumanosInicial - cantidadHumanos << " humanos perdieron sus vidas y " << cantidadEnemigosInicial - cantidadEnemigos << "enemigos fueron derrotados.\n";
break;

  cout << endl;
            }
            case 2:
                cout << "\nJuego creado por Ana Paula Chaparro, Olivia Foresi y Martina Giudice.\n"
                     << "\nInformática General - Cátedra Tirigall - UNA\n";
                cin.ignore(); cin.get();
                system("clear");
                break;
            case 3:
                cout << "\nExplorás las catacumbas en busca del legendario Corazón de Ra, enfrentando trampas y acertijos mortales.\n"
                     << "\nUsá tu ingenio y tu teclado para sobrevivir: cada elección puede salvarte… o condenarte.\n";
                cin.ignore(); cin.get();
                system("clear");
                break;
            case 4:
                menu = false;
                break;
            default:
                cout << "\nOpción inválida. Intentá otra vez.\n";
                break;
        }
    }
    system("clear");
    cout << "\nGracias por jugar!\n"
         <<R"(
                                            
                         ░░░░░░░░░             ░░░░░░░░                         
                       ░░░░░░░░░░░░          ░░░░░░░░░░░░                       
                     ░░░░ΩΩΩΩΩΩΩΩΩΩ░░      ░░ΩΩΩΩΩΩΩΩΩΩ░░░                      
                    ░░░ΩΩΩΩΩΩΩΩΩΩΩΩΩΩ░░  ░░ΩΩΩΩΩΩΩΩΩΩΩΩΩ░░░                     
                   ░░░░ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ░░ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ░░░░                    
                   ░░░░ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ░░░░                    
                   ░░░░ΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩΩ░░░░                    
                    ░░░░ΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣ░░░░                     
                     ░░░░ΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣ░░░░                      
                      ░░░░ΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣ░░░░                       
                       ░░░░░ΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣΣ░░░░░                        
                         ░░░░µµµµµµµµµµµµµµµµµµµµ░░░░░                          
                          ░░░░µµµµµµµµµµµµµµµµµµ░░░░                            
                            ░░░µµµµµµµµµµµµµµµµµ░░░                             
                             ░░░░µµµµµµµµµµµµµ░░░░                              
                               ░░░░░ßßßßßßßß░░░░░                               
                                ░░░░░░ßßßß░░░░░                                 
                                  ░░░░░ßß░░░░                                   
                                    ░░░░░░░░                                    
                                      ░░░░                                      
                                       ░░  
                                       )";
    return 0;
}