
module PushButtonP
{
	provides interface Init;
	provides interface PushButton as PushButton0;
	uses interface GeneralIO;
}
implementation
{
	command error_t Init.init()
	{
		call GeneralIO.makeInput();
		if(call GeneralIO.isInput())
			return SUCCESS;
		return FAIL;
	}
	async command bool PushButton0.get()
	{
		return !call GeneralIO.get();
	}

	async command void PushButton0.waitUntilPressed()
	{
		volatile bool buttonState = TRUE;
		while(buttonState)
		{
			buttonState = call GeneralIO.get();	
		}
	}

}