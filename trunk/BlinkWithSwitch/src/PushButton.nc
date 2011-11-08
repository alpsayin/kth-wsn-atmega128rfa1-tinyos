
interface PushButton
{
	async command bool get();
	async command void waitUntilPressed();
}