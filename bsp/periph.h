
#define ADDR(x) (x -'A')

int periph_read (char addr,int * val);
void periph_write (char addr,int valeur);
void periph_inter(char addr);
void iperiph_write (char addr,int valeur);
void iperiph_inter(char addr);
void periph_even(char addr);

void simulateur_use(void);

static void int_2_hex(unsigned int val, char * str);

typedef union {	
	struct {
		unsigned char id;
		unsigned char rtr;
		unsigned int  val;
	}data;
	VP_INT  msg;
}CanFrame;

typedef struct {
	unsigned char maj;
	unsigned short val;
	UINT ev;
}Tperiph;

void periph_init(void);

extern Tperiph periph['z'-'A'];
