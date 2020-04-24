/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#001111",   /* after initialization */
	[INPUT] =  "#112222",   /* during input */
	[FAILED] = "#220000",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "XD";

/* text color */
static const char * text_color = "#555555";

/* text size (must be a valid size) */
static const char * font_name = "-b&h-lucida-medium-r-normal-sans-24-240-75-75-p-136-iso8859-15";

/* time in seconds before the monitor shuts down */
static const int monitortime = 15;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 3;
