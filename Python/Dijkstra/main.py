def find_lowest_cost_city(city_distances, processed):
    lowest_cost_city = None
    lowest_cost = float('inf')

    for distance in city_distances:
        cost = city_distances[distance]
        if cost < lowest_cost and distance not in processed:
            lowest_cost = cost
            lowest_cost_city = distance

    return lowest_cost_city


def find_shortest_road(graph, cities_costs, cities_parents, goal):
    processed = []

    lowest_cost_city = find_lowest_cost_city(cities_costs, processed)
    while lowest_cost_city is not None:
        cost = cities_costs[lowest_cost_city]
        neighbours = graph[lowest_cost_city]
        for n in neighbours.keys():
            new_cost = cost + neighbours[n]
            if cities_costs[n] > new_cost:
                cities_costs[n] = new_cost
                cities_parents[n] = lowest_cost_city
        processed.append(lowest_cost_city)
        lowest_cost_city = find_lowest_cost_city(cities_costs, processed)

    return cities_costs[goal]


if __name__ == '__main__':
    cities = {'Olsztyn': {}, 'Słupy': {}, 'Łęgajny': {}, 'Barczewo': {}}
    cities['Olsztyn']['Słupy'] = 6
    cities['Olsztyn']['Łęgajny'] = 2

    cities['Słupy']['Barczewo'] = 1

    cities['Łęgajny']['Słupy'] = 3
    cities['Łęgajny']['Barczewo'] = 5

    costs = {'Słupy': 6, 'Łęgajny': 2, 'Barczewo': float('inf')}

    parents = {'Słupy': 'Olsztyn', 'Łęgajny': 'Olsztyn', 'Barczewo': None}

    start_city = 'Olsztyn'
    goal_city = 'Barczewo'
    shortest_road = find_shortest_road(cities, costs, parents, goal_city)
    print(f'The road from {start_city} to {goal_city} is {shortest_road}.')
