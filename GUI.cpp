#include<stdio.h>


int main(int argc, char *argv[]) {
    // Initialize GTK+
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "My Window");
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);

    // Show the window
    gtk_widget_show(window);

    // Start the GTK+ main loop
    gtk_main();

    return 0;
}

