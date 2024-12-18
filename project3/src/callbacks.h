#include <gtk/gtk.h>


void
on_ADYES_toggled                       (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_ADNO_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_ADADD_clicked                       (GtkButton       *button,
                                        gpointer         user_data);

void
on_button2_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_ADDELETE_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_ADMODIFYNO_toggled                  (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_ADMODIFYYES_toggled                 (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_button4_clicked                     (GtkButton       *button,
                                        gpointer         user_data);

void
on_okbutton1_clicked                   (GtkButton       *button,
                                        gpointer         user_data);

void
on_deletebutton1_clicked               (GtkButton       *button,
                                        gpointer         user_data);

void
on_treeview1_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_treeview2_row_activated             (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_refresh1_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_refresh2_clicked                    (GtkButton       *button,
                                        gpointer         user_data);

void
on_button2ala_clicked                  (GtkButton       *button,
                                        gpointer         user_data);

void
on_deletebutton1ala_clicked            (GtkButton       *button,
                                        gpointer         user_data);

void
on_button4ala_clicked                  (GtkButton       *button,
                                        gpointer         user_data);
