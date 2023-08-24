#include "form.h"
#include "main.h"
#include "txt.h"

/**
 * start - Handle the mode
 * Description: Mode can be INTERACTIVE or NON_INTERACTIVE
 *
 * @info: Struct of information about the shell
 **/
void start(general_t *info)
{
	start_prompt(info);
}
