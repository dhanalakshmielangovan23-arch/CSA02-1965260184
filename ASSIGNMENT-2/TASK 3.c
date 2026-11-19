unsigned char on(unsigned char r,int d) { return r | (1u<<d); }
unsigned char off(unsigned char r,int d) { return r & ~(1u<<d); }
unsigned char toggle(unsigned char r,int d) { return r ^ (1u<<d); }
int is_on(unsigned char r,int d) { return (r>>d)&1u; }
