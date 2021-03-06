void stage_cu()
{
   // Writing instruction memory
   Xil_Out32(0x50001004, 0);
   Xil_Out32(0x50001000, 0xB00C0000);
   Xil_Out32(0x50001004, 4);
   Xil_Out32(0x50001000, 0xBE8D03FF);
   Xil_Out32(0x50001004, 8);
   Xil_Out32(0x50001000, 0x001E0000);
   Xil_Out32(0x50001004, 12);
   Xil_Out32(0x50001000, 0xB002002D);
   Xil_Out32(0x50001004, 16);
   Xil_Out32(0x50001000, 0xC0800D02);
   Xil_Out32(0x50001004, 20);
   Xil_Out32(0x50001000, 0xBF810000);

   // Writing SGPRs for wavefront 1
   Xil_Out32(0x50002004, 0);
   Xil_Out32(0x50002008, 0x21);
   Xil_Out32(0x5000200C, 0x15);
   Xil_Out32(0x50002010, 0xC);
   Xil_Out32(0x50002014, 0x17);
   Xil_Out32(0x50002000, 1);
   Xil_Out32(0x50002004, 16);
   Xil_Out32(0x50002008, 0x1C);
   Xil_Out32(0x5000200C, 0x22);
   Xil_Out32(0x50002010, 0x4);
   Xil_Out32(0x50002014, 0x28);
   Xil_Out32(0x50002000, 1);
   Xil_Out32(0x50002004, 32);
   Xil_Out32(0x50002008, 0x25);
   Xil_Out32(0x5000200C, 0x16);
   Xil_Out32(0x50002010, 0x0);
   Xil_Out32(0x50002014, 0x0);
   Xil_Out32(0x50002000, 1);
}
