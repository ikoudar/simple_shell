typedef struct __attribute__((__packed__))
{
	int argc;                 /* Number of arguments received */
	char **argv;              /* Arguments received */
	int mode;                 /* INTERACTIVE or NON_INTERACTIVE */
	int error_code;           /* Error code for error message */
	char *command;            /* Command to execute */
	int n_commands;           /* Number of commands executed */
	char *value_path;         /* Path of a command */
	int is_current_path;      /* Check if is current path or not */
	int status_code;          /* Last exit code */
	char *buffer;             /* Line readed with the getline */
	char **arguments;         /* Line splited into words */
	char *environment;        /* Last environment variable get it */
	int pid;                  /* Process id */
} general_t;

typedef struct __attribute__((__packed__))
{
	char *message;            /* Error message */
	int code;                 /* Error code for identify the error message */
} error_t;

typedef struct __attribute__((__packed__))
{
	char *command;            /* arguments[0] = cmd */
	void (*func)(general_t *info, char **arguments);
} builtin_t;
