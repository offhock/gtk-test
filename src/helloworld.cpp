// helloworld.cc
#include "helloworld.h"
#include <iostream>

HelloWorld::HelloWorld() 
    :   m_button("Hello World"), 
        m_label("test") , 
        m_hbox(Gtk::ORIENTATION_HORIZONTAL, 10) 
{
    set_border_width(10);
    m_button.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::on_button_clicked));

    // Add label and text entry to the horizontal box
    m_hbox.pack_start(m_label, Gtk::PACK_SHRINK); // Shrink label to minimum size
    m_hbox.pack_start(m_text, Gtk::PACK_EXPAND_WIDGET); // Expand text entry to fill available space
    m_hbox.pack_start(m_button, Gtk::PACK_EXPAND_WIDGET); // Expand text entry to fill available space

    // Add the horizontal box to the window
    add(m_hbox);

    // Show all widgets
    show_all();        

}

HelloWorld::~HelloWorld() {}

void HelloWorld::on_button_clicked() 
{
    std::cout << "Hello World" << std::endl;
}

