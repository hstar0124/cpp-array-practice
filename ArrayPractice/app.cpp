#include <iostream>
#include "Util.h"
#include "Map.h"
#include "Player.h"

using namespace std;

int main()
{
	// 커서 깜박임 On/Off
	SetCursorOnOff(false);

	while (true)
	{
		// 입력
		HandleKeyInput();

		// 로직
		HandleMove();

		// 출력
		PrintMap2D();
	}
}