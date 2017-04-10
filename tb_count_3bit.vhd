--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:17:16 04/07/2017
-- Design Name:   
-- Module Name:   G:/Projekty/VSLI/PUL/lab3z1/tb_count_3bit.vhd
-- Project Name:  lab3z1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: count_3bit
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_count_3bit IS
END tb_count_3bit;
 
ARCHITECTURE behavior OF tb_count_3bit IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT count_3bit
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         output : OUT  std_logic_vector(2 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal output : std_logic_vector(2 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: count_3bit PORT MAP (
          clk => clk,
          reset => reset,
          output => output
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin	
		reset<='1';
		wait for 10 ns;
		reset<='0';
		wait for 2000ns ;
		
      --assert false severity failure;
		assert false severity failure;
   end process;

END;
