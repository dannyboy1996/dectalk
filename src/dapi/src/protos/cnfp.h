extern	int main(int argc,char **argv );
extern	int usage(void);
extern	int show_dtpcs(int quiet);
extern	void find_free(void);
extern	unsigned int check_bios(unsigned int offset);
extern	int check_ram(unsigned int offset);
extern	int show_free(void);
extern	int recommed_switches(void);
extern	void find_bases(void);
extern	void find_irqs(void);
extern	int set_config(void);
extern	void __far __interrupt config_catch(union INT_REGS int_frame);
extern	void __far __interrupt config_timer(union INT_REGS int_frame);
extern	void get_status(void);
extern	void put_command(unsigned int cmd);
extern	int wait_bit(int secs,unsigned int bit);
extern	int wait_mode(int secs,unsigned int pattern);
extern	int force_status(void);
