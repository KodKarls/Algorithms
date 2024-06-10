#include <algorithm>
#include <iostream>
#include <limits>
#include <map>
#include <string>
#include <vector>

std::string findLowestCostCity( const std::map< std::string, int >& cityDistances,
                                const std::vector< std::string >& processed )
{
    std::string lowestCostCity;
    int lowestCost = std::numeric_limits< int >::max();

    for( const auto& distance : cityDistances )
    {
        if( distance.second < lowestCost &&
            std::find( processed.begin(), processed.end(), distance.first ) == processed.end() )
        {
            lowestCost = distance.second;
            lowestCostCity = distance.first;
        }
    }

    return lowestCostCity;
}

int findShortestRoad( const std::map< std::string, std::map< std::string, int > >& graph,
                      std::map< std::string, int >& citiesCosts,
                      std::map< std::string, std::string>& citiesParents,
                      const std::string& goal )
{
    std::vector< std::string > processed;

    std::string lowestCostCity = findLowestCostCity( citiesCosts, processed );
    while( !lowestCostCity.empty() )
    {
        int cost = citiesCosts[ lowestCostCity ];

        const auto& neighbours = graph.at( lowestCostCity );
        for( const auto& neighbour : neighbours )
        {
            int newCost = cost + neighbour.second;
            if( citiesCosts[ neighbour.first ] > newCost )
            {
                citiesCosts[ neighbour.first ] = newCost;
                citiesParents[ neighbour.first ] = lowestCostCity;
            }
        }
        processed.push_back( lowestCostCity );
        lowestCostCity = findLowestCostCity( citiesCosts, processed );
    }

    return citiesCosts[ goal ];
}

int main()
{
    std::map< std::string, std::map< std::string, int > > cities;
    cities[ "Olsztyn" ][ "Słupy" ] = 6;
    cities[ "Olsztyn" ][ "Łęgajny" ] = 2;

    cities[ "Słupy" ][ "Barczewo" ] = 1;

    cities[ "Łęgajny" ][ "Słupy" ] = 3;
    cities[ "Łęgajny" ][ "Barczewo" ] = 5;

    cities[ "Barczewo" ][ "Barczewo"] = 0;

    std::map< std::string, int > costs;
    costs[ "Olsztyn" ] = 0;
    costs[ "Słupy" ] = 6;
    costs[ "Łęgajny" ] = 2;
    costs[ "Barczewo" ] = std::numeric_limits< int >::max();

    std::map< std::string, std::string > parents;
    parents[ "Olsztyn" ] = "";
    parents[ "Słupy" ] = "Olsztyn";
    parents[ "Łęgajny" ] = "Olsztyn";
    parents[ "Barczewo" ] = "";

    std::string startCity = "Olsztyn";
    std::string goalCity = "Barczewo";

    int shortestRoad = findShortestRoad( cities, costs, parents, goalCity );
    std::cout << "The road from " << startCity << " to " << goalCity << " is " << shortestRoad << ".\n";

    return 0;
}
