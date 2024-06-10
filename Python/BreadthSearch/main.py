from collections import deque


def find_shortest_road(graph, start, goal):
    search_queue = deque([(start, 0)])
    searched = set()

    while search_queue:
        current_city, distance = search_queue.popleft()
        if is_reached_goal(current_city, goal):
            return distance
        if current_city not in searched:
            searched.add(current_city)
            for neighbor in graph[current_city]:
                search_queue.append((neighbor, distance + 1))

    return -1


def is_reached_goal(city, goal):
    return city == goal


if __name__ == '__main__':
    cities = {
        'Olsztyn': ['Dobre Miasto', 'Biskupiec', 'Szczytno', 'Olsztynek', 'Ostróda', 'Morąg'],
        'Dobre Miasto': ['Orneta', 'Lidzbark Warmiński'],
        'Biskupiec': ['Mrągowo'],
        'Szczytno': ['Myszyniec', 'Chorzele'],
        'Olsztynek': ['Nidzica'],
        'Ostróda': ['Olsztynek', 'Lubawa', 'Iława'],
        'Morąg': ['Orneta', 'Pasłęk'],
        'Lidzbark Warmiński': ['Bartoszyce', 'Górowo Iławeckie'],
        'Orneta': [],
        'Bartoszyce': [],
        'Górowo Iławeckie': [],
        'Mrągowo': ['Mikołajki'],
        'Mikołajki': ['Orzysz'],
        'Orzysz': [],
        'Myszyniec': ['Ostrołęka'],
        'Ostrołęka': [],
        'Chorzele': [],
        'Nidzica': ['Mława'],
        'Mława': [],
        'Lubawa': [],
        'Iława': ['Grudziąc'],
        'Grudziąc': [],
        'Pasłęk': ['Elbląg', 'Morąg'],
        'Elbląg': []
    }

    start_city = 'Olsztyn'
    goal_city = 'Elbląg'
    shortest_road = find_shortest_road(cities, start_city, goal_city)
    if shortest_road == -1:
        print(f'The road from {start_city} to {goal_city} is not exist.')
    else:
        print(f'The shortest road from {start_city} to {goal_city} is {shortest_road}.')
