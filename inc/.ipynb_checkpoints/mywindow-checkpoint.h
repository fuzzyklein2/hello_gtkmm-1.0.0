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

