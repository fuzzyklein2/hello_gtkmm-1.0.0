/**
 * @file hello_gtkmm.cpp
 * @brief Minimal GTKmm 4 Hello World example with a clickable button.
 * 
 * Demonstrates a basic GTKmm window, a button widget, and signal handling.
 * 
 * @example
 * #include "hello_gtkmm.cpp"
 * int main(int argc, char* argv[]) {
 *     auto app = Gtk::Application::create("org.gtkmm.example");
 *     return app->make_window_and_run<MyWindow>(argc, argv);
 * }
 */

#include <gtkmm.h>
#include <iostream>

/**
 * @class MyWindow
 * @brief Main application window for the Hello World example.
 * 
 * Inherits from Gtk::Window and contains a single Gtk::Button.
 * Clicking the button prints a message to the terminal.
 */
class MyWindow : public Gtk::Window {
public:
    /**
     * @brief Constructs the main window.
     * 
     * Sets the window title, default size, and initializes the button.
     * Connects the button's "clicked" signal to a callback.
     */
    MyWindow();

private:
    /** @name Signal handlers */
    ///@{
    /**
     * @brief Callback function for the button's "clicked" signal.
     * 
     * Prints a message to standard output when the button is clicked.
     */
    void on_button_clicked();
    ///@}

    /** @name Widgets */
    ///@{
    /// The button displayed in the window
    Gtk::Button button;
    ///@}
};

// ---------------- Implementation ----------------

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

/**
 * @brief Main application entry point.
 * 
 * Creates a Gtk::Application and runs the main window.
 * 
 * @param argc Argument count
 * @param argv Argument vector
 * @return int Application exit status
 */
int main(int argc, char* argv[]) {
    auto app = Gtk::Application::create("org.gtkmm.example");
    return app->make_window_and_run<MyWindow>(argc, argv);
}
