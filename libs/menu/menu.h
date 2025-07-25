#ifndef MENU_H
#define MENU_H

enum
{
	main_m,
	create_autoexec,
	change_output_file_name,
	change_input_directory,
	change_output_directory,
	add_aditional_input_file,
	QUIT
};

void print_menu(int menu_index);

int main_menu();
int create_autoexec_menu();
int change_output_file_name_menu();
int change_input_directory_menu();
int change_output_directory_menu();
int add_aditional_input_file_menu();

#endif