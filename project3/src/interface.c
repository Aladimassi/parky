/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window1ala (void)
{
  GtkWidget *window1ala;
  GtkWidget *notebook1;
  GtkWidget *fixed1;
  GtkWidget *ADPARKINGID;
  GtkWidget *ADMATRICULE;
  GtkWidget *ADID;
  GtkWidget *ADPHONE;
  GtkWidget *date;
  GtkWidget *numberofspaces;
  GtkWidget *scrolledwindow1;
  GtkWidget *treeview1;
  GtkWidget *refresh1;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image7;
  GtkWidget *label27;
  GtkWidget *ADADD;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image3;
  GtkWidget *label11;
  GtkWidget *label8ala;
  GtkWidget *label24ala;
  GtkWidget *label6ala;
  GtkWidget *label14ala;
  GtkWidget *ADnumberofspaces;
  GtkWidget *label5ala;
  GtkWidget *label4ala;
  GtkWidget *label3ala;
  GtkWidget *image1ala;
  GtkWidget *alaa;
  GtkWidget *fixed2;
  GtkWidget *ADID2;
  GtkWidget *scrolledwindow2;
  GtkWidget *treeview2;
  GtkWidget *refresh2;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image8;
  GtkWidget *label28;
  GtkWidget *button2ala;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image5;
  GtkWidget *ADMODIFY;
  GtkWidget *ADDELETE;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image4;
  GtkWidget *label12;
  GtkWidget *image2ala;
  GtkWidget *label9ala;
  GtkWidget *manage_my_bookingsala;
  GtkWidget *alaaaaaa;

  window1ala = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window1ala), _("main"));

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_container_add (GTK_CONTAINER (window1ala), notebook1);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed1);

  ADPARKINGID = gtk_entry_new ();
  gtk_widget_show (ADPARKINGID);
  gtk_fixed_put (GTK_FIXED (fixed1), ADPARKINGID, 520, 104);
  gtk_widget_set_size_request (ADPARKINGID, 184, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (ADPARKINGID), 8226);

  ADMATRICULE = gtk_entry_new ();
  gtk_widget_show (ADMATRICULE);
  gtk_fixed_put (GTK_FIXED (fixed1), ADMATRICULE, 528, 272);
  gtk_widget_set_size_request (ADMATRICULE, 176, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (ADMATRICULE), 8226);

  ADID = gtk_text_view_new ();
  gtk_widget_show (ADID);
  gtk_fixed_put (GTK_FIXED (fixed1), ADID, 120, 64);
  gtk_widget_set_size_request (ADID, 144, 34);

  ADPHONE = gtk_entry_new ();
  gtk_widget_show (ADPHONE);
  gtk_fixed_put (GTK_FIXED (fixed1), ADPHONE, 528, 328);
  gtk_widget_set_size_request (ADPHONE, 176, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (ADPHONE), 8226);

  date = gtk_entry_new ();
  gtk_widget_show (date);
  gtk_fixed_put (GTK_FIXED (fixed1), date, 528, 160);
  gtk_widget_set_size_request (date, 160, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (date), 8226);

  numberofspaces = gtk_entry_new ();
  gtk_widget_show (numberofspaces);
  gtk_fixed_put (GTK_FIXED (fixed1), numberofspaces, 536, 216);
  gtk_widget_set_size_request (numberofspaces, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (numberofspaces), 8226);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_fixed_put (GTK_FIXED (fixed1), scrolledwindow1, 24, 128);
  gtk_widget_set_size_request (scrolledwindow1, 336, 320);

  treeview1 = gtk_tree_view_new ();
  gtk_widget_show (treeview1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), treeview1);

  refresh1 = gtk_button_new ();
  gtk_widget_show (refresh1);
  gtk_fixed_put (GTK_FIXED (fixed1), refresh1, 72, 464);
  gtk_widget_set_size_request (refresh1, 184, 56);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (refresh1), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image7 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox5), image7, FALSE, FALSE, 0);

  label27 = gtk_label_new_with_mnemonic (_("refresh"));
  gtk_widget_show (label27);
  gtk_box_pack_start (GTK_BOX (hbox5), label27, FALSE, FALSE, 0);

  ADADD = gtk_button_new ();
  gtk_widget_show (ADADD);
  gtk_fixed_put (GTK_FIXED (fixed1), ADADD, 488, 392);
  gtk_widget_set_size_request (ADADD, 160, 48);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (ADADD), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image3 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox1), image3, FALSE, FALSE, 0);

  label11 = gtk_label_new_with_mnemonic (_("Add"));
  gtk_widget_show (label11);
  gtk_box_pack_start (GTK_BOX (hbox1), label11, FALSE, FALSE, 0);

  label8ala = gtk_label_new (_("sorted list of parking lots"));
  gtk_widget_show (label8ala);
  gtk_fixed_put (GTK_FIXED (fixed1), label8ala, 304, 16);
  gtk_widget_set_size_request (label8ala, 224, 56);

  label24ala = gtk_label_new ("");
  gtk_widget_show (label24ala);
  gtk_fixed_put (GTK_FIXED (fixed1), label24ala, 360, 448);
  gtk_widget_set_size_request (label24ala, 344, 80);
  gtk_misc_set_padding (GTK_MISC (label24ala), 7, 0);

  label6ala = gtk_label_new (_("matricule"));
  gtk_widget_show (label6ala);
  gtk_fixed_put (GTK_FIXED (fixed1), label6ala, 392, 272);
  gtk_widget_set_size_request (label6ala, 97, 25);

  label14ala = gtk_label_new (_("phone number"));
  gtk_widget_show (label14ala);
  gtk_fixed_put (GTK_FIXED (fixed1), label14ala, 400, 328);
  gtk_widget_set_size_request (label14ala, 112, 32);

  ADnumberofspaces = gtk_label_new (_("number of spaces"));
  gtk_widget_show (ADnumberofspaces);
  gtk_fixed_put (GTK_FIXED (fixed1), ADnumberofspaces, 384, 216);
  gtk_widget_set_size_request (ADnumberofspaces, 136, 32);

  label5ala = gtk_label_new (_("date\n"));
  gtk_widget_show (label5ala);
  gtk_fixed_put (GTK_FIXED (fixed1), label5ala, 432, 176);
  gtk_widget_set_size_request (label5ala, 41, 17);

  label4ala = gtk_label_new (_("parking id"));
  gtk_widget_show (label4ala);
  gtk_fixed_put (GTK_FIXED (fixed1), label4ala, 408, 112);
  gtk_widget_set_size_request (label4ala, 81, 24);

  label3ala = gtk_label_new (_("Your Id"));
  gtk_widget_show (label3ala);
  gtk_fixed_put (GTK_FIXED (fixed1), label3ala, 136, 24);
  gtk_widget_set_size_request (label3ala, 65, 25);

  image1ala = create_pixmap (window1ala, "462564363_469540552098561_1084160750000025690_n.png");
  gtk_widget_show (image1ala);
  gtk_fixed_put (GTK_FIXED (fixed1), image1ala, 16, 24);
  gtk_widget_set_size_request (image1ala, 88, 88);

  alaa = gtk_label_new (_("sorted list of parking lots"));
  gtk_widget_show (alaa);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), alaa);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed2);

  ADID2 = gtk_text_view_new ();
  gtk_widget_show (ADID2);
  gtk_fixed_put (GTK_FIXED (fixed2), ADID2, 120, 48);
  gtk_widget_set_size_request (ADID2, 136, 32);

  scrolledwindow2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow2);
  gtk_fixed_put (GTK_FIXED (fixed2), scrolledwindow2, 80, 120);
  gtk_widget_set_size_request (scrolledwindow2, 640, 304);

  treeview2 = gtk_tree_view_new ();
  gtk_widget_show (treeview2);
  gtk_container_add (GTK_CONTAINER (scrolledwindow2), treeview2);

  refresh2 = gtk_button_new ();
  gtk_widget_show (refresh2);
  gtk_fixed_put (GTK_FIXED (fixed2), refresh2, 40, 448);
  gtk_widget_set_size_request (refresh2, 168, 64);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (refresh2), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image8 = gtk_image_new_from_stock ("gtk-refresh", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox6), image8, FALSE, FALSE, 0);

  label28 = gtk_label_new_with_mnemonic (_("refresh"));
  gtk_widget_show (label28);
  gtk_box_pack_start (GTK_BOX (hbox6), label28, FALSE, FALSE, 0);

  button2ala = gtk_button_new ();
  gtk_widget_show (button2ala);
  gtk_fixed_put (GTK_FIXED (fixed2), button2ala, 256, 456);
  gtk_widget_set_size_request (button2ala, 152, 56);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (button2ala), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image5 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox3), image5, FALSE, FALSE, 0);

  ADMODIFY = gtk_label_new_with_mnemonic (_("modify"));
  gtk_widget_show (ADMODIFY);
  gtk_box_pack_start (GTK_BOX (hbox3), ADMODIFY, FALSE, FALSE, 0);

  ADDELETE = gtk_button_new ();
  gtk_widget_show (ADDELETE);
  gtk_fixed_put (GTK_FIXED (fixed2), ADDELETE, 472, 456);
  gtk_widget_set_size_request (ADDELETE, 154, 53);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (ADDELETE), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image4 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox2), image4, FALSE, FALSE, 0);

  label12 = gtk_label_new_with_mnemonic (_("delete"));
  gtk_widget_show (label12);
  gtk_box_pack_start (GTK_BOX (hbox2), label12, FALSE, FALSE, 0);

  image2ala = create_pixmap (window1ala, "462564363_469540552098561_1084160750000025690_n.png");
  gtk_widget_show (image2ala);
  gtk_fixed_put (GTK_FIXED (fixed2), image2ala, 8, 16);
  gtk_widget_set_size_request (image2ala, 88, 88);

  label9ala = gtk_label_new (_("Your Id"));
  gtk_widget_show (label9ala);
  gtk_fixed_put (GTK_FIXED (fixed2), label9ala, 128, 16);
  gtk_widget_set_size_request (label9ala, 80, 16);

  manage_my_bookingsala = gtk_label_new (_("manage my bookings"));
  gtk_widget_show (manage_my_bookingsala);
  gtk_fixed_put (GTK_FIXED (fixed2), manage_my_bookingsala, 304, 32);
  gtk_widget_set_size_request (manage_my_bookingsala, 184, 56);

  alaaaaaa = gtk_label_new (_("manage my bookings"));
  gtk_widget_show (alaaaaaa);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), alaaaaaa);

  g_signal_connect ((gpointer) treeview1, "row_activated",
                    G_CALLBACK (on_treeview1_row_activated),
                    NULL);
  g_signal_connect ((gpointer) refresh1, "clicked",
                    G_CALLBACK (on_refresh1_clicked),
                    NULL);
  g_signal_connect ((gpointer) ADADD, "clicked",
                    G_CALLBACK (on_ADADD_clicked),
                    NULL);
  g_signal_connect ((gpointer) treeview2, "row_activated",
                    G_CALLBACK (on_treeview2_row_activated),
                    NULL);
  g_signal_connect ((gpointer) refresh2, "clicked",
                    G_CALLBACK (on_refresh2_clicked),
                    NULL);
  g_signal_connect ((gpointer) button2ala, "clicked",
                    G_CALLBACK (on_button2ala_clicked),
                    NULL);
  g_signal_connect ((gpointer) ADDELETE, "clicked",
                    G_CALLBACK (on_ADDELETE_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window1ala, window1ala, "window1ala");
  GLADE_HOOKUP_OBJECT (window1ala, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (window1ala, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (window1ala, ADPARKINGID, "ADPARKINGID");
  GLADE_HOOKUP_OBJECT (window1ala, ADMATRICULE, "ADMATRICULE");
  GLADE_HOOKUP_OBJECT (window1ala, ADID, "ADID");
  GLADE_HOOKUP_OBJECT (window1ala, ADPHONE, "ADPHONE");
  GLADE_HOOKUP_OBJECT (window1ala, date, "date");
  GLADE_HOOKUP_OBJECT (window1ala, numberofspaces, "numberofspaces");
  GLADE_HOOKUP_OBJECT (window1ala, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (window1ala, treeview1, "treeview1");
  GLADE_HOOKUP_OBJECT (window1ala, refresh1, "refresh1");
  GLADE_HOOKUP_OBJECT (window1ala, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (window1ala, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (window1ala, image7, "image7");
  GLADE_HOOKUP_OBJECT (window1ala, label27, "label27");
  GLADE_HOOKUP_OBJECT (window1ala, ADADD, "ADADD");
  GLADE_HOOKUP_OBJECT (window1ala, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window1ala, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (window1ala, image3, "image3");
  GLADE_HOOKUP_OBJECT (window1ala, label11, "label11");
  GLADE_HOOKUP_OBJECT (window1ala, label8ala, "label8ala");
  GLADE_HOOKUP_OBJECT (window1ala, label24ala, "label24ala");
  GLADE_HOOKUP_OBJECT (window1ala, label6ala, "label6ala");
  GLADE_HOOKUP_OBJECT (window1ala, label14ala, "label14ala");
  GLADE_HOOKUP_OBJECT (window1ala, ADnumberofspaces, "ADnumberofspaces");
  GLADE_HOOKUP_OBJECT (window1ala, label5ala, "label5ala");
  GLADE_HOOKUP_OBJECT (window1ala, label4ala, "label4ala");
  GLADE_HOOKUP_OBJECT (window1ala, label3ala, "label3ala");
  GLADE_HOOKUP_OBJECT (window1ala, image1ala, "image1ala");
  GLADE_HOOKUP_OBJECT (window1ala, alaa, "alaa");
  GLADE_HOOKUP_OBJECT (window1ala, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window1ala, ADID2, "ADID2");
  GLADE_HOOKUP_OBJECT (window1ala, scrolledwindow2, "scrolledwindow2");
  GLADE_HOOKUP_OBJECT (window1ala, treeview2, "treeview2");
  GLADE_HOOKUP_OBJECT (window1ala, refresh2, "refresh2");
  GLADE_HOOKUP_OBJECT (window1ala, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (window1ala, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (window1ala, image8, "image8");
  GLADE_HOOKUP_OBJECT (window1ala, label28, "label28");
  GLADE_HOOKUP_OBJECT (window1ala, button2ala, "button2ala");
  GLADE_HOOKUP_OBJECT (window1ala, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (window1ala, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (window1ala, image5, "image5");
  GLADE_HOOKUP_OBJECT (window1ala, ADMODIFY, "ADMODIFY");
  GLADE_HOOKUP_OBJECT (window1ala, ADDELETE, "ADDELETE");
  GLADE_HOOKUP_OBJECT (window1ala, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window1ala, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (window1ala, image4, "image4");
  GLADE_HOOKUP_OBJECT (window1ala, label12, "label12");
  GLADE_HOOKUP_OBJECT (window1ala, image2ala, "image2ala");
  GLADE_HOOKUP_OBJECT (window1ala, label9ala, "label9ala");
  GLADE_HOOKUP_OBJECT (window1ala, manage_my_bookingsala, "manage_my_bookingsala");
  GLADE_HOOKUP_OBJECT (window1ala, alaaaaaa, "alaaaaaa");

  return window1ala;
}

GtkWidget*
create_window2ala (void)
{
  GtkWidget *window2ala;
  GtkWidget *fixed3;
  GtkWidget *ADMODIFYPARKINGID;
  GtkWidget *ADMODIFYDATE;
  GtkWidget *ADMODIFYMATRICULE;
  GtkWidget *ADMODIFYPHONENUMBER;
  GtkWidget *label21;
  GtkWidget *label20;
  GtkWidget *label18;
  GtkWidget *label17;
  GtkWidget *nbrspaces;
  GtkWidget *label25ala;
  GtkWidget *button4ala;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image6;
  GtkWidget *ADMODIFYCHANGE;
  GtkWidget *label19;
  GtkWidget *label16;

  window2ala = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window2ala), _("modifier"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (window2ala), fixed3);

  ADMODIFYPARKINGID = gtk_entry_new ();
  gtk_widget_show (ADMODIFYPARKINGID);
  gtk_fixed_put (GTK_FIXED (fixed3), ADMODIFYPARKINGID, 208, 80);
  gtk_widget_set_size_request (ADMODIFYPARKINGID, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (ADMODIFYPARKINGID), 8226);

  ADMODIFYDATE = gtk_entry_new ();
  gtk_widget_show (ADMODIFYDATE);
  gtk_fixed_put (GTK_FIXED (fixed3), ADMODIFYDATE, 208, 144);
  gtk_widget_set_size_request (ADMODIFYDATE, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (ADMODIFYDATE), 8226);

  ADMODIFYMATRICULE = gtk_entry_new ();
  gtk_widget_show (ADMODIFYMATRICULE);
  gtk_fixed_put (GTK_FIXED (fixed3), ADMODIFYMATRICULE, 208, 280);
  gtk_widget_set_size_request (ADMODIFYMATRICULE, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (ADMODIFYMATRICULE), 8226);

  ADMODIFYPHONENUMBER = gtk_entry_new ();
  gtk_widget_show (ADMODIFYPHONENUMBER);
  gtk_fixed_put (GTK_FIXED (fixed3), ADMODIFYPHONENUMBER, 208, 336);
  gtk_widget_set_size_request (ADMODIFYPHONENUMBER, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (ADMODIFYPHONENUMBER), 8226);

  label21 = gtk_label_new (_("phone number"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed3), label21, 72, 344);
  gtk_widget_set_size_request (label21, 112, 24);

  label20 = gtk_label_new (_("matricule"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed3), label20, 72, 288);
  gtk_widget_set_size_request (label20, 96, 24);

  label18 = gtk_label_new (_("number of spaces"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed3), label18, 48, 224);
  gtk_widget_set_size_request (label18, 120, 24);

  label17 = gtk_label_new (_("date"));
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed3), label17, 80, 152);
  gtk_widget_set_size_request (label17, 49, 17);

  nbrspaces = gtk_entry_new ();
  gtk_widget_show (nbrspaces);
  gtk_fixed_put (GTK_FIXED (fixed3), nbrspaces, 208, 216);
  gtk_widget_set_size_request (nbrspaces, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (nbrspaces), 8226);

  label25ala = gtk_label_new ("");
  gtk_widget_show (label25ala);
  gtk_fixed_put (GTK_FIXED (fixed3), label25ala, 80, 400);
  gtk_widget_set_size_request (label25ala, 160, 64);

  button4ala = gtk_button_new ();
  gtk_widget_show (button4ala);
  gtk_fixed_put (GTK_FIXED (fixed3), button4ala, 296, 416);
  gtk_widget_set_size_request (button4ala, 120, 48);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (button4ala), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image6 = gtk_image_new_from_stock ("gtk-execute", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox4), image6, FALSE, FALSE, 0);

  ADMODIFYCHANGE = gtk_label_new_with_mnemonic (_("change"));
  gtk_widget_show (ADMODIFYCHANGE);
  gtk_box_pack_start (GTK_BOX (hbox4), ADMODIFYCHANGE, FALSE, FALSE, 0);

  label19 = gtk_label_new (_("modify"));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed3), label19, 192, 16);
  gtk_widget_set_size_request (label19, 153, 32);

  label16 = gtk_label_new (_("parking id"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed3), label16, 72, 80);
  gtk_widget_set_size_request (label16, 104, 24);

  g_signal_connect ((gpointer) button4ala, "clicked",
                    G_CALLBACK (on_button4ala_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window2ala, window2ala, "window2ala");
  GLADE_HOOKUP_OBJECT (window2ala, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (window2ala, ADMODIFYPARKINGID, "ADMODIFYPARKINGID");
  GLADE_HOOKUP_OBJECT (window2ala, ADMODIFYDATE, "ADMODIFYDATE");
  GLADE_HOOKUP_OBJECT (window2ala, ADMODIFYMATRICULE, "ADMODIFYMATRICULE");
  GLADE_HOOKUP_OBJECT (window2ala, ADMODIFYPHONENUMBER, "ADMODIFYPHONENUMBER");
  GLADE_HOOKUP_OBJECT (window2ala, label21, "label21");
  GLADE_HOOKUP_OBJECT (window2ala, label20, "label20");
  GLADE_HOOKUP_OBJECT (window2ala, label18, "label18");
  GLADE_HOOKUP_OBJECT (window2ala, label17, "label17");
  GLADE_HOOKUP_OBJECT (window2ala, nbrspaces, "nbrspaces");
  GLADE_HOOKUP_OBJECT (window2ala, label25ala, "label25ala");
  GLADE_HOOKUP_OBJECT (window2ala, button4ala, "button4ala");
  GLADE_HOOKUP_OBJECT (window2ala, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (window2ala, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (window2ala, image6, "image6");
  GLADE_HOOKUP_OBJECT (window2ala, ADMODIFYCHANGE, "ADMODIFYCHANGE");
  GLADE_HOOKUP_OBJECT (window2ala, label19, "label19");
  GLADE_HOOKUP_OBJECT (window2ala, label16, "label16");

  return window2ala;
}

GtkWidget*
create_dialog1ala (void)
{
  GtkWidget *dialog1ala;
  GtkWidget *dialog_vbox1;
  GtkWidget *fixed4;
  GtkWidget *iddelete;
  GtkWidget *label23;
  GtkWidget *label26ala;
  GtkWidget *dialog_action_area1;
  GtkWidget *deletebutton1ala;

  dialog1ala = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog1ala), _("supprimer"));
  gtk_window_set_type_hint (GTK_WINDOW (dialog1ala), GDK_WINDOW_TYPE_HINT_DIALOG);
  gtk_dialog_set_has_separator (GTK_DIALOG (dialog1ala), FALSE);

  dialog_vbox1 = GTK_DIALOG (dialog1ala)->vbox;
  gtk_widget_show (dialog_vbox1);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), fixed4, TRUE, TRUE, 0);

  iddelete = gtk_entry_new ();
  gtk_widget_show (iddelete);
  gtk_fixed_put (GTK_FIXED (fixed4), iddelete, 32, 64);
  gtk_widget_set_size_request (iddelete, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (iddelete), 8226);

  label23 = gtk_label_new (_("entrer l id de parking"));
  gtk_widget_show (label23);
  gtk_fixed_put (GTK_FIXED (fixed4), label23, 24, 16);
  gtk_widget_set_size_request (label23, 176, 32);

  label26ala = gtk_label_new ("");
  gtk_widget_show (label26ala);
  gtk_fixed_put (GTK_FIXED (fixed4), label26ala, 8, 104);
  gtk_widget_set_size_request (label26ala, 200, 56);

  dialog_action_area1 = GTK_DIALOG (dialog1ala)->action_area;
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  deletebutton1ala = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (deletebutton1ala);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog1ala), deletebutton1ala, GTK_RESPONSE_OK);
  GTK_WIDGET_SET_FLAGS (deletebutton1ala, GTK_CAN_DEFAULT);

  g_signal_connect ((gpointer) deletebutton1ala, "clicked",
                    G_CALLBACK (on_deletebutton1ala_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1ala, dialog1ala, "dialog1ala");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1ala, dialog_vbox1, "dialog_vbox1");
  GLADE_HOOKUP_OBJECT (dialog1ala, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (dialog1ala, iddelete, "iddelete");
  GLADE_HOOKUP_OBJECT (dialog1ala, label23, "label23");
  GLADE_HOOKUP_OBJECT (dialog1ala, label26ala, "label26ala");
  GLADE_HOOKUP_OBJECT_NO_REF (dialog1ala, dialog_action_area1, "dialog_action_area1");
  GLADE_HOOKUP_OBJECT (dialog1ala, deletebutton1ala, "deletebutton1ala");

  return dialog1ala;
}

