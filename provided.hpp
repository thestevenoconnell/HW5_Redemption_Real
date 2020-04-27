#ifndef PROVIDED_HPP
#define PROVIDED_HPP

#include <string>

const int MAX_NB_GAMES = 200;

/*  Function readGameTitles
 *  fileName: path to the file containing titles
 *  ngames: number of games cousins are bringing to the house
 *  gameTitles: array where row i stores the title for game i
 *  Return value: none
 *  Throws runtime_error if file cannot be opened
 */
void readGameTitles(
    const std::string& fileName,
    const size_t ngames,
    std::string gameTitles[MAX_NB_GAMES]);

/*  Function printGamesPlayedInVacation
 *  start:  first day of the vacation (1 <= start < 365)
 *  duration: number of vacation days
 *  plan: array with 366 positions with the sequence of games 
 *        to be played over the year. In other words, 
 *        plan[k] indicates the game planned for day k (1 <= k <= 365) 
 *  gameTitles: array with game titles
 *  ngames: number of games
 *  Return value: none. 
 */
void printGamesPlayedInVacation(
    const size_t start,
    const size_t duration,
    int plan[366],
    const std::string gameTitles[MAX_NB_GAMES],
    const size_t ngames);

#endif
