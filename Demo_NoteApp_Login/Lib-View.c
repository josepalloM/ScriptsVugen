//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Library_LibTest()
{
	lr_start_transaction("01TrxLogin");
	truclient_step("1", "Function Login", "snapshot=LibTest_1.inf");
	lr_end_transaction("01TrxLogin",0);
	truclient_step("2", "Function Register", "snapshot=LibTest_2.inf");
	{
		truclient_step("2.1", "Click on Register link", "snapshot=LibTest_2.1.inf");
		truclient_step("2.2", "Signup", "snapshot=LibTest_2.2.inf");
		{
			truclient_step("2.2.1", "Click on Name textbox", "snapshot=LibTest_2.2.1.inf");
			truclient_step("2.2.2", "Type FuncArgs.Name; in Name textbox", "snapshot=LibTest_2.2.2.inf");
			truclient_step("2.2.3", "Click on Email emailbox", "snapshot=LibTest_2.2.3.inf");
			truclient_step("2.2.4", "Type FuncArgs.Email; in Email emailbox", "snapshot=LibTest_2.2.4.inf");
			truclient_step("2.2.5", "Click on Password passwordbox", "snapshot=LibTest_2.2.5.inf");
			truclient_step("2.2.6", "Type ******************* in Password passwordbox", "snapshot=LibTest_2.2.6.inf");
			truclient_step("2.2.7", "Click on Confirm Password passwordbox", "snapshot=LibTest_2.2.7.inf");
			truclient_step("2.2.8", "Type ****************... in Confirm Password passwordbox", "snapshot=LibTest_2.2.8.inf");
			truclient_step("2.2.9", "Click on Signup button", "snapshot=LibTest_2.2.9.inf");
		}
	}

	return 0;
}
