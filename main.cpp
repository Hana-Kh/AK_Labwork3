#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>


int main (int argc, char *argv[]){

	const char* short_options = "hvl::V::";

	const struct option long_options[] = {
		{"help",no_argument,		NULL,'h'},
		{"version",no_argument,	NULL,'v'},
		{"list",optional_argument,	NULL,'l'},
		{"Value",optional_argument,	NULL,'V'},
		{NULL,0,NULL,0}
	};

	int rez;
	int option_index = -1;
	int uniq[4] = {0, 0, 0, 0};

	while ((rez=getopt_long(argc,argv,short_options,
		long_options,&option_index))!=-1){

		switch(rez){
			case 'h': {
				if (uniq[0] == 0){
					printf("Help. Try -h or --help.\n");
					uniq[0] = 1;
				}
				break;
			}
			case 'v': {
				if (uniq[1] == 0){
					printf("Current version is 1.0.0\n");
					uniq[1] = 1;
				}
				break;
			}
	
			case 'l': {
				if (uniq[2] == 0){
					if (optarg!=NULL)
						printf("list = %s\n",optarg);
					else
						printf("found list without values\n");
					uniq[2] = 1;
				}
				break;
			}
	
			case 'V': {
				if (uniq[2] == 0){
					if (optarg!=NULL)
						printf("Value = %s\n",optarg);
					else
						printf("Value is not set\n");
					uniq[3] = 1;
				}
				break;
			}
			
			case '?': default: {
				printf("Unknown option\n");
				break;
			}
		}
		option_index = -1;
	}
	return 0;
}
