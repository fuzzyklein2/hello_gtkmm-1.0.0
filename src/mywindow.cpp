#include "hello_gtkmm.h"

MyWindow::MyWindow() {
    set_title("GTKmm Hello World");
    set_default_size(300, 100);

    // Set up the button
    button.set_label("Click me!");

    // Connect the clicked signal to our handler
    button.signal_clicked().connect(sigc::mem_fun(*this, &MyWindow::on_button_clicked));

    // Add the button to the window
    set_child(button);
}

void MyWindow::on_button_clicked() {
    std::cout << "Button clicked!" << std::endl;
}

