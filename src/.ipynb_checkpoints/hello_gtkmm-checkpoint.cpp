/**
 * @file hello_gtkmm.cpp
 * @brief Minimal GTKmm 4 Hello World example with a clickable button.
 * 
 * Demonstrates a basic GTKmm window, a button widget, and signal handling.
 * 
 
 */

#include "hello_gtkmm.h"
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
