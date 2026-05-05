---
publish: true
tags: []
aliases: []
---

Um Buchstaben und weitere Textzeichen darzustellen, verwendet man verschiedene Zeichenkodierungen.

# ASCII-Standard

Der American Standard Code for Information Interchange bzw. ASCII-Standard beeinhaltet 128 Zeichen, die mithilfe von 7 Bits dargestellt werden können.

Die Tabelle wurde von Gemini erstellt.

| Index   | Hex | Oct | Binary   | Char   | Full Name              | Function (Control Only)               |
| ------- | --- | --- | -------- | ------ | ---------------------- | ------------------------------------- |
| **0**   | 00  | 000 | 00000000 | NUL    | Null                   | Null character                        |
| **1**   | 01  | 001 | 00000001 | SOH    | Start of Heading       | First character of message header     |
| **2**   | 02  | 002 | 00000010 | STX    | Start of Text          | First character of message text       |
| **3**   | 03  | 003 | 00000011 | ETX    | End of Text            | Terminator of message text            |
| **4**   | 04  | 004 | 00000100 | EOT    | End of Transmission    | End of data transmission              |
| **5**   | 05  | 005 | 00000101 | ENQ    | Enquiry                | Request for response                  |
| **6**   | 06  | 006 | 00000110 | ACK    | Acknowledge            | Affirmative response                  |
| **7**   | 07  | 007 | 00000111 | BEL    | Bell                   | Audible or visual signal              |
| **8**   | 08  | 010 | 00001000 | BS     | Backspace              | Move cursor back one position         |
| **9**   | 09  | 011 | 00001001 | HT     | Horizontal Tab         | Move cursor to next tab stop          |
| **10**  | 0A  | 012 | 00001010 | LF     | Line Feed              | Move cursor to next line              |
| **11**  | 0B  | 013 | 00001011 | VT     | Vertical Tab           | Move cursor to next vertical tab stop |
| **12**  | 0C  | 014 | 00001100 | FF     | Form Feed              | Printer: load next page               |
| **13**  | 0D  | 015 | 00001101 | CR     | Carriage Return        | Move cursor to start of line          |
| **14**  | 0E  | 016 | 00001110 | SO     | Shift Out              | Switch to alternative char set        |
| **15**  | 0F  | 017 | 00001111 | SI     | Shift In               | Return to standard char set           |
| **16**  | 10  | 020 | 00010000 | DLE    | Data Link Escape       | Change meaning of following chars     |
| **17**  | 11  | 021 | 00010001 | DC1    | Device Control 1       | Terminal: Resume (XON)                |
| **18**  | 12  | 022 | 00010010 | DC2    | Device Control 2       | Device-specific control               |
| **19**  | 13  | 023 | 00010011 | DC3    | Device Control 3       | Terminal: Pause (XOFF)                |
| **20**  | 14  | 024 | 00010100 | DC4    | Device Control 4       | Device-specific control               |
| **21**  | 15  | 025 | 00010101 | NAK    | Negative Ack.          | Negative response                     |
| **22**  | 16  | 026 | 00010110 | SYN    | Synchronous Idle       | Synchronize transmission              |
| **23**  | 17  | 027 | 00010111 | ETB    | End of Trans. Blk      | End of a block of data                |
| **24**  | 18  | 030 | 00011000 | CAN    | Cancel                 | Ignore previous data                  |
| **25**  | 19  | 031 | 00011001 | EM     | End of Medium          | End of physical medium                |
| **26**  | 1A  | 032 | 00011010 | SUB    | Substitute             | Replacement for invalid char          |
| **27**  | 1B  | 033 | 00011011 | ESC    | Escape                 | Start of escape sequence              |
| **28**  | 1C  | 034 | 00011100 | FS     | File Separator         | Information separator (level 4)       |
| **29**  | 1D  | 035 | 00011101 | GS     | Group Separator        | Information separator (level 3)       |
| **30**  | 1E  | 036 | 00011110 | RS     | Record Separator       | Information separator (level 2)       |
| **31**  | 1F  | 037 | 00011111 | US     | Unit Separator         | Information separator (level 1)       |
| **32**  | 20  | 040 | 00100000 | Space  | SPACE                  | -                                     |
| **33**  | 21  | 041 | 00100001 | **!**  | EXCLAMATION MARK       | -                                     |
| **34**  | 22  | 042 | 00100010 | **"**  | QUOTATION MARK         | -                                     |
| **35**  | 23  | 043 | 00100011 | **#**  | NUMBER SIGN            | -                                     |
| **36**  | 24  | 044 | 00100100 | **$**  | DOLLAR SIGN            | -                                     |
| **37**  | 25  | 045 | 00100101 | **%**  | PERCENT SIGN           | -                                     |
| **38**  | 26  | 046 | 00100110 | **&**  | AMPERSAND              | -                                     |
| **39**  | 27  | 047 | 00100111 | **'**  | APOSTROPHE             | -                                     |
| **40**  | 28  | 050 | 00101000 | **(**  | LEFT PARENTHESIS       | -                                     |
| **41**  | 29  | 051 | 00101001 | **)**  | RIGHT PARENTHESIS      | -                                     |
| **42**  | 2A  | 052 | 00101010 | *****  | ASTERISK               | -                                     |
| **43**  | 2B  | 053 | 00101011 | **+**  | PLUS SIGN              | -                                     |
| **44**  | 2C  | 054 | 00101100 | **,**  | COMMA                  | -                                     |
| **45**  | 2D  | 055 | 00101101 | **-**  | HYPHEN-MINUS           | -                                     |
| **46**  | 2E  | 056 | 00101110 | **.**  | FULL STOP              | -                                     |
| **47**  | 2F  | 057 | 00101111 | **/**  | SOLIDUS                | -                                     |
| **48**  | 30  | 060 | 00110000 | **0**  | DIGIT ZERO             | -                                     |
| **49**  | 31  | 061 | 00110001 | **1**  | DIGIT ONE              | -                                     |
| **50**  | 32  | 062 | 00110010 | **2**  | DIGIT TWO              | -                                     |
| **51**  | 33  | 063 | 00110011 | **3**  | DIGIT THREE            | -                                     |
| **52**  | 34  | 064 | 00110100 | **4**  | DIGIT FOUR             | -                                     |
| **53**  | 35  | 065 | 00110101 | **5**  | DIGIT FIVE             | -                                     |
| **54**  | 36  | 066 | 00110110 | **6**  | DIGIT SIX              | -                                     |
| **55**  | 37  | 067 | 00110111 | **7**  | DIGIT SEVEN            | -                                     |
| **56**  | 38  | 070 | 00111000 | **8**  | DIGIT EIGHT            | -                                     |
| **57**  | 39  | 071 | 00111001 | **9**  | DIGIT NINE             | -                                     |
| **58**  | 3A  | 072 | 00111010 | **:**  | COLON                  | -                                     |
| **59**  | 3B  | 073 | 00111011 | **;**  | SEMICOLON              | -                                     |
| **60**  | 3C  | 074 | 00111100 | **<**  | LESS-THAN SIGN         | -                                     |
| **61**  | 3D  | 075 | 00111101 | **=**  | EQUALS SIGN            | -                                     |
| **62**  | 3E  | 076 | 00111110 | **>**  | GREATER-THAN SIGN      | -                                     |
| **63**  | 3F  | 077 | 00111111 | **?**  | QUESTION MARK          | -                                     |
| **64**  | 40  | 100 | 01000000 | **@**  | COMMERCIAL AT          | -                                     |
| **65**  | 41  | 101 | 01000001 | **A**  | LATIN CAPITAL LETTER A | -                                     |
| **66**  | 42  | 102 | 01000010 | **B**  | LATIN CAPITAL LETTER B | -                                     |
| **67**  | 43  | 103 | 01000011 | **C**  | LATIN CAPITAL LETTER C | -                                     |
| **68**  | 44  | 104 | 01000100 | **D**  | LATIN CAPITAL LETTER D | -                                     |
| **69**  | 45  | 105 | 01000101 | **E**  | LATIN CAPITAL LETTER E | -                                     |
| **70**  | 46  | 106 | 01000110 | **F**  | LATIN CAPITAL LETTER F | -                                     |
| **71**  | 47  | 107 | 01000111 | **G**  | LATIN CAPITAL LETTER G | -                                     |
| **72**  | 48  | 110 | 01001000 | **H**  | LATIN CAPITAL LETTER H | -                                     |
| **73**  | 49  | 111 | 01001001 | **I**  | LATIN CAPITAL LETTER I | -                                     |
| **74**  | 4A  | 112 | 01001010 | **J**  | LATIN CAPITAL LETTER J | -                                     |
| **75**  | 4B  | 113 | 01001011 | **K**  | LATIN CAPITAL LETTER K | -                                     |
| **76**  | 4C  | 114 | 01001100 | **L**  | LATIN CAPITAL LETTER L | -                                     |
| **77**  | 4D  | 115 | 01001101 | **M**  | LATIN CAPITAL LETTER M | -                                     |
| **78**  | 4E  | 116 | 01001110 | **N**  | LATIN CAPITAL LETTER N | -                                     |
| **79**  | 4F  | 117 | 01001111 | **O**  | LATIN CAPITAL LETTER O | -                                     |
| **80**  | 50  | 120 | 01010000 | **P**  | LATIN CAPITAL LETTER P | -                                     |
| **81**  | 51  | 121 | 01010001 | **Q**  | LATIN CAPITAL LETTER Q | -                                     |
| **82**  | 52  | 122 | 01010010 | **R**  | LATIN CAPITAL LETTER R | -                                     |
| **83**  | 53  | 123 | 01010011 | **S**  | LATIN CAPITAL LETTER S | -                                     |
| **84**  | 54  | 124 | 01010100 | **T**  | LATIN CAPITAL LETTER T | -                                     |
| **85**  | 55  | 125 | 01010101 | **U**  | LATIN CAPITAL LETTER U | -                                     |
| **86**  | 56  | 126 | 01010110 | **V**  | LATIN CAPITAL LETTER V | -                                     |
| **87**  | 57  | 127 | 01010111 | **W**  | LATIN CAPITAL LETTER W | -                                     |
| **88**  | 58  | 130 | 01011000 | **X**  | LATIN CAPITAL LETTER X | -                                     |
| **89**  | 59  | 131 | 01011001 | **Y**  | LATIN CAPITAL LETTER Y | -                                     |
| **90**  | 5A  | 132 | 01011010 | **Z**  | LATIN CAPITAL LETTER Z | -                                     |
| **91**  | 5B  | 133 | 01011011 | **[**  | LEFT SQUARE BRACKET    | -                                     |
| **92**  | 5C  | 134 | 01011100 | *_*_   | REVERSE SOLIDUS        | -                                     |
| **93**  | 5D  | 135 | 01011101 | **]**  | RIGHT SQUARE BRACKET   | -                                     |
| **94**  | 5E  | 136 | 01011110 | **^**  | CIRCUMFLEX ACCENT      | -                                     |
| **95**  | 5F  | 137 | 01011111 | **_**  | LOW LINE               | -                                     |
| **96**  | 60  | 140 | 01100000 | **`**  | GRAVE ACCENT           | -                                     |
| **97**  | 61  | 141 | 01100001 | **a**  | LATIN SMALL LETTER A   | -                                     |
| **98**  | 62  | 142 | 01100010 | **b**  | LATIN SMALL LETTER B   | -                                     |
| **99**  | 63  | 143 | 01100011 | **c**  | LATIN SMALL LETTER C   | -                                     |
| **100** | 64  | 144 | 01100100 | **d**  | LATIN SMALL LETTER D   | -                                     |
| **101** | 65  | 145 | 01100101 | **e**  | LATIN SMALL LETTER E   | -                                     |
| **102** | 66  | 146 | 01100110 | **f**  | LATIN SMALL LETTER F   | -                                     |
| **103** | 67  | 147 | 01100111 | **g**  | LATIN SMALL LETTER G   | -                                     |
| **104   | 68  | 150 | 01101000 | **h**  | LATIN SMALL LETTER H   | -                                     |
| **105** | 69  | 151 | 01101001 | **i**  | LATIN SMALL LETTER I   | -                                     |
| **106** | 6A  | 152 | 01101010 | **j**  | LATIN SMALL LETTER J   | -                                     |
| **107** | 6B  | 153 | 01101011 | **k**  | LATIN SMALL LETTER K   | -                                     |
| **108** | 6C  | 154 | 01101100 | **l**  | LATIN SMALL LETTER L   | -                                     |
| **109** | 6D  | 155 | 01101101 | **m**  | LATIN SMALL LETTER M   | -                                     |
| **110** | 6E  | 156 | 01101110 | **n**  | LATIN SMALL LETTER N   | -                                     |
| **111** | 6F  | 157 | 01101111 | **o**  | LATIN SMALL LETTER O   | -                                     |
| **112** | 70  | 160 | 01110000 | **p**  | LATIN SMALL LETTER P   | -                                     |
| **113** | 71  | 161 | 01110001 | **q**  | LATIN SMALL LETTER Q   | -                                     |
| **114** | 72  | 162 | 01110010 | **r**  | LATIN SMALL LETTER R   | -                                     |
| **115** | 73  | 163 | 01110011 | **s**  | LATIN SMALL LETTER S   | -                                     |
| **116** | 74  | 164 | 01110100 | **t**  | LATIN SMALL LETTER T   | -                                     |
| **117** | 75  | 165 | 01110101 | **u**  | LATIN SMALL LETTER U   | -                                     |
| **118** | 76  | 166 | 01110110 | **v**  | LATIN SMALL LETTER V   | -                                     |
| **119** | 77  | 167 | 01110111 | **w**  | LATIN SMALL LETTER W   | -                                     |
| **120** | 78  | 170 | 01111000 | **x**  | LATIN SMALL LETTER X   | -                                     |
| **121** | 79  | 171 | 01111001 | **y**  | LATIN SMALL LETTER Y   | -                                     |
| **122** | 7A  | 172 | 01111010 | **z**  | LATIN SMALL LETTER Z   | -                                     |
| **123** | 7B  | 173 | 01111011 | **{**  | LEFT CURLY BRACKET     | -                                     |
| **124** | 7C  | 174 | 01111100 | **\|** | VERTICAL LINE          | -                                     |
| **125** | 7D  | 175 | 01111101 | **}**  | RIGHT CURLY BRACKET    | -                                     |
| **126** | 7E  | 176 | 01111110 | **~**  | TILDE                  | -                                     |
| **127** | 7F  | 177 | 01111111 | DEL    | Delete                 | Delete character                      |

## ISO 8859

Der Standard ISO 8859 ist eine Erweiterung für ASCII. Hier wird der 8. Bit für die Enkodierung von weiteren, regionabhängigen Zeichen verwendet.
