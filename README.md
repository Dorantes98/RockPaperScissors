# Game description 

The game is going to be rock, paper, scissors between two players. The CPX board will track the wins for both players. If player 1 wins they will hit their button(D4) and the neo pixels on their side will flash(green) and then neo pixel 0 will stay lit(blue) while player 2’s side will flash (red) and no lights will stay lit. If player 2 wins they will press their button (D5) and then their side will flash green and player 1’s side will flash red. Neo pixel 9 will then stay lit (white). If player 1 gets all their neo pixels lit up before player 2 then they win and vice versa. Winner side of neoPixels sparkle their color
The switch (change) will reset the board back to no lights lit. 

# User Inputs/Outputs

## Input: D4(buttonL) - Player 1 score keeping button
Output: neo pixel 0-4 will flash green then neo pixel 0 will remain lit and every win after, neo pixel 1, 2, 3, 4 will light up and remain lit till all 5 are lit up.
Output when +1 score: playTone(player1 win)
Output when win(all 5 neo pixels lit up): playTone victory sound / player 1 side will sparkle(blue) player 2 side will be black


## Input: D5(buttonR) - Player 2 score keeping button	
Output: neo pixel 5-9 will flash green then neo pixel 5 will remain lit and every win after, neo pixel 6, 7, 8, 9 will light up and remain lit till all 5 are lit up. 
Output when +1 score: playTone(player2 win)
Output when win(all 5 neo pixels lit up): playTone victory sound / player 2 side will sparkle(white) player 1 side will be black

## Input: D7(switch) - after game ends or players want to restart switch interrupt mode: CHANGE
Lights will restart and so will the game
