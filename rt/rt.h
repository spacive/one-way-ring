#ifndef RT_H_
#define RT_H_

#include <inttypes.h>

// capacity of routing table
#define RT_SIZE   10

// initialize address table
void rtInit(void);
// returns -1 if address table is full
int rtAdd(uint8_t addr);
// returns -1 if address is not in address table
int rtCheckout(uint8_t addr);

#endif /* RT_H_ */
