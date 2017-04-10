----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:20:43 04/07/2017 
-- Design Name: 
-- Module Name:    count_3bit - a_count_3bit 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity count_3bit is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           output : out  STD_LOGIC_vector(2 downto 0)
			  );
end count_3bit;

architecture a_count_3bit of count_3bit is

	type state_type is (s0,s1);
	signal state 	: state_type;
	signal buff 	: Std_logic_vector(22 downto 0)	:= (others =>'0');
	--signal buff 	: Std_logic_vector(2 downto 0)	:= (others =>'0'); --testowy
	signal count	: std_logic_vector(2 downto 0)	:= (others =>'0');
	
begin

	counter: process (clk, reset)
	begin
	
		if(reset = '1') then
			state<= s0;
			output<= (others=>'0');	
		elsif( clk'event and clk ='1' and reset ='0')	then
			if(buff ="10011000100101101000000") then
			--if(buff ="111") then --testowy
				case state  is
					When s0 =>
						if(count = "111") then
							state<= s1;
						else
							count<= count+"01";
							state<= s0;
						end if;
					when s1 =>
						if(count ="000") then
							state<= s0;
						else
							count<= count-"01";
							state<= s1;
						end if;
				end case;
				--buff<="000"; --testowy
				buff<=(others =>'0');				
			end if;
			buff<= buff+"01";
		end if;
		output<= count;
		
	end process;

	
	
end a_count_3bit;

