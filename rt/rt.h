#ifndef RT_H_
#define RT_H_

// capacity of routing table
#define RT_SIZE   10

// initialize address table
void rtInit(void);
// returns -1 if address table is full
int rtAdd(char * addr);
// returns -1 if address is not in address table
int rtCheckout(char * addr);

// private functions
static void insertAddress(char * addr, int slot);
static int getEmptySlot(void);
static void dropAddress(int slot);
static int findAddress(char * addr);

#endif /* RT_H_ */
