#ifndef NUMBER
#define NUMBER
class Number
{
	public:
		Number(float num)
		{
			number = num;
		}
		float getNumber()
		{
			return number;
		}
	protected:
		float number;
};
#endif
