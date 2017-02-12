#include"headfile.h"
#include"http_server.h"

using namespace std;

int main(int argc,char *argv[]){
	if(argc!=2){
		printf("Usage: %s <port>",argv[0]);
		exit(1);
	}
	http_server hts;
	hts.start(argv[0]);
	htp.run();
	return 0;
}


