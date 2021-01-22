/* time interval in seconds to sleep before looking for updates in the main loop */
#define SLEEPINTERVAL			1

#define PATH(name)			"/home/juan/.local/bin/status-bar/"name

/* If interval of a block is set to 0, the block will only be updated once at startup.
 * If interval is set to a negative value, the block will never be updated in the main loop.
 * Set signal to 0 if signalling is not required for the block.
 * Signal must be less than 10 for clickable blocks.
 * If multiple realtime signals are pending, then the lowest numbered signal is delivered first. */

/* pathu - path of the program whose output is to be used for status text
 * pathc - path of the program to be executed on clicks */
static Block blocks[] = {
/*	pathu				pathc					interval	signal */

//  { PATH("spotify-bar"),	NULL,					 5,		6},
  { PATH("volume"),		PATH("volume_button"),	                 0,		4},	
  { PATH("battery"),		NULL,		                       120,		2},
  { PATH("fecha"),		PATH("date_button"),			60,		3},
  { PATH("red"),	        PATH("red_button"),                     30,		5},
//{ PATH("cpu-temp"),		NULL,		                        15,		7},
//{ PATH("arch"),	        NULL,	                              3600,		1},
        { NULL } /* just to mark the end of the array */
};

static const char *delim =  " ";
