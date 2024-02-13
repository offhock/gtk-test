// helloworld.h
#ifndef GTKMM_EXAMPLE_HELLOWORLD_H
#define GTKMM_EXAMPLE_HELLOWORLD_H

//#include <gtkmm/button.h>
//#include <gtkmm/container.h>
//#include <gtkmm/window.h>
#include <gtkmm.h>

class HelloWorld : public Gtk::Window {
public:
    HelloWorld();
    virtual ~HelloWorld() override;

protected:
    void on_button_clicked();

    Gtk::Box    m_hbox;
    Gtk::Button m_button;
    Gtk::Label  m_label;
    Gtk::Entry  m_text;
};


class MyApp : public Gtk::Widget {
    
};



#endif

