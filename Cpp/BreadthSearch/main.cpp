#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>

bool isReachedGoal( const std::string& city, const std::string& goal )
{
    return city == goal;
}

int findShortestRoad( const std::map< std::string, std::vector< std::string > >& graph,
                      const std::string& start, const std::string& goal )
{
    std::queue< std::pair< std::string, int > > searchQueue( { { start, 0 } } );
    std::set< std::string > searched;

    while( !searchQueue.empty() )
    {
        auto [ current_city, distance ] = searchQueue.front();
        searchQueue.pop();

        if( isReachedGoal( current_city, goal ) )
        {
            return distance;
        }

        if( searched.find( current_city ) == searched.end() )
        {
            searched.insert( current_city );
            for( const auto& neighbor : graph.at( current_city ) )
            {
                searchQueue.emplace( neighbor, distance + 1 );
            }
        }
    }

    return -1;
}

int main()
{
    std::map< std::string, std::vector< std::string > > cities = {
            {"Olsztyn", { "Dobre Miasto", "Biskupiec", "Szczytno", "Olsztynek", "Ostróda", "Morąg" } },
            {"Dobre Miasto", { "Orneta", "Lidzbark Warmiński" } },
            {"Biskupiec", { "Mrągowo" } },
            {"Szczytno", { "Myszyniec", "Chorzele" } },
            {"Olsztynek", { "Nidzica" } },
            {"Ostróda", { "Olsztynek", "Lubawa", "Iława" } },
            {"Morąg", { "Orneta", "Pasłęk" } },
            {"Lidzbark Warmiński", { "Bartoszyce", "Górowo Iławeckie" } },
            {"Orneta", {} },
            {"Bartoszyce", {} },
            {"Górowo Iławeckie", {} },
            {"Mrągowo", { "Mikołajki" } },
            {"Mikołajki", { "Orzysz" } },
            {"Orzysz", {} },
            {"Myszyniec", { "Ostrołęka" } },
            {"Ostrołęka", {} },
            {"Chorzele", {} },
            {"Nidzica", { "Mława" } },
            {"Mława", {} },
            {"Lubawa", {} },
            {"Iława", { "Grudziąc" } },
            {"Grudziąc", {} },
            {"Pasłęk", { "Elbląg", "Morąg" } },
            {"Elbląg", {} }
    };

    std::string startCity = "Olsztyn";
    std::string goalCity = "Elbląg";

    int shortestRoad = findShortestRoad( cities, startCity, goalCity );
    if( shortestRoad == -1 )
    {
        std::cout << "The road from " << startCity << " to " << goalCity << " is not exist.\n";
    }
    else
    {
        std::cout << "The road from " << startCity << " to " << goalCity << " " << shortestRoad << ".\n";
    }

    return 0;
}
