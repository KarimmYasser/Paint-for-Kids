#include "GUI\Input.h"
#include "GUI\Output.h"
//tst
//test2
//This is a test code to test the Input and Output classes

int main()
{
	int x,y;

	//Create Input and Output objects to test
	Output *pOut = new Output();
	Input *pIn = pOut->CreateInput();

	//Starting the test
	pOut->PrintMessage("This demo is to test input and output classes, Click anywhere to start the test");
	pIn->GetPointClicked(x,y);	//Wait for any click


	///////////////////////////////////////////////////////////////////////////////////
	// TEST 1:	
	//			Create The FULL Tool bar, the drawing area and the status bar	
	//			This has already been done through the constrcutor of class Output
	///////////////////////////////////////////////////////////////////////////////////

	pOut->PrintMessage("TEST1: Drawing Tool bar and Status bar, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 2:	
	//			Drawing all the Figures with all possible states: 
	//			Non-filled, Filled, and highlighted in both cases			
	///////////////////////////////////////////////////////////////////////////////////
	
	pOut->PrintMessage("TEST2: Now we will show that Output class can draw any figure in any state, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	GfxInfo gfxInfo;//to be used with draw function of the class Ouput
	Point P1, P2, P3;

	/// 2.1- Rectangle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Rectangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	
	// 2.1.1 - Drawing non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawRect(P1, P2, gfxInfo, false);

	// 2.1.2 - Drawing highlighted non-filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);


	// 2.1.3 - Drawing a filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GREEN;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawRect(P1, P2, gfxInfo, false);


	// 2.1.4 - Drawing a highlighted filled rectangle
	pOut->PrintMessage("Drawing a Rectangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->DrawRect(P1, P2, gfxInfo, true);



	pOut->PrintMessage("Drawing a Rectangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.2- Square Test ///
	/// ============== 
	// 2.2.1 - Drawing non-filled square
	
	pOut->PrintMessage("Drawing a Square, Non-Filled,Click a center point");
	pIn->GetPointClicked(P1.x, P1.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawSqr(P1, gfxInfo, false);

	// 2.2.2 - Drawing highlighted non-filled square
	pOut->PrintMessage("Drawing a Square, normal and Highlighted, Click to continue");
	pIn->GetPointClicked(x, y);	//Wait for any click

	pOut->PrintMessage("Drawing a Square, Highlighted and not filled, Click to highlight");
	pIn->GetPointClicked(x, y);
	pOut->DrawSqr(P1, gfxInfo, true);
	///TODO: Add code to draw Square, Normal and Highlighted

	pOut->PrintMessage("Drawing a Square Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	/// 2.3- Triangle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Triangle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	///TODO: Add code to draw Triangle in all possible states

	// 2.3.1 - Drawing non-filled Triangle
	pOut->PrintMessage("Drawing a Triangle ==> non-filled,  Click three points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	pIn->GetPointClicked(P3.x, P3.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawTr(P1, P2, P3 , gfxInfo, false);

	// 2.3.2 - Drawing highlighted non-filled Triangle
	pOut->PrintMessage("Drawing a Triangle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawTr(P1, P2, P3 ,gfxInfo, true);


	// 2.3.3 - Drawing a filled Triangle
	pOut->PrintMessage("Drawing a Triangle ==> filled,  Click three points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);
	pIn->GetPointClicked(P3.x, P3.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = RED;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawTr(P1, P2, P3, gfxInfo, false);


	// 2.3.4 - Drawing a highlighted filled Triangle
	pOut->PrintMessage("Drawing a Triangle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawTr(P1, P2, P3, gfxInfo, true);


	pOut->PrintMessage("Drawing a Triangle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();
	
	/// 2.4- Hexagon Test ///
	/// =================== 
	pOut->PrintMessage("Drawing a Hexagon, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click

	///TODO: Add code to draw Hexagon in all possible states
	// 2.4.1 - Drawing non-filled Hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> non-filled,  Click one point");
	pIn->GetPointClicked(P1.x, P1.y);


	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawHex(P1, gfxInfo, false);

	// 2.4.2 - Drawing highlighted non-filled Hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawHex(P1, gfxInfo, true);


	// 2.4.3 - Drawing a filled Hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> filled,  Click one point");
	pIn->GetPointClicked(P1.x, P1.y);


	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = ORANGE;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawHex(P1, gfxInfo, false);


	// 2.4.4 - Drawing a highlighted filled Hexagon
	pOut->PrintMessage("Drawing a Hexagon ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawHex(P1, gfxInfo, true);





	pOut->PrintMessage("Drawing a Hexagon Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();
	
	/// 2.5- Circle Test ///
	/// =================== 
	pOut->PrintMessage("Drawing an Circle, filled/non-filled and Highlighted filled/non-filled,  Click to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	///TODO: Add code to draw Circle in all possible states

	// 2.5.1 - Drawing non-filled Circle
	pOut->PrintMessage("Drawing a Circle ==> non-filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 5;
	gfxInfo.DrawClr = BLACK;	//any color for border
	gfxInfo.isFilled = false;	//Figure is NOT filled
	pOut->DrawCirc(P1,P2, gfxInfo, false);

	// 2.5.2 - Drawing highlighted non-filled Circle
	pOut->PrintMessage("Drawing a Circle ==> Highlighted non-filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawCirc(P1, P2, gfxInfo, true);


	// 2.5.3 - Drawing a filled Circle
	pOut->PrintMessage("Drawing a Circle ==> filled,  Click two points");
	pIn->GetPointClicked(P1.x, P1.y);
	pIn->GetPointClicked(P2.x, P2.y);

	gfxInfo.BorderWdth = 6;
	gfxInfo.DrawClr = BLUE;	//any color for border
	gfxInfo.FillClr = GOLD;//any color for filling
	gfxInfo.isFilled = true;//Figure is filled
	pOut->DrawCirc(P1, P2, gfxInfo, false);


	// 2.5.4 - Drawing a highlighted filled Circle
	pOut->PrintMessage("Drawing a Circle ==> Highlighted filled, Click to Highlight");
	pIn->GetPointClicked(x, y);	//Wait for any click
	pOut->DrawCirc(P1, P2, gfxInfo, true);







	pOut->PrintMessage("Drawing a Circle Test ==> OK,  Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();
	
	///////////////////////////////////////////////////////////////////////////////////
	// TEST 3: 
	//			Input Class: Read strings from the user
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST3: Now Time to test class Input, Click anywhere to continue");
	pIn->GetPointClicked(x,y);	//Wait for any click
	
	pOut->PrintMessage("Testing Input ability to read strings");

	string message = pIn->GetSrting(pOut);
	pOut->ClearStatusBar();
	pOut->PrintMessage("You Entered ( " + message + " )");
	
	///TODO: Add code here to 
	// 1- Read a string from the user on the status bar
	// 2- After reading the string clear the status bar
	// 3- print on the status bar "You Entered" then print the string

	pIn->GetPointClicked(x,y);	//Wait for any click
	pOut->ClearDrawArea();

	///////////////////////////////////////////////////////////////////////////////////
	// TEST 4: 
	//			Input Class : Check for the user action
	///////////////////////////////////////////////////////////////////////////////////
	pOut->PrintMessage("TEST4: Testing Input ability to detect User Action, click anywhere");

	ActionType ActType;
	
	///TODO:  
	//You must add a case for each action (both Draw mode and Play mode actions)
	//Add cases for the missing actions below
	do
	{
		ActType = pIn->GetUserAction();

		switch (ActType)
		{
		case DRAW_RECT:
				pOut->PrintMessage("Action: Draw a Rectangle , Click anywhere");
				break;

		case DRAW_SQUARE:
			pOut->PrintMessage("Action: Draw a Square , Click anywhere");
			break;

		case DRAW_TRIANGLE:
			pOut->PrintMessage("Action: Draw a Triangle , Click anywhere");
			break;

		case DRAW_HEXAGON:
			pOut->PrintMessage("Action: Draw a Hexagon , Click anywhere");
			break;

		case DRAW_CIRCLE:
			pOut->PrintMessage("Action: Draw a Circle , Click anywhere");
			break;

		case STATUS:
				pOut->PrintMessage("Action: a click on the Status Bar, Click anywhere");
				break;
		
		case SAVE:
			pOut->PrintMessage("Action: Save Graph, Click anywhere");
			break;
		
		case LOAD:
			pOut->PrintMessage("Action: Load Graph, Click anywhere");
			break;

		case MOVE:
			pOut->PrintMessage("Action: Move Figure, Click anywhere");
			break;

		case CLEAR:
			pOut->PrintMessage("Action: Clear All, Click anywhere");
			break;

		case DELET:
			pOut->PrintMessage("Action: Delete Figure, Click anywhere");
			break;

		case DRAWING_AREA:
				pOut->PrintMessage("Action: a click on the Drawing Area, Click anywhere");
				break;

		case EMPTY:
				pOut->PrintMessage("Action: a click on empty area in the Design Tool Bar, Click anywhere");
				break;

		case TO_DRAW:
				pOut->PrintMessage("Action: Switch to Draw Mode, creating simualtion tool bar");
				pOut->CreateDrawToolBar();
				break;

		case TO_PLAY:
				pOut->PrintMessage("Action: Switch to Play Mode, creating Design tool bar");
				pOut->CreatePlayToolBar();
				break;


		///TODO: Add more cases for the other action types


		case EXIT:				
				break;
		}
	}while(ActType != EXIT);


	/// Exiting
	pOut->PrintMessage("Action: EXIT, test is finished, click anywhere to exit");
	pIn->GetPointClicked(x,y);


	delete pIn;
	delete pOut;	
	return 0;
}


