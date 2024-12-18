#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "aa.h"



void
on_ADADD_clicked                       (GtkButton       *ADADD,
                                        gpointer         user_data)
{
 
    // Retrieve widgets
    GtkWidget *ADPARKINGID = lookup_widget(GTK_WIDGET(ADADD), "ADPARKINGID");
    GtkWidget *date = lookup_widget(GTK_WIDGET(ADADD), "date");
    GtkWidget *numberofspaces = lookup_widget(GTK_WIDGET(ADADD), "numberofspaces");
    GtkWidget *ADMATRICULE = lookup_widget(GTK_WIDGET(ADADD), "ADMATRICULE");
    GtkWidget *ADPHONE = lookup_widget(GTK_WIDGET(ADADD), "ADPHONE");
    GtkWidget *label_review = lookup_widget(GTK_WIDGET(ADADD), "label24ala");

    // Fetch values from widgets
    const char *id = gtk_entry_get_text(GTK_ENTRY(ADPARKINGID));
    const char *entered_date = gtk_entry_get_text(GTK_ENTRY(date));
    const char *nbrspaces = gtk_entry_get_text(GTK_ENTRY(numberofspaces));
    const char *matricule = gtk_entry_get_text(GTK_ENTRY(ADMATRICULE));
    const char *phone = gtk_entry_get_text(GTK_ENTRY(ADPHONE));

    // Validate input
    if (id == NULL || strlen(id) == 0) {
        gtk_label_set_text(GTK_LABEL(label_review), "Parking ID cannot be empty.");
        return;
    }
    if (entered_date == NULL || strlen(entered_date) == 0) {
        gtk_label_set_text(GTK_LABEL(label_review), "Date cannot be empty.");
        return;
    }
    if (validateDate(entered_date) == 0) {
        gtk_label_set_text(GTK_LABEL(label_review), "invalid format.");
        return;
    }    
    if (nbrspaces == NULL || strlen(nbrspaces) == 0) {
        gtk_label_set_text(GTK_LABEL(label_review), "Number of spaces cannot be empty.");
        return;
    }
    if (matricule == NULL || strlen(matricule) == 0) {
        gtk_label_set_text(GTK_LABEL(label_review), "Matricule cannot be empty.");
        return;
    }
    if (phone == NULL || strlen(phone) == 0) {
        gtk_label_set_text(GTK_LABEL(label_review), "Phone number cannot be empty.");
        return;
    }
    const char *bb = gtk_entry_get_text(GTK_ENTRY(ADPARKINGID));
    char *aa = gtk_entry_get_text(GTK_ENTRY(numberofspaces));
    int val;
    val=atoi(aa);
    if (check_parking_id(bb,val)== 0) {
        gtk_label_set_text(GTK_LABEL(label_review), "parking id not found ");
        return;
    }
	
    // Open file for appending
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Failed to open parking.txt");
        gtk_label_set_text(GTK_LABEL(label_review), "Failed to save data.");
        return;
    }

    // Write data to file
    fprintf(file, "%s\t%s\t%s\t%s\t%s\n", id, entered_date, nbrspaces, matricule, phone);
    fclose(file);

    // Set success message
    gtk_label_set_text(GTK_LABEL(label_review), "Parking data saved successfully!");
    g_print("Parking data saved successfully!\n");
   

}


void
on_button2ala_clicked                     (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *window2ala;
	window2ala = create_window2ala ();
  	gtk_widget_show (window2ala);

}


void
on_ADDELETE_clicked                    (GtkButton       *button,
                                        gpointer         user_data)
{
	GtkWidget *dialog1ala;
	dialog1ala = create_dialog1ala ();
  	gtk_widget_show (dialog1ala);
}



void
on_button4ala_clicked                     (GtkButton       *button4ala,
                                        gpointer         user_data)
{
    GtkWidget *ADMODIFYPARKINGID = lookup_widget(GTK_WIDGET(button4ala), "ADMODIFYPARKINGID");
    GtkWidget *ADMODIFYDATE = lookup_widget(GTK_WIDGET(button4ala), "ADMODIFYDATE");
    GtkWidget *nbrspaces = lookup_widget(GTK_WIDGET(button4ala), "nbrspaces");
    GtkWidget *ADMODIFYMATRICULE = lookup_widget(GTK_WIDGET(button4ala), "ADMODIFYMATRICULE");
    GtkWidget *ADMODIFYPHONENUMBER = lookup_widget(GTK_WIDGET(button4ala), "ADMODIFYPHONENUMBER");
    GtkWidget *label25ala = lookup_widget(GTK_WIDGET(button4ala), "label25ala");

    // Get updated parking data from entries
    const char *parking_id = gtk_entry_get_text(GTK_ENTRY(ADMODIFYPARKINGID));
    if (strlen(parking_id) == 0) {
        set_label_message(label25ala, "Parking ID is required!");
        return; // Exit if parking ID is empty
    }
    const char *aa = gtk_entry_get_text(GTK_ENTRY(ADMODIFYDATE));
    if (validateDate(aa) == 0) {
        set_label_message(label25ala, "invalid format");
        return;
    }
    

    	ParkingEntry updated_parking;
    
    // Collect data from the GTK entry widgets and populate the ParkingEntry structure
    strcpy(updated_parking.entered_date, gtk_entry_get_text(GTK_ENTRY(ADMODIFYDATE)));
    updated_parking.nbrspaces = atoi(gtk_entry_get_text(GTK_ENTRY(nbrspaces))); // Assuming it's an integer
    strcpy(updated_parking.matricule, gtk_entry_get_text(GTK_ENTRY(ADMODIFYMATRICULE)));
    strcpy(updated_parking.phone, gtk_entry_get_text(GTK_ENTRY(ADMODIFYPHONENUMBER)));

    // Call edit function to update the parking entry in the file
    edit_parking("data.txt", parking_id, &updated_parking);
    
    
}




void
on_deletebutton1ala_clicked               (GtkButton       *deletebutton1ala,
                                        gpointer         user_data)
{
	
	GtkWidget *iddelete = lookup_widget(GTK_WIDGET(deletebutton1ala), "iddelete");
	GtkWidget *label26ala = lookup_widget(GTK_WIDGET(deletebutton1ala), "label26ala");

    // Get the parking ID to delete
    const char *id = gtk_entry_get_text(GTK_ENTRY(iddelete));

    // Call delete function
    if (delete_parking("data.txt",id)) {

        set_label_message(label26ala, "Parking deleted successfully!");
    } else {
        
        set_label_message(label26ala, "ID parking doesn't exist! Delete failed.");
    }
}


void
on_treeview1_row_activated             (GtkTreeView     *treeview1,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{

}


void
on_treeview2_row_activated             (GtkTreeView     *treeview2,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
	
    
}




void
on_refresh1_clicked                    (GtkButton       *refresh1,
                                        gpointer         user_data)
{
	// Chercher le widget pour le TreeView des parkings
	GtkWidget *treeview1 = lookup_widget(GTK_WIDGET(refresh1), "treeview1");

	// Rafraîchir les données des parkings dans le TreeView
	refresh_parking_treeview1(treeview1);

}


void
on_refresh2_clicked                    (GtkButton       *refresh2,
                                        gpointer         user_data)
{
	GtkWidget *treeview2 = lookup_widget(GTK_WIDGET(refresh2), "treeview2");
    	// Refresh the parking data in TreeView
    	refresh_parking_treeview(treeview2);
}






