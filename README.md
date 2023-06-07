# Game description 

The game is going to be rock, paper, scissors between two players. The CPX board will track the wins for both players. If player 1 wins they will hit their button(D4) and then neo pixel 0 will light up(blue) and remain lit. A tone will also be played. On player 2’s side no lights will light up. If player 2 wins they will press their button (D5). Neo pixel 9 will then light up (white) and remain lit. A tone will also be played. If player 1 gets all their neo pixels lit up before player 2 then they win and vice versa. Winner side of neoPixels sparkles their color while the other player’s side will have black neopixels. Once a player wins there will be a victory sound.

The switch will reset the board back to no lights lit. 


# User Inputs/Outputs

## Input: D4(buttonL) - Player 1 score keeping button

Output: neo pixel 0 will light up and every win after, neo pixel 1, 2, 3, 4 will light up and remain lit till all 5 are lit up.

Output when +1 score: playTone(player1 win)

Output when win(all 5 neo pixels lit up): playTone victory sound / player 1 side will sparkle(blue) player 2 side will be black


## Input: D5(buttonR) - Player 2 score keeping button	

Output: neo pixel 5 will light up and every win after, neo pixel 6, 7, 8, 9 will light up and remain lit till all 5 are lit up. 

Output when +1 score: playTone(player2 win)

Output when win(all 5 neo pixels lit up): playTone victory sound / player 2 side will sparkle(white) player 1 side will be black

## Input: D7(switch) - after game ends or players want to restart switch interrupt mode: CHANGE

Lights will restart and so will the game
