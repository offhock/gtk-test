// main.cc
#include "helloworld.h"
#include <gtkmm/application.h>

int main(int argc, char* argv[]) {
    
    // Initialize Gtkmm application
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");    

    // Create a hello window    
    HelloWorld helloworld_wnd;
    helloworld_wnd.set_default_size(800, 600); // 윈도우 크기 설정
    helloworld_wnd.move(100, 50); // 윈도우 위치 설정 (x=100, y=50)


    // Run the application
    return app->run(helloworld_wnd);    
}
