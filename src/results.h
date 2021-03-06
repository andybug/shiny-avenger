#ifndef RESULTS_H
#define RESULTS_H

#include <stdbool.h>
#include <time.h>

#define MAX_RESULTS 2048

struct result {
	int home_key;
	int away_key;
	short home_pts;
	short away_pts;
	bool neutral;
	time_t date;
};

extern struct result results[MAX_RESULTS];
extern int num_results;

extern void sort_results(void);
extern int result_exists(int key1, int key2, time_t date);

#endif
